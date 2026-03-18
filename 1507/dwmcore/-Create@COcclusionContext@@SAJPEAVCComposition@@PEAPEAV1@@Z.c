/*
 * XREFs of ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78
 * Callers:
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ??0COcclusionContext@@AEAA@PEAVCComposition@@@Z @ 0x18001F890 (--0COcclusionContext@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Initialize@COcclusionContext@@AEAAJXZ @ 0x1800221EC (-Initialize@COcclusionContext@@AEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::Create(struct CComposition *a1, struct COcclusionContext **a2)
{
  COcclusionContext *v4; // rax
  COcclusionContext *v5; // rbx
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // edi

  v4 = (COcclusionContext *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              776LL);
  if ( v4 )
    v5 = COcclusionContext::COcclusionContext(v4, a1);
  else
    v5 = 0LL;
  if ( v5 )
  {
    v6 = COcclusionContext::Initialize(v5);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Bu);
    }
    else
    {
      *a2 = v5;
      v5 = 0LL;
    }
    if ( v5 )
      COcclusionContext::`scalar deleting destructor'(v5, v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x49u);
  }
  return v8;
}
