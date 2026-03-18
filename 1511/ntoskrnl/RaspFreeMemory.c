/*
 * XREFs of RaspFreeMemory @ 0x14011E4B4
 * Callers:
 *     BgpRasPrintGlyph @ 0x14011C50C (BgpRasPrintGlyph.c)
 *     RaspGetUnscaledGlyphData @ 0x14011CCD4 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x14011CDB0 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x14011D968 (RaspInitializeGlyphData.c)
 *     RaspRasterize @ 0x14011DD98 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x14011E24C (RaspDestroySegmentList.c)
 *     RaspGetXExtent @ 0x140137618 (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x1401377AC (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14021F018 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14021F338 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14021F6A4 (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x1406DC30C (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
