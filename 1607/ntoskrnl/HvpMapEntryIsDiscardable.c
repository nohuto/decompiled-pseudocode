/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x14002D6D0
 * Callers:
 *     HvpMapEntryGetFreeBin @ 0x1400F0100 (HvpMapEntryGetFreeBin.c)
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1404399C0 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043C940 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043D610 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x14043FDC0 (CmpCheckLeaf.c)
 *     CmpTrimHive @ 0x1404A1058 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
