/*
 * XREFs of ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x180081F20
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800AB484 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DTexture *__fastcall CHwBitmapColorSource::GetTextureNoRef(CHwBitmapColorSource *this)
{
  return (struct CD3DTexture *)*((_QWORD *)this + 20);
}
