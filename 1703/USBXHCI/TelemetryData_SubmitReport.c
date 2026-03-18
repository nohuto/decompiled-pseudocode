/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C0056760
 * Callers:
 *     Controller_TelemetryReport @ 0x1C001BAB4 (Controller_TelemetryReport.c)
 * Callees:
 *     WerKernelCloseHandle @ 0x1C0038844 (WerKernelCloseHandle.c)
 *     WerKernelCreateReport @ 0x1C003885C (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0038AC8 (WerKernelSubmitReport.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C00569D4 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0056AC0 (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C0056D38 (TelemetryData_pWriteDumpFile.c)
 */

__int64 __fastcall TelemetryData_SubmitReport(__int64 a1)
{
  int inited; // ebx
  HANDLE *v3; // rsi

  inited = TelemetryData_pInitWerContext();
  if ( inited >= 0 )
  {
    inited = TelemetryData_pWriteDumpFile(a1);
    if ( inited >= 0 )
    {
      v3 = (HANDLE *)(a1 + 96);
      inited = WerKernelCreateReport(a1 + 624, a1 + 656, (HANDLE *)(a1 + 96));
      if ( inited < 0 )
        TelemetryData_pDeleteDumpFile(a1);
      else
        inited = WerKernelSubmitReport(*v3);
      if ( *v3 )
      {
        WerKernelCloseHandle(*v3);
        *v3 = 0LL;
      }
    }
  }
  return (unsigned int)inited;
}
