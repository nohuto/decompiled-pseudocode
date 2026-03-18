/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1400E6CD8
 * Callers:
 *     FsRtlUninitializeMcb @ 0x1405F408C (FsRtlUninitializeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140079F84 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400E6D08 (FsRtlUninitializeBaseMcb.c)
 */

void __stdcall FsRtlUninitializeLargeMcb(PLARGE_MCB Mcb)
{
  if ( Mcb->GuardedMutex )
  {
    ExFreeToNPagedLookasideList(&FsRtlFastMutexLookasideList, Mcb->GuardedMutex);
    Mcb->GuardedMutex = 0LL;
    FsRtlUninitializeBaseMcb(&Mcb->BaseMcb);
  }
}
