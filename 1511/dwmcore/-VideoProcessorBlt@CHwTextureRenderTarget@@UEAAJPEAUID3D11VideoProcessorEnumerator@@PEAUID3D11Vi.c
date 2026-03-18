/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoProcessor@@PEAUID3D11Texture2D@@IAEBUtagRECT@@3W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18014B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180145774 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoProcessor@@PEAUID3D11Resource@@I2AEBUtagRECT@@3W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180145CBC (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11VideoProcessorEnumerator@@PEAUID3D11VideoPro.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        CD3DTexture **this,
        struct ID3D11VideoProcessorEnumerator *a2,
        struct ID3D11VideoProcessor *a3,
        struct ID3D11Texture2D *a4,
        unsigned int a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7,
        enum DXGI_COLOR_SPACE_TYPE a8)
{
  int v11; // eax
  unsigned int v12; // esi
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  int v14; // eax
  struct ID3D11Resource *v16; // [rsp+88h] [rbp+20h] BYREF

  v16 = 0LL;
  v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct ID3D11Resource **))a4->lpVtbl->QueryInterface)(
          a4,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v16);
  v12 = v11;
  if ( v11 >= 0 )
  {
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(this[2]);
    v14 = CD3DDeviceLevel1::VideoProcessorBlt(*(this - 2), a2, a3, v16, a5, D3D11ResourceNoRef, a6, a7, a8);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2E2u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2D9u);
  }
  if ( v16 )
    ((void (__fastcall *)(struct ID3D11Resource *))v16->lpVtbl->Release)(v16);
  return v12;
}
