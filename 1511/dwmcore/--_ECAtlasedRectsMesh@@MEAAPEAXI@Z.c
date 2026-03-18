/*
 * XREFs of ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x1800269F0
 * Callers:
 *     ?Release@CAtlasedRects@@UEAAKXZ @ 0x180025300 (-Release@CAtlasedRects@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x180026FA4 (--1CAtlasedRectsMesh@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CAtlasedRectsMesh *__fastcall CAtlasedRectsMesh::`vector deleting destructor'(CAtlasedRectsMesh *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CAtlasedRectsMesh::~CAtlasedRectsMesh(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CAtlasedRectsMesh *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
