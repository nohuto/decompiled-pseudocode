/*
 * XREFs of ?Initialize@CD2DBitmap@@IEAAJPEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@I@Z @ 0x180030C6C
 * Callers:
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAV1@@Z @ 0x1800104A4 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@VDisplayId@@IPEAPEAV1@@Z @ 0x1800ADD4C (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180030BE4 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmap::Initialize(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5, int a6, int a7)
{
  __int128 v10; // xmm1
  int v11; // eax
  unsigned int v12; // ebx

  *(_QWORD *)(a1 + 128) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 136) = a3;
  if ( a3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a1 + 200) = *(_QWORD *)(a4 + 32);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a4 + 40);
  *(_OWORD *)(a1 + 216) = *a5;
  v10 = a5[1];
  *(_DWORD *)(a1 + 248) = a6;
  *(_OWORD *)(a1 + 232) = v10;
  *(_DWORD *)(a1 + 252) = a7;
  v11 = CD2DBitmap::InitializeBitmaps((CD2DBitmap *)a1);
  v12 = v11;
  if ( v11 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x65u);
  return v12;
}
