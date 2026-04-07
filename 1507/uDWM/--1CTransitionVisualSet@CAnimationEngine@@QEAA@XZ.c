/*
 * XREFs of ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x18003B130
 * Callers:
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B330 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003B380 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  __int64 v2; // rdi
  __int64 i; // rbx
  CAnimationEngine::CTransitionVisual *v5; // rcx

  v2 = *((_QWORD *)this + 2);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 2) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v5 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
    if ( v5 )
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v5, a2);
  }
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 3));
}
