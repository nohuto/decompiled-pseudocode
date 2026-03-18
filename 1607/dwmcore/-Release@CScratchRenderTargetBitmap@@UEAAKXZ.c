/*
 * XREFs of ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800137B0
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180013444 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800135C4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@_NPEAPEAV1@@Z @ 0x180017438 (-Create@CScratchRenderTargetBitmap@@SAJIIPEAVCD3DDeviceLevel1@@VDisplayId@@PEAUPixelFormatInfo@@.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180035810 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180080190 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x1800AEFEC (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WIA@EAAKXZ @ 0x1800C1AA0 (-Release@CScratchRenderTargetBitmap@@WIA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ @ 0x1800C1AB0 (-Release@CScratchRenderTargetBitmap@@WLA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ @ 0x1800C1AC0 (-Release@CScratchRenderTargetBitmap@@WLI@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ @ 0x1800C1AD0 (-Release@CScratchRenderTargetBitmap@@WMA@EAAKXZ.c)
 *     ?Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ @ 0x1800C1AE0 (-Release@CScratchRenderTargetBitmap@@WMI@EAAKXZ.c)
 * Callees:
 *     ?ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800135C4 (-ReturnRenderTargetBitmap@CRenderTargetBitmapCache@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 */

unsigned int __fastcall CScratchRenderTargetBitmap::Release(CScratchRenderTargetBitmap *this)
{
  if ( *((_BYTE *)this + 264) && *((_DWORD *)this + 34) == 1 )
    CRenderTargetBitmapCache::ReturnRenderTargetBitmap(
      (CRenderTargetBitmapCache *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 16LL) + 128LL) + 472LL),
      this);
  return CMILCOMBase::InternalRelease((CScratchRenderTargetBitmap *)((char *)this + 128));
}
