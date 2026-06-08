/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C001A2DC
 * Callers:
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C001A2C4 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C001A31C (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001A6F0 (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001B1E0 (ProcLibTraceThrottleStatesErrata.c)
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
