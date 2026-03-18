/*
 * XREFs of ?ReleaseCachedScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800227F4
 * Callers:
 *     ?ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z @ 0x1800116E8 (-ReturnScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAXPEAVCScratchRenderTargetBitmap@@@Z.c)
 *     ?GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N3PEAPEAVIRenderTargetBitmap@@@Z @ 0x180011DD0 (-GetScratchRenderTargetBitmap@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFo.c)
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x180071ED0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x180080F10 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 * Callees:
 *     ?Release@CScratchRenderTargetBitmap@@UEAAKXZ @ 0x1800115B0 (-Release@CScratchRenderTargetBitmap@@UEAAKXZ.c)
 */

void __fastcall CD3DDeviceLevel1::ReleaseCachedScratchRenderTargetBitmap(CD3DDeviceLevel1 *this)
{
  __int64 v1; // rax
  CD3DDeviceLevel1 **v3; // rcx

  v1 = *((_QWORD *)this + 96);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 248) = 0;
    v3 = (CD3DDeviceLevel1 **)*((_QWORD *)this + 96);
    if ( v3 )
    {
      CScratchRenderTargetBitmap::Release(v3);
      *((_QWORD *)this + 96) = 0LL;
    }
  }
}
