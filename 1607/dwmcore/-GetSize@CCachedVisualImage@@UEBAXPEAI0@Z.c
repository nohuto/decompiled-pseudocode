/*
 * XREFs of ?GetSize@CCachedVisualImage@@UEBAXPEAI0@Z @ 0x180033090
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 * Callees:
 *     <none>
 */

void __fastcall CCachedVisualImage::GetSize(CCachedVisualImage *this, unsigned int *a2, unsigned int *a3)
{
  CCachedVisualImage::GetCurrentSize((CCachedVisualImage *)((char *)this - 136), a2, a3);
}
