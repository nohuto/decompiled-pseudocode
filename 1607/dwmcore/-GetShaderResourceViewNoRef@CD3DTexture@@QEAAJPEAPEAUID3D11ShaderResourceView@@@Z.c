/*
 * XREFs of ?GetShaderResourceViewNoRef@CD3DTexture@@QEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x180173264
 * Callers:
 *     ?GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801322D0 (-GetBitmapShaderResourceViewNoRef@CRenderTargetBitmap@@UEAAJU_LUID@@VDisplayId@@W4StereoContext@.c)
 *     ?GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PEBUBitmapSourceInfo@@AEBU_GUID@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180162844 (-GetBitmapShaderResourceViewFromBitmapSourceNoRef@@YAJPEAVIBitmapSource@@PEBUPixelFormatInfo@@PE.c)
 *     ?GetShaderResourceViewNoRef@CHwTextureRenderTarget@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z @ 0x18017B890 (-GetShaderResourceViewNoRef@CHwTextureRenderTarget@@UEAAJPEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ?HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z @ 0x180180090 (-HDRConvertFromIntermediateTargetBitmap@CHwFullScreenRenderTarget@@UEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureShaderResourceView@CD3DTexture@@AEAAJXZ @ 0x1801731C4 (-EnsureShaderResourceView@CD3DTexture@@AEAAJXZ.c)
 */

__int64 __fastcall CD3DTexture::GetShaderResourceViewNoRef(CD3DTexture *this, struct ID3D11ShaderResourceView **a2)
{
  int v4; // eax
  unsigned int v5; // ebx

  *a2 = 0LL;
  v4 = CD3DTexture::EnsureShaderResourceView(this);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A2u);
  else
    *a2 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 28);
  return v5;
}
