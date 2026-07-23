/*
 * XREFs of PsGetProcessSessionId @ 0x140013CD0
 * Callers:
 *     ExpWnfGetCurrentScopeInstance @ 0x140463930 (ExpWnfGetCurrentScopeInstance.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     EtwpInitStateChangeInfo @ 0x14054C3D4 (EtwpInitStateChangeInfo.c)
 *     EtwGetProcessAppSessionGuid @ 0x14054C480 (EtwGetProcessAppSessionGuid.c)
 *     EtwpWriteProcessStarted @ 0x14054CC84 (EtwpWriteProcessStarted.c)
 *     MiLogReserveVaFailed @ 0x140658CE0 (MiLogReserveVaFailed.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall PsGetProcessSessionId(__int64 a1)
{
  return MmGetSessionId(a1);
}
