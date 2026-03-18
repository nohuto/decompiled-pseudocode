/*
 * XREFs of ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJXZ @ 0x180082E00
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180082E60 (-Init@CHwTextureRenderTarget@@IEAAJAEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18013B0CC (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18013B1D4 (-Init@CHwTextureRenderTarget@@IEAAJW4DXGI_ALPHA_MODE@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z @ 0x180081824 (-UpdatePixelFormatInfo@CHwSurfaceRenderTarget@@QEAAXPEAVIPixelFormat@@@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180084EB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::InitTargetSurface(CD3DTexture **this, unsigned int a2)
{
  int D3DSurfaceLevel; // eax
  unsigned int v4; // edi

  if ( *((_DWORD *)this[20] + 104) == -1 )
  {
    v4 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x217u);
  }
  else
  {
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(this[24], a2, this + 21);
    v4 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x21Du);
    else
      CHwSurfaceRenderTarget::UpdatePixelFormatInfo((CHwSurfaceRenderTarget *)this, (struct IPixelFormat *)(this + 22));
  }
  return v4;
}
