/*
 * XREFs of ?DeleteScenario@CAnimationTracking@@AEAAXI@Z @ 0x180029694
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180028FF8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x180095004 (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@QEAA@XZ @ 0x1800FFDB8 (--1CPartitionVerticalBlankScheduler@@QEAA@XZ.c)
 * Callees:
 *     ??_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z @ 0x18002ABD4 (--_GAnimationScenarioRunningStatistics@CAnimationTracking@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CAnimationTracking::DeleteScenario(CAnimationTracking *this, unsigned int a2)
{
  __int64 v3; // rdi
  CAnimationTracking::AnimationScenarioRunningStatistics *v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax

  v3 = a2;
  v4 = *(CAnimationTracking::AnimationScenarioRunningStatistics **)(*(_QWORD *)this + 8LL * a2);
  if ( v4 )
    CAnimationTracking::AnimationScenarioRunningStatistics::`scalar deleting destructor'(v4, a2);
  v5 = *((_DWORD *)this + 6);
  if ( (unsigned int)v3 >= v5 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x218u);
  }
  else
  {
    v6 = v5 - 1;
    if ( (unsigned int)v3 < (unsigned int)v6 )
      *(_QWORD *)(*(_QWORD *)this + 8 * v3) = *(_QWORD *)(*(_QWORD *)this + 8 * v6);
    --*((_DWORD *)this + 6);
  }
}
