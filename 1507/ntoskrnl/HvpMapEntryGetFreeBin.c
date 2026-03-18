/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14006215C
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E04C0 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpTruncateBins @ 0x14044D444 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     HvCheckHive @ 0x1404A0AF0 (HvCheckHive.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvpFindFreeBin @ 0x1404AF27C (HvpFindFreeBin.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x14065B830 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x1400CAB70 (HvpMapEntryIsDiscardable.c)
 */

__int64 HvpMapEntryGetFreeBin()
{
  __int64 v0; // rcx

  if ( (unsigned __int8)HvpMapEntryIsDiscardable() )
    return *(_QWORD *)v0;
  else
    return 0LL;
}
