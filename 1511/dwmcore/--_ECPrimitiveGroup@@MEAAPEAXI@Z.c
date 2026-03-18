/*
 * XREFs of ??_ECPrimitiveGroup@@MEAAPEAXI@Z @ 0x180091170
 * Callers:
 *     ?Release@CPrimitiveGroup@@UEAAKXZ @ 0x1800917A0 (-Release@CPrimitiveGroup@@UEAAKXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180051F80 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180091E6C (--1CPrimitiveGroup@@MEAA@XZ.c)
 */

CPrimitiveGroup *__fastcall CPrimitiveGroup::`vector deleting destructor'(CPrimitiveGroup *this, char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *, void *); // rsi

  CPrimitiveGroup::~CPrimitiveGroup(this);
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
