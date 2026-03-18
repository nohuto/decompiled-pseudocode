/*
 * XREFs of NtGdiGetGlyphIndicesW @ 0x1C0037860
 * Callers:
 *     <none>
 * Callees:
 *     NtGdiGetGlyphIndicesWInternal @ 0x1C00376C0 (NtGdiGetGlyphIndicesWInternal.c)
 */

__int64 __fastcall NtGdiGetGlyphIndicesW(HDC a1, char *a2, int a3, char *a4, unsigned int a5)
{
  return NtGdiGetGlyphIndicesWInternal(a1, a2, a3, a4, a5, 0);
}
