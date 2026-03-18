/*
 * XREFs of ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x18006C1D0
 * Callers:
 *     ??_ECDrawingContext@@O7EAAPEAXI@Z @ 0x1800BFA60 (--_ECDrawingContext@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x18006BF80 (--1CDrawingContext@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rax

  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
