/*
 * XREFs of PnpDiagnosticTrace @ 0x1400B0D90
 * Callers:
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1400B0B80 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400B0CB4 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpCompleteSystemStartProcess @ 0x140145238 (PnpCompleteSystemStartProcess.c)
 *     PnpDiagnosticTraceAppVeto @ 0x1401CFFBC (PnpDiagnosticTraceAppVeto.c)
 *     PiProcessStartSystemDevices @ 0x140580CDC (PiProcessStartSystemDevices.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1407B8F80 (IopCallBootDriverReinitializationRoutines.c)
 * Callees:
 *     EtwWrite @ 0x140013320 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
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
