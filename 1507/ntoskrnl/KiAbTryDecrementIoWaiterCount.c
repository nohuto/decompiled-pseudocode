/*
 * XREFs of KiAbTryDecrementIoWaiterCount @ 0x1400F4C74
 * Callers:
 *     KiAbEntryRemoveFromTree @ 0x1400F5E10 (KiAbEntryRemoveFromTree.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbTryDecrementIoWaiterCount(__int64 a1, __int64 a2)
{
  char result; // al

  if ( (*(_BYTE *)(a1 + 27) & 2) != 0 )
  {
    --*(_WORD *)(a2 + 90);
    result = *(_BYTE *)(a1 + 27) & 0xFD;
    *(_BYTE *)(a1 + 27) = result;
  }
  return result;
}
