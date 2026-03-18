/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800115B0
 * Callers:
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x18001D2A8 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4 (-ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WHI@EAAKXZ @ 0x1800BE1B0 (-Release@CScratchRenderTargetBitmap@@WHI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ @ 0x1800BE1C0 (-Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ @ 0x1800BE1D0 (-Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ.c)
 * Callees:
 *     ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800116E8 (-ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

unsigned int __fastcall CScratchRenderTargetBitmap::Release(CD3DDeviceLevel1 **this)
{
  if ( *((_BYTE *)this + 248) && *((_DWORD *)this + 32) == 1 )
    CD3DDeviceLevel1::ReturnScratchRenderTargetBitmap(this[20], (struct CScratchRenderTargetBitmap *)this);
  return CMILCOMBase::InternalRelease((CMILCOMBase *)(this + 15));
}
