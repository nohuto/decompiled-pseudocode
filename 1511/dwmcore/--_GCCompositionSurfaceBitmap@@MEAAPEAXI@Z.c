/*
 * XREFs of ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x18002DE80
 * Callers:
 *     ?Release@CCompositionSurfaceBitmap@@UEAAKXZ @ 0x18002E1C0 (-Release@CCompositionSurfaceBitmap@@UEAAKXZ.c)
 *     ??_ECCompositionSurfaceBitmap@@OEI@EAAPEAXI@Z @ 0x1800BCD50 (--_ECCompositionSurfaceBitmap@@OEI@EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18002E054 (--1CCompositionSurfaceBitmap@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CCompositionSurfaceBitmap *__fastcall CCompositionSurfaceBitmap::`scalar deleting destructor'(
        CCompositionSurfaceBitmap *this,
        char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CCompositionSurfaceBitmap *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
