/*
 * XREFs of RaspFreeMemory @ 0x140129BE8
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     RaspGetUnscaledGlyphData @ 0x14012842C (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x1401290A8 (RaspInitializeGlyphData.c)
 *     RaspRasterize @ 0x1401294D0 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140129980 (RaspDestroySegmentList.c)
 *     RaspGetXExtent @ 0x1401410C8 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x14014125C (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14023A9B8 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14023ACD8 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14023B044 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1407283D4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
