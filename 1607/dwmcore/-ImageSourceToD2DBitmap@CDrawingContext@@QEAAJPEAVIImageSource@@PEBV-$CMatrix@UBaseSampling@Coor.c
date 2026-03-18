/*
 * XREFs of ?ImageSourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x1800057F0
 * Callers:
 *     ?FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@W4Enum@MilBitmapWrapMode@@@Z @ 0x180004A08 (-FillShapeWithBitmap@CDrawingContext@@QEAAJPEAVIImageSource@@PEBV-$CMatrix@UBaseSampling@Coordin.c)
 * Callees:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 */

__int64 __fastcall CDrawingContext::ImageSourceToD2DBitmap(
        CDrawingContext *a1,
        CCachedVisualImage *a2,
        __int64 a3,
        char a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r10

  v6 = a5;
  if ( a5 )
    v6 = -(__int64)((a4 & 2) != 0) & a5;
  return CDrawingContext::BitmapResourceToD2DBitmap(a1, a2, v6, a6);
}
