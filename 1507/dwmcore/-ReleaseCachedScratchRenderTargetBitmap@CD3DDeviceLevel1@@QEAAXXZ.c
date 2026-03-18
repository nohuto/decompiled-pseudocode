/*
 * XREFs of ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x180018E98
 * Callers:
 *     ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800030A8 (-ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180003348 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z @ 0x180044DD0 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAXI_N@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z @ 0x180055E64 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJI_N@Z.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x180002F70 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rax
  CD3DDeviceLevel1 **v3; // rcx

  v1 = *((_QWORD *)this + 99);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 248) = 0;
    v3 = (CD3DDeviceLevel1 **)*((_QWORD *)this + 99);
    if ( v3 )
    {
      CScratchRenderTargetBitmap::Release(v3);
      *((_QWORD *)this + 99) = 0LL;
    }
  }
}
