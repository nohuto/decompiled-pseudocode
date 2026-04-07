/*
 * XREFs of ??_GCTransitionVisualSet@CAnimationEngine@@QEAAPEAXI@Z @ 0x1800398EC
 * Callers:
 *     ?NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z @ 0x180036FCC (-NotifyAnimationCompleteAndCleanupByIndex@CAnimationEngine@@AEAAJH@Z.c)
 *     ?ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z @ 0x180038D74 (-ScheduleStartAnimation@CAnimationEngine@@QEAAJHPEAPEAUIAnimatedVisual@@IPEAI@Z.c)
 * Callees:
 *     ??1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ @ 0x1800396C8 (--1CTransitionVisualSet@CAnimationEngine@@QEAA@XZ.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

CAnimationEngine::CTransitionVisualSet *__fastcall CAnimationEngine::CTransitionVisualSet::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisualSet *this,
        unsigned int a2)
{
  CAnimationEngine::CTransitionVisualSet::~CTransitionVisualSet(this, a2);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationEngine::CTransitionVisualSet *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                           + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
