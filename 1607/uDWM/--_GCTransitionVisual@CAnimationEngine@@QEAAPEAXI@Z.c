/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F8C8
 * Callers:
 *     ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x18003F690 (--1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003F714 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ?Release@CAccentTransitionAnimatedVisual@@UEAAKXZ @ 0x1800134B0 (-Release@CAccentTransitionAnimatedVisual@@UEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003FA04 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAccentTransitionAnimatedVisual **this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rdi
  __int64 v4; // rsi
  CAccentTransitionAnimatedVisual *v5; // rcx
  void (*v6)(void); // rax
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rax

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
  v5 = *this;
  if ( *this )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 272LL);
    if ( (char *)v6 == (char *)CAccentTransitionAnimatedVisual::Release )
      CAccentTransitionAnimatedVisual::Release(v5);
    else
      v6();
  }
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v7(WPF::g_pProcessHeap, this);
  return (CAnimationEngine::CTransitionVisual *)this;
}
