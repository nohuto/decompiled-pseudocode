/*
 * XREFs of ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x180063988
 * Callers:
 *     ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180064798 (-DeleteScenario@CAnimationTracking@@AEAAXI@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x18006488C (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     ??1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ @ 0x1800638E8 (--1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAnimationTracking::AnimationScenarioRunningStatistics *__fastcall CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(
        CAnimationTracking::AnimationScenarioRunningStatistics *this)
{
  CAnimationTracking::AnimationScenarioRunningStatistics::~AnimationScenarioRunningStatistics(this);
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAnimationTracking::AnimationScenarioRunningStatistics *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
