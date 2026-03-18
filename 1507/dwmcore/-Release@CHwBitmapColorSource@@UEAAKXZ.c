/*
 * XREFs of ?Release@CHwBitmapColorSource@@UEAAKXZ @ 0x18001BD90
 * Callers:
 *     ?BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV?$CMatrix@UBaseSampling@CoordinateSpace@@ULocalRenderingHPC@2@@@_NPEAVCColorKey@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180023530 (-BitmapResourceToD2DBitmap@CDrawingContext@@AEAAJPEAVIBitmapResource@@PEBV-$CMatrix@UBaseSamplin.c)
 *     ?Release@CHwBitmapBrush@@UEAAKXZ @ 0x1800842F0 (-Release@CHwBitmapBrush@@UEAAKXZ.c)
 *     ?Release@CHwBitmapColorSource@@WGI@EAAKXZ @ 0x18009B4B0 (-Release@CHwBitmapColorSource@@WGI@EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwBitmapColorSource::Release(CHwBitmapColorSource *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    (*(void (__fastcall **)(CHwBitmapColorSource *, __int64))(*(_QWORD *)this + 16LL))(this, 1LL);
  return v1;
}
