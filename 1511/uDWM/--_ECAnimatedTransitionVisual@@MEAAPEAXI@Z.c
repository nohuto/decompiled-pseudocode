/*
 * XREFs of ??_ECAnimatedTransitionVisual@@MEAAPEAXI@Z @ 0x18000E13C
 * Callers:
 *     ??_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z @ 0x1800500F0 (--_ECAnimatedTransitionVisual@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAnimatedTransitionVisual@@MEAA@XZ @ 0x18000DEA8 (--1CAnimatedTransitionVisual@@MEAA@XZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimatedTransitionVisual *__fastcall CAnimatedTransitionVisual::`vector deleting destructor'(
        CAnimatedTransitionVisual *this,
        char a2)
{
  void (__fastcall *v4)(WPF::ProcessHeapImpl *__hidden, void *); // rsi

  CAnimatedTransitionVisual::~CAnimatedTransitionVisual(this);
  if ( (a2 & 1) != 0 )
  {
    v4 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
    if ( v4 == WPF::ProcessHeapImpl::Free )
      WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
    else
      v4(WPF::g_pProcessHeap, this);
  }
  return this;
}
