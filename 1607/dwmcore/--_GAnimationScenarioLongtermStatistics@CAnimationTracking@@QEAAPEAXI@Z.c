/*
 * XREFs of ??_GAnimationScenarioLongtermStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x1801179F0
 * Callers:
 *     ?UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z @ 0x1800A0020 (-UpdateLongtermStatistics@CAnimationTracking@@AEAAXPEBU_GUID@@PEBGIIIIII@Z.c)
 *     ?ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ @ 0x180117A38 (-ClearAllLongtermScenarios@CAnimationTracking@@AEAAXXZ.c)
 *     ?SendLongtermStatistics@CAnimationTracking@@AEAAXXZ @ 0x180117CC0 (-SendLongtermStatistics@CAnimationTracking@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAnimationTracking::AnimationScenarioLongtermStatistics *__fastcall CAnimationTracking::AnimationScenarioLongtermStatistics::`scalar deleting destructor'(
        CAnimationTracking::AnimationScenarioLongtermStatistics *this)
{
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 2));
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationTracking::AnimationScenarioLongtermStatistics *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
