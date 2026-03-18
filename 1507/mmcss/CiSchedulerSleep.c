/*
 * XREFs of CiSchedulerSleep @ 0x1C0001370
 * Callers:
 *     CiSchedulerWait @ 0x1C0001630 (CiSchedulerWait.c)
 * Callees:
 *     CiSchedulerProcessDeadlines @ 0x1C0001480 (CiSchedulerProcessDeadlines.c)
 *     CiSchedulerCompleteTimerResolutionTransition @ 0x1C0001610 (CiSchedulerCompleteTimerResolutionTransition.c)
 *     CiSchedulerUpdateTimer @ 0x1C0001C50 (CiSchedulerUpdateTimer.c)
 *     CiLogSchedulerSleep @ 0x1C00037A4 (CiLogSchedulerSleep.c)
 *     CiLogSchedulerWakeup @ 0x1C000381C (CiLogSchedulerWakeup.c)
 */

__int64 __fastcall CiSchedulerSleep(unsigned int a1, unsigned int a2, unsigned __int32 *a3)
{
  __int64 v4; // rdi
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int32 i; // eax
  __int64 result; // rax
  unsigned __int32 v10; // [rsp+48h] [rbp+10h] BYREF

  v4 = a2;
  if ( qword_1C0007198 )
    RtlRbRemoveNode(&WPP_MAIN_CB.SectorSize, &WPP_MAIN_CB.Reserved);
  LOBYTE(v6) = 0;
  v7 = *(_QWORD **)&WPP_MAIN_CB.SectorSize;
  qword_1C0007198 = v4 + MEMORY[0xFFFFF78000000008];
  if ( *(_QWORD *)&WPP_MAIN_CB.SectorSize )
  {
    while ( 1 )
    {
      if ( v7[3] <= (unsigned __int64)(v4 + MEMORY[0xFFFFF78000000008]) )
      {
        v6 = (_QWORD *)v7[1];
        if ( !v6 )
        {
          LOBYTE(v6) = 1;
          break;
        }
      }
      else
      {
        v6 = (_QWORD *)*v7;
        if ( !*v7 )
          break;
      }
      v7 = v6;
    }
  }
  RtlRbInsertNodeEx(&WPP_MAIN_CB.SectorSize, v7, (unsigned __int8)v6, &WPP_MAIN_CB.Reserved);
  CiSchedulerUpdateTimer();
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
  if ( byte_1C0007298 )
    CiLogSchedulerSleep(a1);
  for ( i = _InterlockedExchange(&CiSchedulerWakeupReason, 0); ; i = 0 )
  {
    v10 = i;
    if ( !i )
      KeWaitForSingleObject(*(PVOID *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, Executive, 0, 1u, 0LL);
    CiSchedulerCompleteTimerResolutionTransition();
    if ( (unsigned __int8)CiSchedulerProcessDeadlines(&v10) )
      break;
    if ( byte_1C0007298 )
      CiLogSchedulerWakeup(v10);
  }
  result = v10;
  *a3 = v10;
  return result;
}
