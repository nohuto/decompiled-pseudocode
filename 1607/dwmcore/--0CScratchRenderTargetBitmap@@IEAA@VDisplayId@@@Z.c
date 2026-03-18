/*
 * XREFs of ??0CScratchRenderTargetBitmap@@IEAA@VDisplayId@@@Z @ 0x180013684
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180017438 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 * Callees:
 *     ??0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z @ 0x180013DE4 (--0CHwTextureRenderTarget@@IEAA@VDisplayId@@@Z.c)
 */

__int64 CScratchRenderTargetBitmap::CScratchRenderTargetBitmap()
{
  __int64 v0; // r11
  __int64 result; // rax

  CHwTextureRenderTarget::CHwTextureRenderTarget();
  *(_QWORD *)(v0 + 256) = 0LL;
  *(_QWORD *)v0 = &CScratchRenderTargetBitmap::`vftable'{for `CBaseRenderTarget'};
  *(_QWORD *)(v0 + 128) = &CScratchRenderTargetBitmap::`vftable'{for `CMILCOMBase'};
  *(_QWORD *)(v0 + 176) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(v0 + 184) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmap'};
  *(_QWORD *)(v0 + 192) = &CScratchRenderTargetBitmap::`vftable'{for `ID2DBitmapCacheSource'};
  *(_QWORD *)(v0 + 200) = &CScratchRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  result = v0;
  *(_WORD *)(v0 + 264) = 256;
  return result;
}
