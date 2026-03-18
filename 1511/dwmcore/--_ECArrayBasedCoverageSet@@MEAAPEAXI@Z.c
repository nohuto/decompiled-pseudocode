/*
 * XREFs of ??_ECArrayBasedCoverageSet@@MEAAPEAXI@Z @ 0x180036380
 * Callers:
 *     ??_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z @ 0x1800BD0A0 (--_ECArrayBasedCoverageSet@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CArrayBasedCoverageSet *__fastcall CArrayBasedCoverageSet::`vector deleting destructor'(
        CArrayBasedCoverageSet *this,
        char a2)
{
  void (*v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  *(_QWORD *)this = &CArrayBasedCoverageSet::`vftable'{for `ICoverageSet'};
  *((_QWORD *)this + 1) = &CArrayBasedCoverageSet::`vftable'{for `CMILCOMBase'};
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 24);
  *((_QWORD *)this + 1) = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (**)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      ((void (__fastcall *)(WPF::ProcessHeapImpl *, CArrayBasedCoverageSet *))v4)(WPF::g_pProcessHeap, this);
  }
  return this;
}
