/*
 * XREFs of ??1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ @ 0x1800638E8
 * Callers:
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180063988 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAnimationTracking::AnimationScenarioRunningStatistics::~AnimationScenarioRunningStatistics(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  if ( *((_QWORD *)this + 18) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 18));
  if ( *((_QWORD *)this + 16) && *((_QWORD *)this + 17) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      *((_QWORD *)this + 16));
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 19);
}
