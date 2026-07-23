/*
 * XREFs of HvpMapEntryIsDiscardable @ 0x14002D250
 * Callers:
 *     HvpMapEntryGetFreeBin @ 0x1400EDF80 (HvpMapEntryGetFreeBin.c)
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x140438890 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x14043B810 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x14043C4E0 (CmpCheckKey.c)
 *     CmpCheckLeaf @ 0x14043EC90 (CmpCheckLeaf.c)
 *     CmpTrimHive @ 0x140519464 (CmpTrimHive.c)
 * Callees:
 *     <none>
 */

bool __fastcall HvpMapEntryIsDiscardable(__int64 a1)
{
  return (*(_BYTE *)(a1 + 8) & 2) != 0;
}
