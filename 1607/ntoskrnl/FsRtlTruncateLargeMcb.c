/*
 * XREFs of FsRtlTruncateLargeMcb @ 0x14008C6EC
 * Callers:
 *     FsRtlTruncateMcb @ 0x1401B8A4C (FsRtlTruncateMcb.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     FsRtlTruncateBaseMcb @ 0x14008C724 (FsRtlTruncateBaseMcb.c)
 */

void __stdcall FsRtlTruncateLargeMcb(PLARGE_MCB Mcb, LONGLONG Vbn)
{
  ExAcquireFastMutex(Mcb->GuardedMutex);
  FsRtlTruncateBaseMcb(&Mcb->BaseMcb, Vbn);
  KeReleaseGuardedMutex(Mcb->GuardedMutex);
}
