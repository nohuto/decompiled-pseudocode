/*
 * XREFs of ttfdOpenFontContext @ 0x1C00A9964
 * Callers:
 *     bQueryAdvanceWidths @ 0x1C00B19B0 (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C00B1D84 (ttfdQueryFontData.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C02465DC (ttfdQueryQuadTrueTypeOutline.c)
 *     ttfdQueryGlyphAttrs @ 0x1C024760C (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     ttfdOpenFontContextInternal @ 0x1C00A99C8 (ttfdOpenFontContextInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00B18E0 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0244C28 (vMarkFontGone.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
