/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800ADA08
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x180044B58 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180052010 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x1800556AC (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x180055714 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x180058074 (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  LPVOID (__fastcall *v4)(WPF::ProcessHeapImpl *, SIZE_T); // rdi
  COcclusionContext *v5; // rax
  COcclusionContext *v6; // rbx
  int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // edi

  v4 = *(LPVOID (__fastcall **)(WPF::ProcessHeapImpl *, SIZE_T))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v4 == WPF::ProcessHeapImpl::Alloc )
    v5 = (COcclusionContext *)WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, 0x308uLL);
  else
    v5 = (COcclusionContext *)v4(WPF::g_pProcessHeap, 776LL);
  if ( v5 )
    v6 = COcclusionContext::COcclusionContext(v5, a1);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = COcclusionContext::Initialize(v6);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x4Bu);
    }
    else
    {
      *a2 = v6;
      v6 = 0LL;
    }
    if ( v6 )
      COcclusionContext::`scalar deleting destructor'(v6, v8);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
  }
  return v9;
}
