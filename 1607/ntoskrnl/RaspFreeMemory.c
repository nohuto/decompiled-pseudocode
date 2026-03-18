/*
 * XREFs of RaspFreeMemory @ 0x140129678
 * Callers:
 *     BgpRasPrintGlyph @ 0x1401277B0 (BgpRasPrintGlyph.c)
 *     RaspGetUnscaledGlyphData @ 0x140127EBC (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140127F90 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x140128B38 (RaspInitializeGlyphData.c)
 *     RaspRasterize @ 0x140128F60 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x140129410 (RaspDestroySegmentList.c)
 *     RaspGetXExtent @ 0x140140B58 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x140140CEC (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14023AAD4 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14023ADF4 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14023B160 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1407283D4 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14012968C (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
