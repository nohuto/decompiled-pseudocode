/*
 * XREFs of ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x18003F690
 * Callers:
 *     ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F880 (--_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F8C8 (--_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  __int64 v3; // rcx
  __int64 i; // rdi
  CAnimationEngine::CTransitionVisual *v5; // rcx
  void *v6; // rdx
  void (__fastcall *v7)(WPF::ProcessHeapImpl *, void *); // rax

  v3 = *((_QWORD *)this + 2);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 2) = 0LL;
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1); i = (unsigned int)(i + 1) )
  {
    v5 = *(CAnimationEngine::CTransitionVisual **)(*((_QWORD *)this + 3) + 8 * i);
    if ( v5 )
      CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(v5, a2);
  }
  v6 = (void *)*((_QWORD *)this + 3);
  v7 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v7 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v6);
  else
    v7(WPF::g_pProcessHeap, v6);
}
