/*
 * XREFs of ?HDRConvert@CHwTextureRenderTarget@@UEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017B8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTargetView@CD3DTexture@@AEAAJXZ @ 0x180173114 (-EnsureRenderTargetView@CD3DTexture@@AEAAJXZ.c)
 *     ?HDRConvert@CD3DDeviceLevel1@@QEAAXPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@PEAUID3D11RenderTargetView@@2PEAUtagRECT@@@Z @ 0x1801744B0 (-HDRConvert@CD3DDeviceLevel1@@QEAAXPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 */

__int64 __fastcall CHwTextureRenderTarget::HDRConvert(
        CHwTextureRenderTarget *this,
        struct ID3D11ShaderResourceView *a2,
        int a3,
        int a4,
        enum DXGI_ALPHA_MODE a5,
        enum DXGI_COLOR_SPACE_TYPE a6)
{
  enum DXGI_COLOR_SPACE_TYPE v10; // edi
  CD3DTexture *v11; // rsi
  struct ID3D11RenderTargetView *v12; // rbp
  int v13; // eax
  int v14; // ebx

  v10 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 22) + 40LL))((char *)this - 176) == 2;
  v11 = (CD3DTexture *)*((_QWORD *)this + 4);
  v12 = 0LL;
  v13 = CD3DTexture::EnsureRenderTargetView(v11);
  v14 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x1B3u);
  else
    v12 = (struct ID3D11RenderTargetView *)*((_QWORD *)v11 + 29);
  if ( v14 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2CEu);
  else
    CD3DDeviceLevel1::HDRConvert(
      *(CD3DDeviceLevel1 **)(*(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL),
      a2,
      a3,
      a4,
      a5,
      a6,
      v12,
      v10,
      0LL);
  return (unsigned int)v14;
}
