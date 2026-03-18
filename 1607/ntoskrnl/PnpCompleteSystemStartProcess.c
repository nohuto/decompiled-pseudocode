/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x140145238
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1400B0D90 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404E66CC (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x1405485B4 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x14056E6D0 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14056E7B4 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14056E830 (PiInitReleaseCachedGroupInformation.c)
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
