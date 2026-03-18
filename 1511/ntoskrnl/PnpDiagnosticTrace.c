/*
 * XREFs of PnpDiagnosticTrace @ 0x1400D09D4
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400D08F0 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140105F60 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x14013C87C (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1401C0A6C (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x14054AFC8 (PiProcessStartSystemDevices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x14074F1D8 (IopCallBootDriverReinitializationRoutines.c)
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x1407561E8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 */

NTSTATUS __fastcall PnpDiagnosticTrace(
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  REGHANDLE v3; // rbx

  v3 = PnpEtwHandle;
  if ( PnpEtwHandle && EtwEventEnabled(PnpEtwHandle, EventDescriptor) )
    return EtwWrite(v3, EventDescriptor, 0LL, UserDataCount, UserData);
  else
    return 0;
}
