/*
 * XREFs of CiSchedulerProcessDeadlines @ 0x1C0001480
 * Callers:
 *     CiSchedulerDeepSleep @ 0x1C00012D0 (CiSchedulerDeepSleep.c)
 *     CiSchedulerSleep @ 0x1C0001370 (CiSchedulerSleep.c)
 * Callees:
 *     CiSchedulerSetTaskIndexThreadTag @ 0x1C0001180 (CiSchedulerSetTaskIndexThreadTag.c)
 *     CiSystemAcquireSpinLock @ 0x1C00011D0 (CiSystemAcquireSpinLock.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001C50 (CiSchedulerUpdateTimer.c)
 *     CiSchedulerUpdateTaskIndexPriorities @ 0x1C0001DF0 (CiSchedulerUpdateTaskIndexPriorities.c)
 *     CiSystemUpdateMediaBufferingState @ 0x1C0002790 (CiSystemUpdateMediaBufferingState.c)
 *     CiLogTaskIndexDeadlineExpired @ 0x1C0003954 (CiLogTaskIndexDeadlineExpired.c)
 *     CiLogTurboEngaged @ 0x1C0003C68 (CiLogTurboEngaged.c)
 */

__int64 __fastcall CiSchedulerProcessDeadlines(_DWORD *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rbp
  int v4; // esi
  int v5; // r15d
  _QWORD *p_Type; // rbx
  unsigned __int8 v7; // r12
  _QWORD **v8; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx
  _QWORD *i; // rax
  __int64 v12; // rdi
  int v13; // eax

  result = *(_QWORD *)&WPP_MAIN_CB.SectorSize;
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    v3 = MEMORY[0xFFFFF78000000008] + 2000LL;
    v4 = 0;
    v5 = 0;
    CiSystemAcquireSpinLock((KSPIN_LOCK *)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
    p_Type = &WPP_MAIN_CB.DeviceObjectExtension->Type;
    v7 = 1;
    CiSchedulerTimerNode = 2LL;
    if ( WPP_MAIN_CB.DeviceObjectExtension )
    {
      do
      {
        v8 = (_QWORD **)p_Type[1];
        v9 = p_Type;
        v10 = p_Type;
        if ( v8 )
        {
          p_Type = (_QWORD *)p_Type[1];
          for ( i = *v8; i; i = (_QWORD *)*i )
            p_Type = i;
        }
        else
        {
          for ( p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL);
                p_Type;
                p_Type = (_QWORD *)(p_Type[2] & 0xFFFFFFFFFFFFFFFCuLL) )
          {
            if ( (_QWORD *)*p_Type == v10 )
              break;
            v10 = p_Type;
          }
        }
        if ( v9[3] <= v3 )
        {
          RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, v9);
          v9[3] = 0LL;
          if ( *((_DWORD *)v9 + 8) == 1 )
          {
            v12 = (__int64)(v9 - 7);
            v4 |= 0x20u;
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
            v4 |= 0x10u;
          }
        }
      }
      while ( p_Type );
      if ( v5 )
        CiSystemUpdateMediaBufferingState(v10);
    }
    if ( (v4 & 0x10) == 0 )
      CiSchedulerUpdateTimer();
    WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
    if ( v5 )
    {
      if ( byte_1C0007298 )
        CiLogTurboEngaged();
      PoLatencySensitivityHint(4LL);
    }
    *a1 |= _InterlockedExchange(&CiSchedulerWakeupReason, 0) | v4;
    if ( (*a1 & 0xFFFFFFDF) == 0 )
      return 0;
    return v7;
  }
  return result;
}
