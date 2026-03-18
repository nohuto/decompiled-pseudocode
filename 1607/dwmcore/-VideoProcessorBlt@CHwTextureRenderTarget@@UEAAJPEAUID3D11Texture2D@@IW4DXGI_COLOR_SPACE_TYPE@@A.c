/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2@Z @ 0x18017BF90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x1801740A0 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUtagRECT@@0II2@Z @ 0x180175630 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIAEBUta.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        CHwTextureRenderTarget *this,
        struct ID3D11Texture2D *a2,
        int a3,
        unsigned int a4,
        const struct tagRECT *a5,
        const struct tagRECT *a6)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v11; // eax
  unsigned int v12; // ebx
  CD3DTexture *v13; // rcx
  CD3DDeviceLevel1 *v14; // rbx
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  int v16; // eax
  struct ID3D11Resource *v18; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v19[12]; // [rsp+68h] [rbp-70h] BYREF

  lpVtbl = a2->lpVtbl;
  v18 = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *, unsigned int *))lpVtbl->GetDesc)(a2, v19);
  v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v18);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2A8u);
  }
  else
  {
    v13 = (CD3DTexture *)*((_QWORD *)this + 4);
    v14 = *(CD3DDeviceLevel1 **)(*((_QWORD *)v13 + 2) + 128LL);
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(v13);
    v16 = CD3DDeviceLevel1::VideoProcessorBlt(
            v14,
            v18,
            a3,
            a4,
            v19[0],
            v19[1],
            a5,
            D3D11ResourceNoRef,
            *((_DWORD *)this - 42),
            *((_DWORD *)this - 41),
            a6);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2B3u);
  }
  if ( v18 )
    ((void (__fastcall *)(struct ID3D11Resource *))v18->lpVtbl->Release)(v18);
  return v12;
}
