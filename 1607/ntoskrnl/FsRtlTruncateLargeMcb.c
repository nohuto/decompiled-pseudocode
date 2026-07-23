/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14008BE4C
 * Callers:
 *     FsRtlTruncateMcb @ 0x1401B8820 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x14008BE84 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
