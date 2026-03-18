/*
 * XREFs of IoSizeOfIrpEx @ 0x1401BB4A4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IoSizeOfIrpEx(__int64 a1, char a2)
{
  if ( a1 && (*(_DWORD *)(a1 + 48) & 0x8000000) != 0 )
    ++a2;
  return 72LL * a2 + 208;
}
