/*
 * XREFs of ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18014B25C
 * Callers:
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18014B058 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x180027E00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x18002B2DC (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Init@CBaseRenderTarget@@IEAAJXZ @ 0x18002C5B8 (-Init@CBaseRenderTarget@@IEAAJXZ.c)
 *     ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x18002C960 (-InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTURE2D_DESC@@@Z @ 0x18014B65C (-SizeAndPixelInfoFromTextureDesc@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@AEBUD3D11_TEXTU.c)
 */

__int64 __fastcall CHwTextureRenderTarget::Init(
        struct CD3DDeviceLevel1 **this,
        enum DXGI_ALPHA_MODE a2,
        struct ID3D11Texture2D *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // edx
  int inited; // eax
  int v11; // eax
  CMILPoolResource *v12; // rcx
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+30h] [rbp-58h] BYREF

  v6 = CD3DVidMemOnlyTexture::CreateFromTexture(a3, 0, 0, this[20], this + 24);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ((void (__fastcall *)(struct ID3D11Texture2D *, struct D3D11_TEXTURE2D_DESC *))a3->lpVtbl->GetDesc)(a3, &v14);
    v8 = CHwTextureRenderTarget::SizeAndPixelInfoFromTextureDesc((CHwTextureRenderTarget *)this, a2, &v14);
    v7 = v8;
    if ( v8 >= 0 )
    {
      inited = CHwTextureRenderTarget::InitTargetSurface(this, v9);
      v7 = inited;
      if ( inited >= 0 )
      {
        v11 = CBaseRenderTarget::Init((CBaseRenderTarget *)this);
        v7 = v11;
        if ( v11 >= 0 )
          return v7;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1D8u);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inited, 0x1D6u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1D4u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1D1u);
  }
  v12 = this[21];
  if ( v12 )
  {
    CMILPoolResource::Release(v12);
    this[21] = 0LL;
  }
  return v7;
}
