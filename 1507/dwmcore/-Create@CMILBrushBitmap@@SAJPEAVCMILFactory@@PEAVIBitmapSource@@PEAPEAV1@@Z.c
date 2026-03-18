/*
 * XREFs of ?Create@CMILBrushBitmap@@SAJPEAVCMILFactory@@PEAVIBitmapSource@@PEAPEAV1@@Z @ 0x180096D50
 * Callers:
 *     ?UpdateRenderTargetState@CDrawingContext@@AEAAJXZ @ 0x180022F20 (-UpdateRenderTargetState@CDrawingContext@@AEAAJXZ.c)
 *     ?RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEBUPixelFormatInfo@@VDisplayId@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAPEAV1@@Z @ 0x18003F7D0 (-RealizeFromBitmapSource@CHwTexturedColorSource@@SAJPEAVCD3DDeviceLevel1@@PEAVIBitmapSource@@PEB.c)
 *     ?GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap@@@Z @ 0x18013BA34 (-GetScratchDrawBitmapBrushNoAddRef@CHwSurfaceRenderTargetSharedData@@QEAAJPEAPEAVCMILBrushBitmap.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180080FBC (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
