/*
 * XREFs of HvpGetCellMap @ 0x14049FB30
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401E04C0 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvpTruncateBins @ 0x14044D444 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x14044D4F0 (HvFreeHivePartial.c)
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvpPointMapEntriesToBuffer @ 0x14049F18C (HvpPointMapEntriesToBuffer.c)
 *     HvpAddFreeCellHint @ 0x14049F24C (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvpMarkCellDirty @ 0x14049F7A0 (HvpMarkCellDirty.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404A0584 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1404A06B4 (HvFreeHive.c)
 *     HvCheckHive @ 0x1404A0AF0 (HvCheckHive.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     CmpReorganizeHive @ 0x1404AD5C4 (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpAddBin @ 0x1404AEB9C (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x1404AF27C (HvpFindFreeBin.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 *     HvpGetBinMemAlloc @ 0x140558254 (HvpGetBinMemAlloc.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x1405A9BB0 (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x14066490C (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x1406664C4 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 1400) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 1408) + 8LL * ((a2 >> 21) & 0x3FF)) + 40LL * ((a2 >> 12) & 0x1FF);
}
