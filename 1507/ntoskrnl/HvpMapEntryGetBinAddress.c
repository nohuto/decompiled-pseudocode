/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x1400CAB30
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
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     HvpDropPagedBins @ 0x1405987EC (HvpDropPagedBins.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 * Callees:
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, struct _EX_RUNDOWN_REF *a2, BOOLEAN *a3, _DWORD *a4)
{
  unsigned __int64 Count; // rax
  unsigned __int64 v9; // rtt
  BOOLEAN v10; // cl

  if ( (a2[3].Count & 1) == 0 )
  {
    _m_prefetchw(&a2[3]);
    v9 = a2[3].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v9 == _InterlockedCompareExchange64((volatile signed __int64 *)&a2[3], v9 + 2, v9) )
    {
      v10 = 1;
    }
    else
    {
      v10 = ExfAcquireRundownProtection(a2 + 3);
      if ( !v10 )
      {
        Count = a2[1].Count;
        goto LABEL_7;
      }
    }
    Count = a2[2].Count;
    *a4 = -1;
LABEL_7:
    *a3 = v10;
    return Count & 0xFFFFFFFFFFFFFFF0uLL;
  }
  Count = a2[1].Count;
  *a3 = 0;
  return Count & 0xFFFFFFFFFFFFFFF0uLL;
}
