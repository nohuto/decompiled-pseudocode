/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001D40
 * Callers:
 *     CiSchedulerThreadFunction @ 0x1C0001D60 (CiSchedulerThreadFunction.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001180 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSchedulerUpdateTimer @ 0x1C00011D0 (CiSchedulerUpdateTimer.c)
 *     CiSystemAcquireSpinLock @ 0x1C0001250 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001370 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0001D10 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003A34 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C0003D48 (CiLogTurboEngaged.c)
 */

char __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  char result; // al
  int v3; // esi
  unsigned __int64 v4; // r12
  int v5; // r15d
  _QWORD *p_Type; // rdi
  _QWORD **v7; // rax
  _QWORD *v8; // r14
  _QWORD *v9; // rcx
  _QWORD *i; // rax
  bool v11; // zf
  __int64 v12; // r14
  int v13; // eax

  result = WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v3 = 0;
    v4 = MEMORY[0xFFFFF78000000008] + 2000LL;
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
        if ( v8[3] <= v4 )
        {
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v8);
          v11 = *((_DWORD *)v8 + 8) == 1;
          v8[3] = 0LL;
          if ( v11 )
          {
            v12 = (__int64)(v8 - 7);
            v3 |= 0x20u;
            CiSchedulerUpdateTaskIndexPriorities(v12);
            v13 = *(_DWORD *)(v12 + 144);
            if ( (v13 & 2) != 0 )
            {
              *(_DWORD *)(v12 + 144) = v13 & 0xFFFFFFFD;
              CiSchedulerSetTaskIndexThreadTag(v12, 0);
              --CiTotalTasksBuffering;
            }
            if ( byte_1C0007298 )
              CiLogTaskIndexDeadlineExpired(v12);
            if ( (*(_DWORD *)(v12 + 144) & 1) != 0 )
              v5 = 1;
          }
          else
          {
            v3 |= 0x10u;
          }
        }
      }
      while ( p_Type );
      if ( v5 )
        CiSystemUpdateMediaBufferingState();
    }
    if ( (v3 & 0x10) == 0 )
      CiSchedulerUpdateTimer();
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( v5 )
    {
      if ( byte_1C0007298 )
        CiLogTurboEngaged();
      PoLatencySensitivityHint(4LL);
    }
    *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v3;
    return (*a1 & 0xFFFFFFDF) != 0;
  }
  return result;
}
