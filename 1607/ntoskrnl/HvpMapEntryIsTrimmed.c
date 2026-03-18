/*
 * XREFs of HvpMapEntryIsTrimmed @ 0x14000B324
 * Callers:
 *     HvpFindFreeCell @ 0x140401F50 (HvpFindFreeCell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryIsTrimmed(__int64 a1)
{
  return (*(unsigned __int8 *)(a1 + 8) >> 2) & 1;
}
