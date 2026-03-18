/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x14013C87C
 * Callers:
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     PnpDiagnosticTrace @ 0x1400D09D4 (PnpDiagnosticTrace.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404943B8 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x14050451C (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x14053D4B4 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x14053D598 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x14053D614 (PiInitReleaseCachedGroupInformation.c)
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
