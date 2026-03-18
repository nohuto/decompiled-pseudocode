/*
 * XREFs of ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x180180090
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180173264 (-GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAXPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x1801744B0 (-HDRConvert@CD3DDeviceLevel1@@QEAAXPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::HDRConvertFromIntermediateTargetBitmap(
        CHwFullScreenRenderTarget *this,
        struct tagRECT *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  int ShaderResourceViewNoRef; // eax
  struct ID3D11RenderTargetView *v7; // rbx
  enum DXGI_ALPHA_MODE v8; // eax
  CD3DTexture *v10; // [rsp+70h] [rbp+8h] BYREF
  struct ID3D11ShaderResourceView *v11; // [rsp+80h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, CD3DTexture **))(**((_QWORD **)this + 23) + 192LL))(
         *((_QWORD *)this + 23),
         &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x381u);
  }
  else
  {
    ShaderResourceViewNoRef = CD3DTexture::GetShaderResourceViewNoRef(v10, &v11);
    v5 = ShaderResourceViewNoRef;
    if ( ShaderResourceViewNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, ShaderResourceViewNoRef, 0x383u);
    }
    else
    {
      v7 = *(struct ID3D11RenderTargetView **)(*((_QWORD *)this - 1) + 200LL);
      v8 = (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 22) + 32LL))((char *)this - 176);
      CD3DDeviceLevel1::HDRConvert(
        *((CD3DDeviceLevel1 **)this + 1),
        v11,
        *((_DWORD *)this + 12),
        *((_DWORD *)this + 13),
        v8,
        DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709,
        v7,
        DXGI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020,
        a2);
    }
  }
  if ( v10 )
    (*(void (__fastcall **)(CD3DTexture *))(*(_QWORD *)v10 + 8LL))(v10);
  return v5;
}
