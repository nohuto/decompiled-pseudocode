/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x1404DAA78
 * Callers:
 *     PfSnSectionInfoCleanupWorkItem @ 0x1404DA4D4 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404DA590 (PfSnPopulateReadList.c)
 *     PfpPrefetchSharedCleanup @ 0x1404DCEB8 (PfpPrefetchSharedCleanup.c)
 *     PfpPrefetchSharedStart @ 0x1404DCF90 (PfpPrefetchSharedStart.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char v3; // dl
  BOOLEAN v4; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = BYTE4(CurrentThread[1].Queue);
  v4 = (v3 & 0x40) != 0;
  BYTE4(CurrentThread[1].Queue) = v3 ^ (v3 ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
