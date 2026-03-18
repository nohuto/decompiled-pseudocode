/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x14012FD84
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14066D008 (FsRtlUninitializeMcb.c)
 * Callees:
 *     FsRtlUninitializeBaseMcb @ 0x1400330E8 (FsRtlUninitializeBaseMcb.c)
 *     ExFreeToNPagedLookasideList @ 0x140033280 (ExFreeToNPagedLookasideList.c)
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
