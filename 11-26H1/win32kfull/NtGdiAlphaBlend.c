/*
 * XREFs of NtGdiAlphaBlend @ 0x1401C2BF0
 * Callers:
 *     <none>
 * Callees:
 *     GreAlphaBlend @ 0x1400B0E88 (GreAlphaBlend.c)
 */

__int64 __fastcall NtGdiAlphaBlend(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  return GreAlphaBlend(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
