/*
 * XREFs of ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x18009FE8C
 * Callers:
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x18009FDB8 (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z @ 0x180178DA0 (-UpdateAlphaMode@CD2DBitmap@@UEAAJW4D2D1_ALPHA_MODE@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18007E68C (-CreateD2DBitmapFromDxgiSurface@CD2DContext@@QEAAJPEAUIDXGISurface@@AEBUD2D1_BITMAP_PROPERTIES1@.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::InitializeBitmaps(CD2DBitmap *this)
{
  __int64 *v1; // rsi
  int D2DBitmapFromDxgiSurface; // eax
  unsigned int v4; // edi
  __int64 v6; // rcx

  v1 = (__int64 *)((char *)this + 152);
  D2DBitmapFromDxgiSurface = CD2DContext::CreateD2DBitmapFromDxgiSurface(
                               *(CD2DContext **)(*((_QWORD *)this + 3) + 24LL),
                               *((struct IDXGISurface **)this + 17),
                               (const struct D2D1_BITMAP_PROPERTIES1 *)((char *)this + 216),
                               (struct ID2D1Bitmap1 **)this + 19);
  v4 = D2DBitmapFromDxgiSurface;
  if ( D2DBitmapFromDxgiSurface < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DBitmapFromDxgiSurface, 0x78u);
  }
  else if ( *((_DWORD *)this + 55) == 3 )
  {
    v6 = *v1;
    *((_QWORD *)this + 20) = *v1;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return v4;
}
