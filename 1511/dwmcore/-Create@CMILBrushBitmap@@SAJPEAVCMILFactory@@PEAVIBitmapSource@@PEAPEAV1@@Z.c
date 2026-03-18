/*
 * XREFs of ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x1800B3C2C
 * Callers:
 *     ?GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ @ 0x180037504 (-GetScratchBitmapBrush@CDrawingContext@@AEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x1800776B0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x1800FBCB0 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x18008983C (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMILBrushBitmap::Create(
        struct CMILFactory *a1,
        struct IBitmapSource *a2,
        struct CMILBrushBitmap **a3)
{
  unsigned int v4; // esi
  CMILBrushBitmap *v5; // rax
  struct CMILFactory *v6; // rdx
  struct CMILBrushBitmap *v7; // rdi

  v4 = 0;
  v5 = (CMILBrushBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            264LL);
  if ( v5 )
    v7 = CMILBrushBitmap::CMILBrushBitmap(v5, v6);
  else
    v7 = 0LL;
  if ( v7 )
  {
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v7 + 8LL))(v7);
    *((_QWORD *)v7 + 24) = 0LL;
    *a3 = v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
  }
  return v4;
}
