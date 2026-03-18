/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x1400627E0
 * Callers:
 *     HvpFindFreeCell @ 0x14049EF7C (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 8) >> 2) & 1;
}
