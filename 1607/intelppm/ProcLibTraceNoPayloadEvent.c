/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C001B21C
 * Callers:
 *     ProcLibTraceHiddenProcessorDegradedOperation @ 0x1C000432C (ProcLibTraceHiddenProcessorDegradedOperation.c)
 *     ProcLibTraceControlCallback @ 0x1C0017DF0 (ProcLibTraceControlCallback.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001B204 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001B25C (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001B634 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001C124 (ProcLibTraceThrottleStatesErrata.c)
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
