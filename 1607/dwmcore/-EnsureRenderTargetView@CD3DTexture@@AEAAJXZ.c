/*
 * XREFs of ?EnsureRenderTargetView@CD3DTexture@@AEAAJXZ @ 0x180173114
 * Callers:
 *     ?HDRConvert@CHwTextureRenderTarget@@UEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18017B8A0 (-HDRConvert@CHwTextureRenderTarget@@UEAAJPEAUID3D11ShaderResourceView@@IIW4DXGI_ALPHA_MODE@@W4DX.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsRenderTarget@CD3DTexture@@AEBA_NXZ @ 0x1800810F8 (-IsRenderTarget@CD3DTexture@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DTexture::EnsureRenderTargetView(CD3DTexture *this)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CD3DTexture *))(*(_QWORD *)this + 24LL))(this)
    && *((_QWORD *)this + 16)
    && CD3DTexture::IsRenderTarget(this) )
  {
    if ( !*((_QWORD *)this + 29) )
    {
      v3 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 128LL) + 568LL);
      v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 72LL))(v3, *((_QWORD *)this + 16), 0LL);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2F7u);
    }
  }
  else
  {
    v2 = -2003292412;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292412, 0x2F0u);
  }
  return v2;
}
