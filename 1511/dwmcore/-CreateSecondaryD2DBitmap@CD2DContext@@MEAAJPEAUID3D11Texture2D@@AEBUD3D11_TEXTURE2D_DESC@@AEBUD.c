/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800103E0
 * Callers:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x180011458 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEA.c)
 * Callees:
 *     ?CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@PEAPEAV1@@Z @ 0x1800104A4 (-CreateInternal@CSecondaryD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGIS.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DContext::CreateSecondaryD2DBitmap(
        struct CD2DResourceManager **this,
        struct ID3D11Texture2D *a2,
        const struct D3D11_TEXTURE2D_DESC *a3,
        const struct D2D1_BITMAP_PROPERTIES1 *a4,
        struct CSecondaryD2DBitmap **a5)
{
  struct CSecondaryD2DBitmap **v5; // r14
  int v10; // eax
  unsigned int v11; // edi
  int Internal; // eax
  struct IDXGISurface *v14; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v14 = 0LL;
  *a5 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct IDXGISurface **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec,
          &v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x74Bu);
  }
  else
  {
    Internal = CSecondaryD2DBitmap::CreateInternal(this[1], a2, v14, a3, a4, v5);
    v11 = Internal;
    if ( Internal < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Internal, 0x757u);
  }
  if ( v14 )
    ((void (__fastcall *)(struct IDXGISurface *))v14->lpVtbl->Release)(v14);
  return v11;
}
