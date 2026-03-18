/*
 * XREFs of ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x18001BE50
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180084638 (-GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     <none>
 */

struct CD3DTexture *__fastcall CHwBitmapColorSource::GetTextureNoRef(CHwBitmapColorSource *this)
{
  return (struct CD3DTexture *)*((_QWORD *)this + 20);
}
