/*
 * XREFs of ??_ECDrawingContext@@MEAAPEAXI@Z @ 0x180043BE4
 * Callers:
 *     ??_ECDrawingContext@@O7EAAPEAXI@Z @ 0x1800BCBF0 (--_ECDrawingContext@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800438D4 (--1CDrawingContext@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CDrawingContext *__fastcall CDrawingContext::`vector deleting destructor'(CDrawingContext *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CDrawingContext::~CDrawingContext(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CDrawingContext *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
