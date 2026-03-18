/*
 * XREFs of ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180013DE4
 * Callers:
 *     ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x180013684 (--0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z.c)
 *     ?Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x1800B42D4 (-Create@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIVDisplayId@@AEBUPix.c)
 *     ?CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAUID3D11Texture2D@@PEAPEAV1@@Z @ 0x18017B70C (-CreateFromTexture@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatI.c)
 *     ?OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PEAXPEAPEAV1@@Z @ 0x18017BD48 (-OpenShared@CHwTextureRenderTarget@@SAJPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@PE.c)
 * Callees:
 *     ??0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z @ 0x18002E780 (--0CHwSurfaceRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 CHwTextureRenderTarget::CHwTextureRenderTarget()
{
  __int64 v0; // r10

  CHwSurfaceRenderTarget::CHwSurfaceRenderTarget();
  *(_QWORD *)v0 = &CHwTextureRenderTarget::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(v0 + 128) = &CHwTextureRenderTarget::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v0 + 176) = &CHwTextureRenderTarget::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(v0 + 184) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v0 + 192) = &CHwTextureRenderTarget::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v0 + 200) = &CHwTextureRenderTarget::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(v0 + 208) = 0LL;
  *(_QWORD *)(v0 + 240) = 0LL;
  *(_QWORD *)(v0 + 248) = 0LL;
  *(_DWORD *)(v0 + 216) = 0;
  return v0;
}
