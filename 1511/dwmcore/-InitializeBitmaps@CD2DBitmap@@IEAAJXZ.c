/*
 * XREFs of ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180030BE4
 * Callers:
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x180030C6C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x18014DE90 (-UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180022504 (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmap::InitializeBitmaps(CD2DBitmap *this)
{
  __int64 *v1; // rdi
  int D2DBitmapFromDxgiSurface; // eax
  unsigned int v4; // esi
  __int64 v6; // rdi

  v1 = (__int64 *)((char *)this + 152);
  D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                               *(CD2DContext **)(*((_QWORD *)this + 3) + 16LL),
                               *((struct IDXGISurface **)this + 17),
                               (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 216),
                               (struct ID2D1Bitmap1 **)this + 19);
  v4 = D2DBitmapFromDxgiSurface;
  if ( D2DBitmapFromDxgiSurface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromDxgiSurface, 0x77u);
  }
  else if ( *((_DWORD *)this + 55) == 3 )
  {
    v6 = *v1;
    *((_QWORD *)this + 20) = v6;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return v4;
}
