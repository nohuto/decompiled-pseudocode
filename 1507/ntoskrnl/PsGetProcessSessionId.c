/*
 * XREFs of PsGetProcessSessionId @ 0x1400EFD94
 * Callers:
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     ExpWnfGetCurrentScopeInstance @ 0x1404375D4 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     EtwTraceAppStateChange @ 0x1405075DC (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetProcessSessionId(struct _KPROCESS *a1)
{
  unsigned __int64 v1; // rax
  __int64 result; // rax

  v1 = a1[1].ActiveProcessors.Bitmap[2];
  if ( !v1 || a1 == PsInitialSystemProcess )
    result = 0xFFFFFFFFLL;
  else
    result = *(unsigned int *)(v1 + 8);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
