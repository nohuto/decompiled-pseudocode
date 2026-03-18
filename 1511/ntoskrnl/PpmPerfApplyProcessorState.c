/*
 * XREFs of PpmPerfApplyProcessorState @ 0x140124144
 * Callers:
 *     PpmPerfAction @ 0x140045860 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x140123FFC (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmContinueTimeAccumulation @ 0x1401242B4 (PpmContinueTimeAccumulation.c)
 *     PpmEventTraceExpectedUtility @ 0x14012431C (PpmEventTraceExpectedUtility.c)
 *     PpmEventProcessorPerfStateChange @ 0x14012438C (PpmEventProcessorPerfStateChange.c)
 *     PpmEventPerfState @ 0x14012443C (PpmEventPerfState.c)
 *     PpmScaleIdleStateValues @ 0x1401244B0 (PpmScaleIdleStateValues.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, unsigned __int8 a2)
{
  _PROC_PERF_DOMAIN *Domain; // rdi
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r15
  struct _KPRCB *Master; // rcx
  bool v7; // bp
  LARGE_INTEGER PerformanceCounter; // rax
  char v9; // si

  Domain = a1->PowerState.Domain;
  PerfConstraint = a1->PowerState.PerfConstraint;
  Master = Domain->Master;
  v7 = a1 == Master || Domain->Coordination != 0xFD;
  if ( a1 != KeGetCurrentPrcb()
    && (a1 == Master || !a2 && (xmmword_140382290 & 0x8000) != 0 || v7 && Domain->AffinitizeControl) )
  {
    return 0;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmContinueTimeAccumulation)(
         a1,
         (LARGE_INTEGER)PerformanceCounter.QuadPart);
  if ( v9 )
  {
    Domain->PerfControlHandler(
      PerfConstraint->PerfContext,
      PerfConstraint->SelectedState,
      Domain->ConstrainedMinPercent,
      Domain->ConstrainedMaxPercent,
      Domain->TolerancePercent,
      Domain->ProvideGuidance == 0,
      v7,
      a2);
    if ( !a2 )
    {
      a1->PowerState.GuaranteedPerformancePercent = Domain->GuaranteedPercent;
      if ( v7 )
        PpmEventPerfState(
          &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_INITIATED,
          a1->Number,
          a1->PowerState.PerfConstraint->SelectedPercent,
          a1->PowerState.Domain->TolerancePercent);
      PpmScaleIdleStateValues(&a1->PowerState);
      PpmEventProcessorPerfStateChange(a1, Domain);
      PpmEventTraceExpectedUtility(a1);
    }
  }
  return v9;
}
