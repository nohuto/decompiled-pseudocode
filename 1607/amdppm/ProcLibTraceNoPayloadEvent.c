/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C001321C
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C0002148 (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001325C (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C0013274 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001328C (ProcLibTraceThrottleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C00132A4 (ProcLibTracePccErrata.c)
 *     ProcLibTraceControlCallback @ 0x1C00133C0 (ProcLibTraceControlCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceNoPayloadEvent(PCEVENT_DESCRIPTOR EventDescriptor)
{
  BOOLEAN result; // al

  result = EtwEventEnabled(ProcLibEtwHandle, EventDescriptor);
  if ( result )
    return EtwWrite(ProcLibEtwHandle, EventDescriptor, 0LL, 0, 0LL);
  return result;
}
