/*
 * XREFs of ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000432C
 * Callers:
 *     InitCpcStatesInternal @ 0x1C001F5A4 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 ProcLibTraceHiddenProcessorDegradedOperation()
{
  return ProcLibTraceNoPayloadEvent(&PPM_ETW_PERF_STATES_DEGRADED);
}
