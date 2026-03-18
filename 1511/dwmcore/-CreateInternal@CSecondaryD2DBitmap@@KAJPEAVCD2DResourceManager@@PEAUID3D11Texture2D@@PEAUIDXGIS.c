/*
 * XREFs of ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAV1@@Z @ 0x1800104A4
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800103E0 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 * Callees:
 *     ??0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z @ 0x180012050 (--0CSecondaryD2DBitmap@@IEAA@PEAVCD2DResourceManager@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x180030C6C (-Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::CreateInternal(
        struct CD2DResourceManager *a1,
        struct ID3D11Texture2D *a2,
        struct IDXGISurface *a3,
        const struct D3D11_TEXTURE2D_DESC *a4,
        const struct D2D1_BITMAP_PROPERTIES1 *a5,
        struct CSecondaryD2DBitmap **a6)
{
  CSecondaryD2DBitmap *v10; // rax
  struct CSecondaryD2DBitmap *v11; // rsi
  int v12; // eax
  int v13; // ebp

  *a6 = 0LL;
  v10 = (CSecondaryD2DBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                          + 8LL))(
                                 WPF::g_pProcessHeap,
                                 344LL);
  if ( v10 )
    v11 = CSecondaryD2DBitmap::CSecondaryD2DBitmap(v10, a1);
  else
    v11 = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = CD2DBitmap::Initialize(v11, a2, a3, a4, a5, DisplayId::None, 0);
    v13 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x6Bu);
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v11 + 33) + 40LL))((__int64)v11 + 264);
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x51u);
    }
    else
    {
      *a6 = v11;
      v11 = 0LL;
    }
    if ( v11 )
      (*(void (__fastcall **)(struct CSecondaryD2DBitmap *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v13 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x4Au);
  }
  return (unsigned int)v13;
}
