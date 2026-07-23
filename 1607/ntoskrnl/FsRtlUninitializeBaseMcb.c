/*
 * XREFs of FsRtlUninitializeBaseMcb @ 0x1400A38B4
 * Callers:
 *     FsRtlUninitializeLargeMcb @ 0x1400A3884 (FsRtlUninitializeLargeMcb.c)
 * Callees:
 *     <none>
 */

void __stdcall FsRtlUninitializeBaseMcb(PBASE_MCB Mcb)
{
  if ( Mcb->PoolType == 1 && Mcb->MaximumPairCount == 15 )
    ExFreeToNPagedLookasideList(&FsRtlFirstMappingLookasideList, Mcb->Mapping);
  else
    ExFreePoolWithTag(Mcb->Mapping, 0);
}
