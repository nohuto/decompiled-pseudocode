/*
 * XREFs of ?Create@CMILBrushBitmap@@SAJPEAPEAV1@@Z @ 0x1800B76C8
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180064170 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x180072730 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x180110810 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180084750 (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILBrushBitmap::Create(struct CMILBrushBitmap **a1)
{
  unsigned int v2; // ebx
  CMILBrushBitmap *v3; // rax
  struct CMILFactory *v4; // rdx
  struct CMILBrushBitmap *v5; // rdi

  v2 = 0;
  v3 = (CMILBrushBitmap *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            272LL);
  if ( v3 )
    v5 = CMILBrushBitmap::CMILBrushBitmap(v3, v4);
  else
    v5 = 0LL;
  if ( v5 )
  {
    (*(void (__fastcall **)(struct CMILBrushBitmap *))(*(_QWORD *)v5 + 8LL))(v5);
    *((_QWORD *)v5 + 25) = 0LL;
    *a1 = v5;
  }
  else
  {
    v2 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x3Bu);
  }
  return v2;
}
