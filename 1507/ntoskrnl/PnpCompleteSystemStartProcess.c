/*
 * XREFs of PnpCompleteSystemStartProcess @ 0x1401699B4
 * Callers:
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     IopCallDriverReinitializationRoutines @ 0x140571B94 (IopCallDriverReinitializationRoutines.c)
 *     EtwWriteEndScenario @ 0x1405843A4 (EtwWriteEndScenario.c)
 *     KseShimDatabaseBootRelease @ 0x1405B2648 (KseShimDatabaseBootRelease.c)
 *     PpReleaseBootDDB @ 0x1405B2758 (PpReleaseBootDDB.c)
 *     PiInitReleaseCachedGroupInformation @ 0x1405B27F4 (PiInitReleaseCachedGroupInformation.c)
 */

char __fastcall PnpCompleteSystemStartProcess(__int64 a1)
{
  REGHANDLE v1; // rbx
  REGHANDLE v2; // rbx
  char result; // al
  REGHANDLE v4; // rbx

  v1 = PnpEtwHandle;
  if ( PnpEtwHandle )
  {
    if ( EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStartLegacyEnum_Start) )
    {
      EtwWrite(v1, &KMPnPEvt_SystemStartLegacyEnum_Start, 0LL, 0, 0LL);
      v1 = PnpEtwHandle;
    }
    if ( v1 && EtwEventEnabled(v1, &KMPnPEvt_SystemStartDriverReinit_Start) )
      EtwWrite(v1, &KMPnPEvt_SystemStartDriverReinit_Start, 0LL, 0, 0LL);
  }
  LOBYTE(a1) = 1;
  IopCallDriverReinitializationRoutines(a1);
  v2 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStartDriverReinit_Stop) )
    EtwWrite(v2, &KMPnPEvt_SystemStartDriverReinit_Stop, 0LL, 0, 0LL);
  PnPInitialized = 1;
  KeSetEvent(&PnpSystemDeviceEnumerationComplete, 0, 0);
  PiInitReleaseCachedGroupInformation();
  PpReleaseBootDDB();
  result = KseShimDatabaseBootRelease();
  v4 = PnpEtwHandle;
  if ( PnpEtwHandle )
  {
    result = EtwEventEnabled(PnpEtwHandle, &KMPnPEvt_SystemStartLegacyEnum_Stop);
    if ( result )
    {
      result = EtwWrite(v4, &KMPnPEvt_SystemStartLegacyEnum_Stop, 0LL, 0, 0LL);
      v4 = PnpEtwHandle;
    }
    if ( v4 )
      return EtwWriteEndScenario(v4, &KMPnPEvt_DriverInitPhase_Stop, &PnpDriverInitPhaseActivityId, 0, 0LL);
  }
  return result;
}
