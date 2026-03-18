/*
 * XREFs of NtGdiGetGlyphIndicesW @ 0x14020CBD0
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiGetGlyphIndicesWInternal @ 0x14020CC00 (NtGdiGetGlyphIndicesWInternal.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesW(HDC a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  return NtGdiGetGlyphIndicesWInternal(a1, a5, 0);
}
