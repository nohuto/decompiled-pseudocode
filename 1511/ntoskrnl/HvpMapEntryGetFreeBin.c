/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14003B3B4
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401AA964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     CmpReorganizeHive @ 0x1403D0DDC (CmpReorganizeHive.c)
 *     HvpFindFreeBin @ 0x1403D5908 (HvpFindFreeBin.c)
 *     HvFreeHive @ 0x1403D8128 (HvFreeHive.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvpTruncateBins @ 0x140487FD4 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140488090 (HvFreeHivePartial.c)
 *     HvpDropPagedBins @ 0x140521774 (HvpDropPagedBins.c)
 *     HvpFreeAllocatedBins @ 0x1405E48E8 (HvpFreeAllocatedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 * Callees:
 *     HvpMapEntryIsDiscardable @ 0x14003B420 (HvpMapEntryIsDiscardable.c)
 */

__int64 HvpMapEntryGetFreeBin()
{
  __int64 v0; // rcx

  if ( (unsigned __int8)HvpMapEntryIsDiscardable() )
    return *(_QWORD *)v0;
  else
    return 0LL;
}
