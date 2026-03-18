/*
 * XREFs of ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18007E68C
 * Callers:
 *     ?GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18007983C (-GetD2DBitmap@CD3DSurface@@QEAAJPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180081174 (-CreateD2DBitmap@CD3DTexture@@AEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18009FE8C (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
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
