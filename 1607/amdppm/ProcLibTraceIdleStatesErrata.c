/*
 * XREFs of ProcLibTraceIdleStatesErrata @ 0x1C001325C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F33C (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTraceIdleStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_IDLE_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_IDLE_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
