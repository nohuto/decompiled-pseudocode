/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180002F70
 * Callers:
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180001464 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WHI@EAAKXZ @ 0x18009B4D0 (-Release@CScratchRenderTargetBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ @ 0x18009B4E0 (-Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ @ 0x18009B4F0 (-Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ.c)
 * Callees:
 *     ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800030A8 (-ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

unsigned int __fastcall CScratchRenderTargetBitmap::Release(CD3DDeviceLevel1 **this)
{
  if ( *((_BYTE *)this + 248) && *((_DWORD *)this + 32) == 1 )
    CD3DDeviceLevel1::ReturnScratchRenderTargetBitmap(this[20], (struct CScratchRenderTargetBitmap *)this);
  return CMILCOMBase::InternalRelease((CMILCOMBase *)(this + 15));
}
