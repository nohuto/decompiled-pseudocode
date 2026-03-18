/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x14014FEAC
 * Callers:
 *     HvCheckHive @ 0x1403D0558 (HvCheckHive.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1403D169C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1403D9584 (HvpAddFreeCellHint.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x1403F7AD4 (HvpSetRangeProtection.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x140406530 (HvpReleaseCellPaged.c)
 *     HvpRemoveFreeCellHint @ 0x140479A30 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     HvpCopyModifiedData @ 0x1405EDFD4 (HvpCopyModifiedData.c)
 * Callees:
 *     <none>
 */

void __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  ExReleaseRundownProtection_0(a2 + 3);
}
