/*
 * XREFs of ProcLibTracePerfStatesErrata @ 0x1C001A36C
 * Callers:
 *     ProcLibGlobalInit @ 0x1C00220C0 (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTracePerfStatesErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PERF_STATES_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_PERF_STATES_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
