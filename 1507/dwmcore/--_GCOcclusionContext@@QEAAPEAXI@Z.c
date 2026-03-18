/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18001F840
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAVCOverlayContext@@PEAPEAVCOcclusionContext@@@Z @ 0x18002F32C (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18005ED78 (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18001F17C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(COcclusionContext *this, unsigned int a2)
{
  COcclusionContext::~COcclusionContext(this, a2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, COcclusionContext *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
