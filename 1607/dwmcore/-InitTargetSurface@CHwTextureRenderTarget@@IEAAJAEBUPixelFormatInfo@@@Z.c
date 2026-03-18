/*
 * XREFs of ?InitTargetSurface@CHwTextureRenderTarget@@IEAAJAEBUPixelFormatInfo@@@Z @ 0x180013C54
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x180013CB4 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@@@Z @ 0x18017B9A8 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAUID3D11Texture2D@.c)
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z @ 0x18017BAC0 (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@W4DXGI_ALPHA_MODE@@PEAX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180080EEC (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::InitTargetSurface(CD3DTexture **this, const struct PixelFormatInfo *a2)
{
  int D3DSurfaceLevel; // eax
  unsigned int v5; // ebx

  D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(this[26], (unsigned int)a2, this + 21);
  v5 = D3DSurfaceLevel;
  if ( D3DSurfaceLevel < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x20Bu);
  else
    (*((void (__fastcall **)(CD3DTexture **, const struct PixelFormatInfo *))*this + 25))(this, a2);
  return v5;
}
