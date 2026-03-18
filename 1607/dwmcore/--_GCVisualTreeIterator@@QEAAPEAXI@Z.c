/*
 * XREFs of ??_GCVisualTreeIterator@@QEAAPEAXI@Z @ 0x18005FBE4
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18005BD40 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18006BD90 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18006BE80 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CVisualTreeIterator *__fastcall CVisualTreeIterator::`scalar deleting destructor'(CVisualTreeIterator *this)
{
  void *v2; // rdx
  void (*v3)(WPF::ProcessHeapImpl *__hidden, void *); // rax
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  v2 = (void *)*((_QWORD *)this + 6);
  v3 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v2);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, void *))v3)(WPF::g_pProcessHeap, v2);
  v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v4 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    ((void (__fastcall *)(WPF::ProcessHeapImpl *, CVisualTreeIterator *))v4)(WPF::g_pProcessHeap, this);
  return this;
}
