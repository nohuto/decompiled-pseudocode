/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B380
 * Callers:
 *     ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x18003B130 (--1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x18003B1C0 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B4B0 (--_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVariable **v3; // rbx
  __int64 v4; // rdi

  v3 = (CAnimationEngine::CTransitionVariable **)((char *)this + 8);
  v4 = 7LL;
  do
  {
    if ( *v3 )
      CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(*v3, a2);
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( *(_QWORD *)this )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 272LL))(*(_QWORD *)this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationEngine::CTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                        + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
