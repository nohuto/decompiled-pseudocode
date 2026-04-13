/*
 * XREFs of sub_180022388 @ 0x180022388
 * Callers:
 *     unknown_libname_3 @ 0x18000ADC0 (unknown_libname_3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180022388(LPCWCH lpSrcStr, __int64 a2, WORD *a3)
{
  GetStringTypeW(1u, lpSrcStr, (a2 - (__int64)lpSrcStr) >> 1, a3);
  return a2;
}
