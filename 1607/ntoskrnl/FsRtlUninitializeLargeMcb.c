/*
 * XREFs of FsRtlUninitializeLargeMcb @ 0x1400A530C
 * Callers:
 *     FsRtlUninitializeMcb @ 0x14061E3E4 (FsRtlUninitializeMcb.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14000F4A4 (ExFreeToNPagedLookasideList.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400A533C (FsRtlUninitializeBaseMcb.c)
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
