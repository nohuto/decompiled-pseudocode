/*
 * XREFs of ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAX1IPEAPEAV1@@Z @ 0x18002B180
 * Callers:
 *     ?OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@@PEAX_NIPEAPEAV1@@Z @ 0x18002B094 (-OpenShared@CHwDeviceBitmapColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@IVDisplayId@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18014B364 (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z.c)
 *     ?EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ @ 0x18015F6E0 (-EnsureVidMemOnlyTexture@CDxHandleDecodeBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180024924 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::OpenSharedTexture(
        struct D3D11_TEXTURE2D_DESC *a1,
        __int64 a2,
        __int64 **a3,
        void *a4,
        bool a5,
        unsigned int a6,
        struct CD3DVidMemOnlyTexture **a7)
{
  int v9; // eax
  unsigned int v10; // edi
  int v11; // eax
  struct ID3D11Texture2D *v13; // [rsp+30h] [rbp-18h] BYREF

  v13 = 0LL;
  v9 = CD3DDeviceLevel1::OpenSharedTexture(a3, a1, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, a5, &v13);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xA0u);
  }
  else
  {
    v11 = CD3DVidMemOnlyTexture::CreateFromTexture(v13, a6, 0, (struct CD3DDeviceLevel1 *)a3, a7);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA6u);
    else
      *((_QWORD *)*a7 + 31) = a4;
  }
  if ( v13 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v13->lpVtbl->Release)(v13);
  return v10;
}
