/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IAEBUtagRECT@@1W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18013B540
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x180134360 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@III0IIAEBUtagRECT@@1W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801348A8 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@III0IIAEBUtagRECT@@1W4DXGI_COLOR_S.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        CHwTextureRenderTarget *this,
        struct ID3D11Texture2D *a2,
        int a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5,
        enum DXGI_COLOR_SPACE_TYPE a6)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v11; // eax
  unsigned int v12; // edi
  CD3DTexture *v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // edi
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  int v17; // eax
  struct ID3D11Resource *v19; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v20[12]; // [rsp+68h] [rbp-70h] BYREF

  lpVtbl = a2->lpVtbl;
  v19 = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *, unsigned int *))lpVtbl->GetDesc)(a2, v20);
  v11 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v19);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = (CD3DTexture *)*((_QWORD *)this + 2);
    v14 = *((_DWORD *)v13 + 35);
    v15 = *((_DWORD *)v13 + 34);
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(v13);
    v17 = CD3DDeviceLevel1::VideoProcessorBlt(
            *((CD3DDeviceLevel1 **)this - 2),
            v19,
            a3,
            v20[0],
            v20[1],
            D3D11ResourceNoRef,
            v15,
            v14,
            a4,
            a5,
            a6);
    v12 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2E5u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2DAu);
  }
  if ( v19 )
    ((void (__fastcall *)(struct ID3D11Resource *))v19->lpVtbl->Release)(v19);
  return v12;
}
