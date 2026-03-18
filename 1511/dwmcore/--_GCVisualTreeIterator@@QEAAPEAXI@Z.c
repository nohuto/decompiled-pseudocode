/*
 * XREFs of ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x1800520F4
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800436C0 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800437C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x180054ED0 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

void **__fastcall CVisualTreeIterator::`scalar deleting destructor'(void **this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rsi
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rsi

  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this[6]);
  else
    v2(WPF::g_pProcessHeap, this[6]);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v3(WPF::g_pProcessHeap, this);
  return this;
}
