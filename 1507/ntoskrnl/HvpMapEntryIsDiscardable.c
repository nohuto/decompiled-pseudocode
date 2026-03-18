/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x1400CAB70
 * Callers:
 *     HvpMapEntryGetFreeBin @ 0x14006215C (HvpMapEntryGetFreeBin.c)
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1404C29A0 (HvIsCellAllocated.c)
 *     CmpTrimHive @ 0x1404EA73C (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
