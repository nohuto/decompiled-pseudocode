/*
 * XREFs of ttfdOpenFontContext @ 0x1C0019C2C
 * Callers:
 *     bQueryAdvanceWidths @ 0x1C00285C4 (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C00C2348 (ttfdQueryFontData.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C0242744 (ttfdQueryQuadTrueTypeOutline.c)
 *     ttfdQueryGlyphAttrs @ 0x1C024391C (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     ttfdOpenFontContextInternal @ 0x1C0019C90 (ttfdOpenFontContextInternal.c)
 *     EngUnmapFontFileFD @ 0x1C00C2280 (EngUnmapFontFileFD.c)
 *     vMarkFontGone @ 0x1C0240DB8 (vMarkFontGone.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
