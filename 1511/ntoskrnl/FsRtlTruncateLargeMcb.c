/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x1400D6CD8
 * Callers:
 *     FsRtlTruncateMcb @ 0x1401ACAB4 (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x1400D6D10 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
