/*
 * XREFs of IoSizeOfIrpEx @ 0x1401C913C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSizeOfIrpEx(__int64 a1, char a2)
{
  if ( a1 && (a1 == -1 || (*(_DWORD *)(a1 + 48) & 0x8000000) != 0) )
    ++a2;
  return 72LL * a2 + 208;
}
