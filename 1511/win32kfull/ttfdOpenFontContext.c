/*
 * XREFs of ttfdOpenFontContext @ 0x1C0118EA0
 * Callers:
 *     bQueryAdvanceWidths @ 0x1C00AA1F0 (bQueryAdvanceWidths.c)
 *     ttfdQueryFontData @ 0x1C00AA5BC (ttfdQueryFontData.c)
 *     ttfdQueryQuadTrueTypeOutline @ 0x1C0246704 (ttfdQueryQuadTrueTypeOutline.c)
 *     ttfdQueryGlyphAttrs @ 0x1C024769C (ttfdQueryGlyphAttrs.c)
 * Callees:
 *     EngUnmapFontFileFD @ 0x1C00AA120 (EngUnmapFontFileFD.c)
 *     ttfdOpenFontContextInternal @ 0x1C011A638 (ttfdOpenFontContextInternal.c)
 *     vMarkFontGone @ 0x1C0244DB8 (vMarkFontGone.c)
 */

__int64 ttfdOpenFontContext()
{
  return ttfdOpenFontContextInternal();
}
