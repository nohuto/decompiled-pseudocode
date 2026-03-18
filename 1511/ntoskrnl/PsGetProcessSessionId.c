/*
 * XREFs of PsGetProcessSessionId @ 0x14003AF8C
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x1403E5E08 (ExpWnfGetCurrentScopeInstance.c)
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     EtwTraceProcess @ 0x1404497E4 (EtwTraceProcess.c)
 *     EtwTraceAppStateChange @ 0x14044A950 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140640B1C (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 */

__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  __int64 result; // rax

  result = MmGetSessionIdEx(a1);
  if ( (_DWORD)result == -1 )
    return 0LL;
  return result;
}
