/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x140114514
 * Callers:
 *     PfPowerActionNotify @ 0x1403CFF90 (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x14052FC18 (PfpLogScenarioEvent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     FsRtlAcquirePushLockExclusive @ 0x14007B188 (FsRtlAcquirePushLockExclusive.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KeSetPriorityThread @ 0x1400D2F20 (KeSetPriorityThread.c)
 */

__int64 __fastcall PfTSetTraceWorkerPriority(unsigned int Priority)
{
  unsigned int v2; // ebx

  if ( Priority > 0x1F )
  {
    return 32;
  }
  else
  {
    FsRtlAcquirePushLockExclusive((volatile signed __int32 *)&PfTGlobals);
    if ( Thread )
      v2 = KeSetPriorityThread(Thread, Priority);
    else
      v2 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KeLeaveCriticalRegion();
  }
  return v2;
}
