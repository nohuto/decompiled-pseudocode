/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B4B0
 * Callers:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B380 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x18003B40C (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180028450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  void (__fastcall *v2)(WPF::ProcessHeapImpl *, void *); // rsi

  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  v2 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v2 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v2(WPF::g_pProcessHeap, this);
  return this;
}
