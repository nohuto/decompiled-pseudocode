/*
 * XREFs of ??_ECVisual@@MEAAPEAXI@Z @ 0x1800548B0
 * Callers:
 *     ?Release@CVisual@@UEAAKXZ @ 0x18004ED80 (-Release@CVisual@@UEAAKXZ.c)
 * Callees:
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CComposition **__fastcall CVisual::`vector deleting destructor'(CComposition **this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rax

  CVisual::~CVisual(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CComposition **))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
