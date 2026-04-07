/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x18003F880
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180011710 (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180013314 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002ADD0 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x18003F690 (--1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  void (__fastcall *v3)(WPF::ProcessHeapImpl *, void *); // rax

  CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(this, a2);
  v3 = *(void (__fastcall **)(WPF::ProcessHeapImpl *, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v3 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, this);
  else
    v3(WPF::g_pProcessHeap, this);
  return this;
}
