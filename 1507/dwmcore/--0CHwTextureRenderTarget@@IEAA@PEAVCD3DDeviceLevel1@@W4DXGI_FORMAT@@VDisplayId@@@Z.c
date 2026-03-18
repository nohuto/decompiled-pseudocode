/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180083198
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180001464 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800574FC (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18013AEC0 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18013B2E0 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180056350 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ??0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180082254 (--0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 __fastcall CHwTextureRenderTarget::CHwTextureRenderTarget(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r11
  bool IsSpecific; // al
  __int64 v6; // r11

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget(a1, a2, a3, a4);
  *v4 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  v4[15] = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  v4[22] = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  v4[23] = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v4[24] = 0LL;
  v4[28] = 0LL;
  v4[29] = 0LL;
  IsSpecific = DisplayId::IsSpecific((DisplayId *)(v4 + 14));
  *(_BYTE *)(v6 + 240) = IsSpecific;
  return v6;
}
