/*
 * XREFs of ??_GCGraphIterator@@QEAAPEAXI@Z @ 0x180031464
 * Callers:
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18001F17C (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18002E1F4 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x18002E2E0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180031300 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void **__fastcall CGraphIterator::`scalar deleting destructor'(void **this)
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
