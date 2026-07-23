/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x14000AEA4
 * Callers:
 *     HvpFindFreeCell @ 0x140400E10 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 8) >> 2) & 1;
}
