/*
 * XREFs of sub_180003D50 @ 0x180003D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003CC0 @ 0x180003CC0 (sub_180003CC0.c)
 */

__int64 __fastcall sub_180003D50(__int64 a1, LPVOID *a2, SIZE_T a3)
{
  LPVOID v4; // rax
  LPVOID v6; // rax

  if ( *a2 )
  {
    v6 = HeapReAlloc(hHeap, 0, *a2, a3);
    if ( !v6 )
      return 2147942414LL;
    *a2 = v6;
  }
  else
  {
    v4 = sub_180003CC0(a1, a3);
    *a2 = v4;
    if ( !v4 )
      return 2147942414LL;
  }
  return 0LL;
}
