/*
 * XREFs of PsSetCurrentThreadPrefetching @ 0x14050AC5C
 * Callers:
 *     PfpPrefetchSharedStart @ 0x1404F48F8 (PfpPrefetchSharedStart.c)
 *     PfpPrefetchSharedCleanup @ 0x1404F4A28 (PfpPrefetchSharedCleanup.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14050A6B0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 */

BOOLEAN __stdcall PsSetCurrentThreadPrefetching(BOOLEAN Prefetching)
{
  struct _KTHREAD *CurrentThread; // rcx
  char Queue; // dl
  BOOLEAN v4; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  Queue = (char)CurrentThread[1].Queue;
  v4 = (Queue & 0x40) != 0;
  LOBYTE(CurrentThread[1].Queue) = Queue ^ (Queue ^ (Prefetching << 6)) & 0x40;
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v4;
}
