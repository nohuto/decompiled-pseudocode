/*
 * XREFs of ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B8530
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180004184 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x18004AF38 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800B8490 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18011FA60 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x180120B7C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z @ 0x180144498 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_N@Z.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x180161544 (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x18002D3A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18006BE80 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x18006C228 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::Create(struct CComposition *a1, struct CDrawingContext **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rax
  CDrawingContext *v5; // rax
  CDrawingContext *v6; // rdi
  int v7; // eax
  int v8; // ebx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CDrawingContext *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1990uLL);
  else
    v5 = (CDrawingContext *)v4(WPF::g_pProcessHeap, 6544LL);
  if ( v5 )
    v6 = CDrawingContext::CDrawingContext(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    CBitmapOfDeviceBitmaps::AddRef((CDrawingContext *)((char *)v6 + 8));
    v7 = CDrawingContext::Initialize((struct CLegacyMilBrushRealizer **)v6 + 1);
    v8 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x269u);
    else
      *a2 = v6;
    if ( v8 < 0 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v6 + 8));
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x265u);
  }
  return (unsigned int)v8;
}
