/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18002CCF8
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x18001D2A8 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B1164 (-Create@CHwTextureRenderTarget@@SAJAEBVCResourceTag@@IIPEAVCD3DDeviceLevel1@@VDisplayId@@AEBUPix.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18014B058 (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18014B470 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180070DC8 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ??0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18008D374 (--0CHwSurfaceRenderTarget@@IEAA@PEAVCD3DDeviceLevel1@@W4DXGI_FORMAT@@VDisplayId@@@Z.c)
 */

__int64 CHwTextureRenderTarget::CHwTextureRenderTarget()
{
  _QWORD *v0; // r11
  bool IsSpecific; // al
  __int64 v2; // r11

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget();
  *v0 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  v0[15] = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  v0[22] = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  v0[23] = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  v0[24] = 0LL;
  v0[28] = 0LL;
  v0[29] = 0LL;
  IsSpecific = DisplayId::IsSpecific((DisplayId *)(v0 + 14));
  *(_BYTE *)(v2 + 240) = IsSpecific;
  return v2;
}
