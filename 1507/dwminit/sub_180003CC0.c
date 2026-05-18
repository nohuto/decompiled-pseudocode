/*
 * XREFs of sub_180003CC0 @ 0x180003CC0
 * Callers:
 *     sub_180003D50 @ 0x180003D50 (sub_180003D50.c)
 * Callees:
 *     <none>
 */

LPVOID __fastcall sub_180003CC0(__int64 a1, SIZE_T a2)
{
  if ( !a2 )
    a2 = 1LL;
  return HeapAlloc(hHeap, 0, a2);
}
