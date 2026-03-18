/*
 * XREFs of MiUnlockWsSwapExclusive @ 0x1400B48D8
 * Callers:
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401F77BC (MiContractWsSwapPageFileWorker.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 * Callees:
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall MiUnlockWsSwapExclusive(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rbx

  v3 = a2 + 1040;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1040), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a2 + 1040);
  KeAbPostRelease(v3);
  return KiLeaveGuardedRegionUnsafe(a1);
}
