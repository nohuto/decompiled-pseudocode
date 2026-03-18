/*
 * XREFs of ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18006BD90 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAPEAVCOcclusionContext@@@Z @ 0x18006D184 (-CalculateOcclusion@CDrawingContext@@QEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180107A80 (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ??1CDesktopRenderTarget@@EEAA@XZ @ 0x18011CD64 (--1CDesktopRenderTarget@@EEAA@XZ.c)
 * Callees:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

COcclusionContext *__fastcall COcclusionContext::`scalar deleting destructor'(
        COcclusionContext *this,
        __int64 a2,
        __int64 a3)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  COcclusionContext::~COcclusionContext(this, a2, a3);
  v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, COcclusionContext *))v4)(WPF::g_pProcessHeap, this);
  return this;
}
