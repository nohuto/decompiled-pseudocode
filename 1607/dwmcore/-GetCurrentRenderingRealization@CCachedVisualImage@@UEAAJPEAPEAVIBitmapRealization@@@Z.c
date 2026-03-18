/*
 * XREFs of ?GetCurrentRenderingRealization@CCachedVisualImage@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800330B0
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedVisualImage::GetCurrentRenderingRealization(
        CCachedVisualImage *this,
        struct IBitmapRealization **a2)
{
  char *v2; // rax
  struct IBitmapRealization *v4; // rcx

  v2 = (char *)this - 8;
  v4 = 0LL;
  if ( v2 )
    v4 = (CCachedVisualImage *)((char *)this + 128);
  *a2 = v4;
  (*(void (__fastcall **)(struct IBitmapRealization *, struct IBitmapRealization **, CCachedVisualImage *))(*(_QWORD *)v4 + 8LL))(
    v4,
    a2,
    this);
  return 0LL;
}
