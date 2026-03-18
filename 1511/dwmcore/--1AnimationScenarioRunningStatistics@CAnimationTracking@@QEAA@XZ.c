/*
 * XREFs of ??1AnimationScenarioRunningStatistics@CAnimationTracking@@QEAA@XZ @ 0x18002AB34
 * Callers:
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18002ABD4 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
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
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 152);
}
