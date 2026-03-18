/*
 * XREFs of HvpGetCellMap @ 0x140513BC0
 * Callers:
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     HvpFindNextDirtyBlockAndCreateTemporary @ 0x1401B5964 (HvpFindNextDirtyBlockAndCreateTemporary.c)
 *     HvFreeCell @ 0x1404016EC (HvFreeCell.c)
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 *     HvpAddBin @ 0x14047DF10 (HvpAddBin.c)
 *     HvpFindFreeBin @ 0x14047E5F0 (HvpFindFreeBin.c)
 *     CmpReorganizeHive @ 0x14047FA2C (CmpReorganizeHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404802D0 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     HvpTruncateBins @ 0x140481A44 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140481AF0 (HvFreeHivePartial.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 *     HvpGetBinMemAlloc @ 0x1404EDB18 (HvpGetBinMemAlloc.c)
 *     HvCheckHive @ 0x140513594 (HvCheckHive.c)
 *     HvpMarkCellDirty @ 0x1405136F0 (HvpMarkCellDirty.c)
 *     HvpSetRangeProtection @ 0x1405139A4 (HvpSetRangeProtection.c)
 *     HvpPointMapEntriesToBuffer @ 0x140513AF8 (HvpPointMapEntriesToBuffer.c)
 *     HvpRemapAndEnlistHiveBins @ 0x140514194 (HvpRemapAndEnlistHiveBins.c)
 *     HvFreeHive @ 0x1405142C4 (HvFreeHive.c)
 *     HvpRemoveFreeCellHint @ 0x140514670 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140514E4C (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1405151F8 (HvpAddFreeCellHint.c)
 *     HvpDropPagedBins @ 0x14054DD48 (HvpDropPagedBins.c)
 *     HvpBuildMapForLoaderHive @ 0x140563D50 (HvpBuildMapForLoaderHive.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 *     HvpReviveDiscardedBin @ 0x14061089C (HvpReviveDiscardedBin.c)
 *     HvpCopyModifiedData @ 0x1406128AC (HvpCopyModifiedData.c)
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
