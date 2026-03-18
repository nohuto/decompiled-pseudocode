/*
 * XREFs of FsRtlNumberOfRunsInLargeMcb @ 0x1401AC7F0
 * Callers:
 *     FsRtlNumberOfRunsInMcb @ 0x1401AC820 (FsRtlNumberOfRunsInMcb.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 */

ULONG __stdcall FsRtlNumberOfRunsInLargeMcb(PLARGE_MCB Mcb)
{
  ULONG PairCount; // ebx

  ExAcquireFastMutex(Mcb->GuardedMutex);
  PairCount = Mcb->BaseMcb.PairCount;
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
  return PairCount;
}
