/*
 * XREFs of RaspFreeMemory @ 0x140152734
 * Callers:
 *     BgpRasPrintGlyph @ 0x14015078C (BgpRasPrintGlyph.c)
 *     RaspGetUnscaledGlyphData @ 0x140150F54 (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140151030 (RaspScanConvert.c)
 *     RaspInitializeGlyphData @ 0x140151BE8 (RaspInitializeGlyphData.c)
 *     RaspRasterize @ 0x140152018 (RaspRasterize.c)
 *     RaspDestroySegmentList @ 0x1401524CC (RaspDestroySegmentList.c)
 *     RaspGetXExtent @ 0x1401661BC (RaspGetXExtent.c)
 *     RaspRectangleDestroy @ 0x140166350 (RaspRectangleDestroy.c)
 *     RaspGetCompositeGlyphList @ 0x14026E440 (RaspGetCompositeGlyphList.c)
 *     RaspInitializeCompositeGlyphData @ 0x14026E760 (RaspInitializeCompositeGlyphData.c)
 *     RaspLoadCompositeGlyphData @ 0x14026EACC (RaspLoadCompositeGlyphData.c)
 *     RaspDestroyCachedBitmap @ 0x14075F354 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 */

__int64 __fastcall RaspFreeMemory(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  if ( !*a2 )
    return BgpFwFreeMemory();
  return result;
}
