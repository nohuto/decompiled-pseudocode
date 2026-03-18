/*
 * XREFs of ?GetD2DBitmap@CHwTexturedColorSource@@QEAAJPEAPEAUID2D1Bitmap1@@@Z @ 0x18002C37C
 * Callers:
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18002BF80 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z @ 0x18002D5CC (-GetD2DBitmap@CD3DTexture@@QEAAJ_NPEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x1800325C0 (-GetTextureNoRef@CHwBitmapColorSource@@UEAAPEAVCD3DTexture@@XZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwTexturedColorSource::GetD2DBitmap(CHwTexturedColorSource *this, struct ID2D1Bitmap1 **a2)
{
  struct CD3DTexture *(__fastcall *v4)(CHwBitmapColorSource *__hidden); // rdi
  CD3DTexture *TextureNoRef; // rax
  int D2DBitmap; // eax
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(struct CD3DTexture *(__fastcall **)(CHwBitmapColorSource *__hidden))(*(_QWORD *)this + 56LL);
  if ( v4 == CHwBitmapColorSource::GetTextureNoRef )
    TextureNoRef = CHwBitmapColorSource::GetTextureNoRef(this);
  else
    TextureNoRef = v4(this);
  D2DBitmap = CD3DTexture::GetD2DBitmap(TextureNoRef, *((_DWORD *)this + 23) & 1, a2);
  v9 = D2DBitmap;
  v7 = D2DBitmap;
  if ( D2DBitmap < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmap, 0x7Cu);
  TranslateDXGIorD3DErrorInContext(v7, 20LL, &v9);
  return v9;
}
