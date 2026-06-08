/*
 * XREFs of ProcLibTracePccErrata @ 0x1C0012FB0
 * Callers:
 *     ProcLibGlobalInit @ 0x1C001F2F0 (ProcLibGlobalInit.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall ProcLibTracePccErrata(char a1)
{
  bool v1; // zf
  const EVENT_DESCRIPTOR *v2; // rcx

  v1 = a1 == 0;
  v2 = (const EVENT_DESCRIPTOR *)&PPM_ETW_PCC_ERRATA;
  if ( !v1 )
    v2 = &PPM_ETW_PCC_ERRATA_RUNDOWN;
  return ProcLibTraceNoPayloadEvent(v2);
}
