/*
 * XREFs of ?Release@CMILBrushBitmap@@UEAAKXZ @ 0x180089650
 * Callers:
 *     ?GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ @ 0x180037504 (-GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180044630 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?Release@CMILBrushBitmap@@WBI@EAAKXZ @ 0x1800BF250 (-Release@CMILBrushBitmap@@WBI@EAAKXZ.c)
 *     ?Release@CMILBrushBitmap@@WDI@EAAKXZ @ 0x1800BF260 (-Release@CMILBrushBitmap@@WDI@EAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CMILBrushBitmap::Release(CMILBrushBitmap *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
  {
    --*((_DWORD *)this + 2);
    (*(void (__fastcall **)(CMILBrushBitmap *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  }
  return v1;
}
