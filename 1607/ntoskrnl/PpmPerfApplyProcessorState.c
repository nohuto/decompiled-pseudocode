/*
 * XREFs of PpmPerfApplyProcessorState @ 0x14012F920
 * Callers:
 *     PpmPerfAction @ 0x1400D6560 (PpmPerfAction.c)
 *     PpmPerfApplyProcessorStates @ 0x14012F730 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     PpmContinueActiveTimeAccumulation @ 0x14000D000 (PpmContinueActiveTimeAccumulation.c)
 *     PpmUpdatePerformanceFeedback @ 0x1400D9860 (PpmUpdatePerformanceFeedback.c)
 *     PpmEventTraceExpectedUtility @ 0x14012FA8C (PpmEventTraceExpectedUtility.c)
 *     PpmEventProcessorPerfStateChange @ 0x14012FAFC (PpmEventProcessorPerfStateChange.c)
 *     PpmEventPerfState @ 0x14012FBAC (PpmEventPerfState.c)
 *     PpmScaleIdleStateValues @ 0x14012FC20 (PpmScaleIdleStateValues.c)
 *     PpmGetIdleGenerationCounter @ 0x1401FF8D0 (PpmGetIdleGenerationCounter.c)
 */

char __fastcall PpmPerfApplyProcessorState(struct _KPRCB *a1, unsigned __int8 a2)
{
  _PROC_PERF_DOMAIN *Domain; // rsi
  _PROC_PERF_CONSTRAINT *PerfConstraint; // r13
  char v6; // di
  struct _KPRCB *Master; // rcx
  bool v8; // bp
  LARGE_INTEGER PerformanceCounter; // rdx
  LARGE_INTEGER v10; // r8
  __int64 v12; // r14
  char updated; // al
  __int64 v14; // rdx

  Domain = a1->PowerState.Domain;
  PerfConstraint = a1->PowerState.PerfConstraint;
  v6 = 1;
  Master = Domain->Master;
  v8 = a1 == Master || Domain->Coordination != 0xFD;
  if ( a1 != KeGetCurrentPrcb()
    && (a1 == Master || !a2 && (xmmword_1403AA2D0 & 0x8000) != 0 || v8 && Domain->AffinitizeControl) )
  {
    return 0;
  }
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( KeGetCurrentPrcb() != a1 )
  {
    v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PpmGetIdleGenerationCounter)(
            a1,
            (LARGE_INTEGER)PerformanceCounter.QuadPart);
    if ( v12 )
    {
      updated = PpmUpdatePerformanceFeedback((__int64)a1, 0, 1, 0, 0LL);
      if ( !updated )
        goto LABEL_24;
      if ( v12 == PpmGetIdleGenerationCounter(a1, v14) )
      {
        updated = 1;
LABEL_24:
        v6 = updated;
        if ( !updated )
          return v6;
        goto LABEL_7;
      }
    }
    return 0;
  }
  PpmContinueActiveTimeAccumulation((__int64)a1, PerformanceCounter.QuadPart, v10.QuadPart);
LABEL_7:
  Domain->PerfControlHandler(
    PerfConstraint->PerfContext,
    PerfConstraint->SelectedState,
    Domain->ConstrainedMinPercent,
    Domain->ConstrainedMaxPercent,
    Domain->TolerancePercent,
    Domain->ProvideGuidance == 0,
    v8,
    a2);
  if ( !a2 )
  {
    a1->PowerState.GuaranteedPerformancePercent = Domain->GuaranteedPercent;
    if ( v8 )
      PpmEventPerfState(
        &PPM_ETW_PROCESSOR_PERF_STATE_CHANGE_INITIATED,
        a1->Number,
        a1->PowerState.PerfConstraint->SelectedPercent,
        a1->PowerState.Domain->TolerancePercent);
    PpmScaleIdleStateValues(&a1->PowerState);
    PpmEventProcessorPerfStateChange(a1, Domain);
    PpmEventTraceExpectedUtility(a1);
  }
  return v6;
}
