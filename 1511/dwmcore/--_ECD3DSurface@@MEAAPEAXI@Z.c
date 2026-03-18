/*
 * XREFs of ??_ECD3DSurface@@MEAAPEAXI@Z @ 0x180029C10
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD3DSurface@@MEAA@XZ @ 0x18002A104 (--1CD3DSurface@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 */

CD3DSurface *__fastcall CD3DSurface::`vector deleting destructor'(CD3DSurface *this, char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CD3DSurface::~CD3DSurface(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CD3DSurface *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
