/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003993C
 * Callers:
 *     ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x1800396C8 (--1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180039758 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?Release@CAccentTransitionAnimatedVisual@@UEAAKXZ @ 0x18000C120 (-Release@CAccentTransitionAnimatedVisual@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x180039A8C (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAccentTransitionAnimatedVisual **__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAccentTransitionAnimatedVisual **this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rdi
  __int64 v4; // rsi
  unsigned int (__fastcall *v5)(CAccentTransitionAnimatedVisual *); // rsi
  void (__fastcall *v6)(WPF::ProcessHeapImpl *, void *); // rsi

  v3 = this + 1;
  v4 = 7LL;
  do
  {
    if ( *v3 )
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *this )
  {
    v5 = *(unsigned int (__fastcall **)(CAccentTransitionAnimatedVisual *))(*(_QWORD *)*this + 272LL);
    if ( v5 == CAccentTransitionAnimatedVisual::Release )
      CAccentTransitionAnimatedVisual::Release(*this);
    else
      v5(*this);
  }
  v6 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v6 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v6(WPF::g_pProcessHeap, this);
  return this;
}
