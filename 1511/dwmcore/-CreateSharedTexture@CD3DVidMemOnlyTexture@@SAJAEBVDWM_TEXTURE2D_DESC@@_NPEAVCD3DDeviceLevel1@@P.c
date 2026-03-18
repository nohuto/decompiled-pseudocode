/*
 * XREFs of ?CreateSharedTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@_NPEAVCD3DDeviceLevel1@@PEAPEAXPEAPEAV1@@Z @ 0x18014FF40
 * Callers:
 *     ?CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ @ 0x18014D410 (-CreateSharedTexture@CHwBitmapColorSource@@IEAAJXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAXPEAPEAUID3D11Texture2D@@@Z @ 0x1801453E0 (-CreateSharedTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateSharedTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        __int64 a2,
        struct CD3DDeviceLevel1 *a3,
        void **a4,
        struct CD3DVidMemOnlyTexture **a5)
{
  int v7; // eax
  struct ID3D11Texture2D *v8; // rsi
  unsigned int v9; // edi
  int v10; // eax
  struct ID3D11Texture2D *v12; // [rsp+30h] [rbp-18h] BYREF

  v12 = 0LL;
  v7 = CD3DDeviceLevel1::CreateSharedTexture(a3, a1, (struct D3D11_SUBRESOURCE_DATA *)a3, a4, &v12);
  v8 = v12;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v10 = CD3DVidMemOnlyTexture::CreateFromTexture(v12, 0, 0, a3, a5);
    v9 = v10;
    if ( v10 >= 0 )
      *((_QWORD *)*a5 + 31) = *a4;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x7Du);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x77u);
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
  return v9;
}
