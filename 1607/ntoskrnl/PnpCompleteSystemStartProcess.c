/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1401457A8
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1400AEE00 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404C903C (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x140548AF4 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x14056EC10 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14056ECF4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14056ED70 (PiInitReleaseCachedGroupInformation.c)
 */

NTSTATUS PnpCompleteSystemStartProcess()
{
  __int64 v0; // rcx
  NTSTATUS result; // eax

  PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Start, 0, 0LL);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Start, 0, 0LL);
  LOBYTE(v0) = 1;
  IopCallDriverReinitializationRoutines(v0);
  PnpDiagnosticTrace(&KMPnPEvt_SystemStartDriverReinit_Stop, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  KseShimDatabaseBootRelease();
  result = PnpDiagnosticTrace(&KMPnPEvt_SystemStartLegacyEnum_Stop, 0, 0LL);
  if ( PnpEtwHandle )
    return EtwWriteEndScenario(PnpEtwHandle, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  return result;
}
