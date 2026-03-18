/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001030
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0001E90 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSystemAcquireSpinLock @ 0x1C0001000 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001060 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001800 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001E10 (CiSchedulerUpdateTimer.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003DC0 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTaskIndexPreDeadlineExpired @ 0x1C0003E24 (CiLogTaskIndexPreDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C000415C (CiLogTurboEngaged.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  _DWORD *v2; // rbx
  unsigned __int64 v3; // r13
  int v4; // esi
  int v5; // r12d
  _QWORD *p_Type; // rdi
  _QWORD **v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  _QWORD *v11; // rbp
  int v12; // eax

  result = WPP_MAIN_CB.SectorSize;
  v2 = a1;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v3 = MEMORY[0xFFFFF78000000008] + 2000LL;
    v4 = 0;
    v5 = 0;
    CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
    CiSchedulerTimerNode = 2LL;
    if ( WPP_MAIN_CB.DeviceObjectExtension )
    {
      do
      {
        v7 = (_QWORD **)p_Type[1];
        v8 = p_Type;
        v9 = p_Type;
        if ( v7 )
        {
          p_Type = (_QWORD *)p_Type[1];
          for ( i = *v7; i; i = (_QWORD *)*i )
            p_Type = i;
        }
        else
        {
          for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
                p_Type;
                p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*p_Type == v9 )
              break;
            v9 = p_Type;
          }
        }
        if ( v8[3] <= v3 )
        {
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v8);
          v8[3] = 0LL;
          if ( *((_DWORD *)v8 + 8) == 1 )
          {
            v4 |= 0x20u;
            if ( *((_BYTE *)v8 + 36) )
            {
              v11 = v8 - 12;
            }
            else
            {
              v11 = v8 - 7;
              if ( (v8[16] & 1) != 0 )
                v5 = 1;
            }
            CiSchedulerUpdateTaskIndexPriorities(v11);
            v12 = *((_DWORD *)v11 + 46);
            if ( (v12 & 2) != 0 && (*((_BYTE *)v8 + 36) || !*((_BYTE *)v11 + 132)) )
            {
              *((_DWORD *)v11 + 46) = v12 & 0xFFFFFFFD;
              CiSchedulerSetTaskIndexThreadTag(v11, 0LL);
              --CiTotalTasksBuffering;
            }
            if ( byte_1C0007290 )
            {
              if ( *((_BYTE *)v8 + 36) )
                CiLogTaskIndexPreDeadlineExpired(v11);
              else
                CiLogTaskIndexDeadlineExpired(v11);
            }
          }
          else
          {
            v4 |= 0x10u;
          }
        }
      }
      while ( p_Type );
      v2 = a1;
      if ( v5 && CiCurrentMediaBufferingState )
      {
        CiCurrentMediaBufferingState = 0;
        PoNotifyMediaBuffering(0LL);
      }
    }
    if ( (v4 & 0x10) == 0 )
      CiSchedulerUpdateTimer();
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( v5 )
    {
      if ( byte_1C0007290 )
        CiLogTurboEngaged();
      PoLatencySensitivityHint(4LL);
    }
    *v2 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v4;
    return (*v2 & 0xFFFFFFDF) != 0;
  }
  return result;
}
