/*
 * XREFs of ProcLibTraceNoPayloadEvent @ 0x1C0019F58
 * Callers:
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 *     ProcLibTraceIdleStatesErrata @ 0x1C0019F40 (ProcLibTraceIdleStatesErrata.c)
 *     ProcLibTracePccErrata @ 0x1C0019F98 (ProcLibTracePccErrata.c)
 *     ProcLibTracePerfStatesErrata @ 0x1C001A36C (ProcLibTracePerfStatesErrata.c)
 *     ProcLibTraceThrottleStatesErrata @ 0x1C001AE5C (ProcLibTraceThrottleStatesErrata.c)
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
