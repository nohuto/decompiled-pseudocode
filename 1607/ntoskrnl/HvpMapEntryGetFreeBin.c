/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1400EDF80
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5848 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpFindFreeBin @ 0x14047D344 (HvpFindFreeBin.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140480798 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140603B18 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x14002D250 (HvpMapEntryIsDiscardable.c)
 */

__int64 __fastcall HvpMapEntryGetFreeBin(__int64 a1)
{
  __int64 v1; // rcx

  if ( HvpMapEntryIsDiscardable(a1) )
    return *(_QWORD *)v1;
  else
    return 0LL;
}
