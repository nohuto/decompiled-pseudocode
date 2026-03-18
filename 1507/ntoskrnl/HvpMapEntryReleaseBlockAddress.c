/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x14017DF88
 * Callers:
 *     HvpSetRangeProtection @ 0x14049EBB4 (HvpSetRangeProtection.c)
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvpAddFreeCellHint @ 0x14049F24C (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x14049F304 (HvpEnlistFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14049F5E0 (HvpRemoveFreeCellHint.c)
 *     HvFreeCell @ 0x14049FC7C (HvFreeCell.c)
 *     HvCheckHive @ 0x1404A0AF0 (HvCheckHive.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1404ADF1C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     HvpReleaseCellPaged @ 0x1404C2900 (HvpReleaseCellPaged.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     HvpCopyModifiedData @ 0x1406664C4 (HvpCopyModifiedData.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 */

void __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2)
{
  unsigned __int64 v2; // rtt

  _m_prefetchw(&a2[3]);
  v2 = a2[3].Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64((volatile signed __int64 *)&a2[3], v2 - 2, v2) )
    ExfReleaseRundownProtection(a2 + 3);
}
