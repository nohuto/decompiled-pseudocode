/*
 * XREFs of ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x1800AB484
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x1800AB1B0 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x180080E50 (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x180081F20 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTexturedColorSource::GetD2DBitmap(CHwTexturedColorSource *this, struct ID2D1Bitmap1 **a2)
{
  __int64 (*v4)(void); // rax
  struct ID2D1Bitmap1 **TextureNoRef; // rax
  int D2DBitmap; // eax
  int v7; // ebx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 56LL);
  if ( (char *)v4 == (char *)CHwBitmapColorSource::GetTextureNoRef )
    TextureNoRef = (struct ID2D1Bitmap1 **)CHwBitmapColorSource::GetTextureNoRef(this);
  else
    TextureNoRef = (struct ID2D1Bitmap1 **)v4();
  D2DBitmap = CD3DTexture::GetD2DBitmap(TextureNoRef, *((_DWORD *)this + 23) & 1, a2);
  v9 = D2DBitmap;
  v7 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x7Cu);
  TranslateDXGIorD3DErrorInContext(v7, 14, (int *)&v9);
  return v9;
}
