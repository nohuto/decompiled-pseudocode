/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0002148
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001914C (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 ProcLibTraceHiddenProcessorDegradedOperation()
{
  return ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
}
