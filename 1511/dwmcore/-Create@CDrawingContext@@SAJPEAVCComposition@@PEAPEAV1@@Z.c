/*
 * XREFs of ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800AD4F0
 * Callers:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18003E644 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z @ 0x18005BC9C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@_N@Z.c)
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800A0C74 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800AD450 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180109210 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18010A4B4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTargetBitmap@@PEAPEAVCDrawingContext@@@Z @ 0x1801384AC (-CreateSurfaceAndContext@CBrushIntermediateRealizer@@IEAAJIIW4Enum@MilTileMode@@PEAPEAVIRenderTa.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x1800253A0 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??0CDrawingContext@@IEAA@PEAVCComposition@@@Z @ 0x180043C54 (--0CDrawingContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180051FB0 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::Create(struct CComposition *a1, struct CDrawingContext **a2)
{
  void *(__fastcall *v4)(WPF::ProcessHeapImpl *, size_t); // rdi
  CDrawingContext *v5; // rax
  CDrawingContext *v6; // rdi
  int v7; // eax
  int v8; // ebx

  v4 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v4 == WPF::ProcessHeapImpl::AllocClear )
    v5 = (CDrawingContext *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, 0x1760uLL);
  else
    v5 = (CDrawingContext *)v4(WPF::g_pProcessHeap, 5984LL);
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x260u);
    else
      *a2 = v6;
    if ( v8 < 0 )
      CMILCOMBase::InternalRelease((CDrawingContext *)((char *)v6 + 8));
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x25Cu);
  }
  return (unsigned int)v8;
}
