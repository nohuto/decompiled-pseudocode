/*
 * XREFs of PsGetProcessSessionId @ 0x140014150
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x140464A60 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 *     EtwpInitStateChangeInfo @ 0x14054BE94 (EtwpInitStateChangeInfo.c)
 *     EtwGetProcessAppSessionGuid @ 0x14054BF40 (EtwGetProcessAppSessionGuid.c)
 *     EtwpWriteProcessStarted @ 0x14054C744 (EtwpWriteProcessStarted.c)
 *     MiLogReserveVaFailed @ 0x140658BFC (MiLogReserveVaFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EEF4 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  return MmGetSessionId(a1);
}
