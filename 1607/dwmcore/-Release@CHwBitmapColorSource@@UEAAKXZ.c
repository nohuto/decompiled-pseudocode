/*
 * XREFs of ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x180081EF0
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180064710 (-BitmapResourceToD2DBitmap@CDrawingContext@@QEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1800AB090 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?Release@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x1800C1A70 (-Release@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwBitmapColorSource::Release(CHwBitmapColorSource *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CHwBitmapColorSource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
