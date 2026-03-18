/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x1400F0100
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpFindFreeBin @ 0x14047E5F0 (HvpFindFreeBin.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140481A44 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     HvCheckHive @ 0x140513594 (HvCheckHive.c)
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x140603A64 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x14002D6D0 (HvpMapEntryIsDiscardable.c)
 */

__int64 __fastcall HvpMapEntryGetFreeBin(__int64 a1)
{
  __int64 v1; // rcx

  if ( HvpMapEntryIsDiscardable(a1) )
    return *(_QWORD *)v1;
  else
    return 0LL;
}
