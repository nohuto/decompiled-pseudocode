/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180072C70
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x180014CD8 (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18001BB04 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180084824 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DContext::CreateD2DBitmapFromDxgiSurface(
        CD2DContext *this,
        struct IDXGISurface *a2,
        const struct D2D1_BITMAP_PROPERTIES1 *a3,
        struct ID2D1Bitmap1 **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IDXGISurface *, const struct D2D1_BITMAP_PROPERTIES1 *, struct ID2D1Bitmap1 **))(**((_QWORD **)this + 5) + 496LL))(
           *((_QWORD *)this + 5),
           a2,
           a3,
           a4);
}
