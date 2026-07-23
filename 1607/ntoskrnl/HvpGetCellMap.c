/*
 * XREFs of HvpGetCellMap @ 0x1404F6FB0
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5848 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x14047D344 (HvpFindFreeBin.c)
 *     CmpReorganizeHive @ 0x14047E780 (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14047F024 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140480798 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 *     HvpGetBinMemAlloc @ 0x1404CFC3C (HvpGetBinMemAlloc.c)
 *     HvCheckHive @ 0x1404F6984 (HvCheckHive.c)
 *     HvpMarkCellDirty @ 0x1404F6AE0 (HvpMarkCellDirty.c)
 *     HvpSetRangeProtection @ 0x1404F6D94 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x1404F6EE8 (HvpPointMapEntriesToBuffer.c)
 *     HvpRemapAndEnlistHiveBins @ 0x1404F7584 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1404F76B4 (HvFreeHive.c)
 *     HvpRemoveFreeCellHint @ 0x1404F7A60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1404F85E8 (HvpAddFreeCellHint.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 *     HvpDropPagedBins @ 0x14054E0E8 (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x140564290 (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x140610950 (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x140612960 (HvpCopyModifiedData.c)
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
