/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x14003B420
 * Callers:
 *     HvpMapEntryGetFreeBin @ 0x14003B3B4 (HvpMapEntryGetFreeBin.c)
 *     CmpTrimHive @ 0x1403BAC40 (CmpTrimHive.c)
 *     HvIsCellAllocated @ 0x1403F94C0 (HvIsCellAllocated.c)
 *     CmpCheckLeaf @ 0x1403F9670 (CmpCheckLeaf.c)
 *     CmpCheckValueList @ 0x140403CF0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140404270 (CmpCheckKey.c)
 *     HvpFindFreeCell @ 0x140479CB0 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
