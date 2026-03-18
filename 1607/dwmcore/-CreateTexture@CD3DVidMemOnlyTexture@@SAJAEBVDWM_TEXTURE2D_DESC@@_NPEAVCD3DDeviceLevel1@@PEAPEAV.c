/*
 * XREFs of ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A6634
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180013CB4 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?CreateTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x180082A14 (-CreateTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 *     ?PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ @ 0x180181EA0 (-PushBitsToVidMemTexture@CHwVidMemTextureManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800807F4 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800A66D8 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_N1PEAVCD3DDeviceLevel1@@PEAP.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        bool a2,
        struct CD3DDeviceLevel1 *a3,
        struct CD3DVidMemOnlyTexture **a4)
{
  int v7; // eax
  struct ID3D11Texture2D *v8; // rdi
  unsigned int v9; // ebx
  int v10; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = CD3DDeviceLevel1::CreateTexture(a3, a1, 0LL, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x53u);
  }
  else
  {
    v10 = CD3DVidMemOnlyTexture::CreateFromTexture(v12, 0, a2, 0, a3, a4);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x5Au);
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
  return v9;
}
