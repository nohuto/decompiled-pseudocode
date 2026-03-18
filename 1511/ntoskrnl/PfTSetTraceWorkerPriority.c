/*
 * XREFs of PfTSetTraceWorkerPriority @ 0x14011A384
 * Callers:
 *     PfPowerActionNotify @ 0x1403A46FC (PfPowerActionNotify.c)
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfpLogScenarioEvent @ 0x1404F7B2C (PfpLogScenarioEvent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     PfLockExclusiveAcquire @ 0x1400FEFB4 (PfLockExclusiveAcquire.c)
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
    PfLockExclusiveAcquire(&PfTGlobals);
    if ( Thread )
      v2 = KeSetPriorityThread(Thread, Priority);
    else
      v2 = 33;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PfTGlobals, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PfTGlobals);
    KeAbPostRelease((ULONG_PTR)&PfTGlobals);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v2;
}
