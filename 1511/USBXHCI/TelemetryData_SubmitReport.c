/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C0052A74
 * Callers:
 *     Controller_TelemetryReport @ 0x1C001F240 (Controller_TelemetryReport.c)
 * Callees:
 *     WerKernelCloseHandle @ 0x1C003B044 (WerKernelCloseHandle.c)
 *     WerKernelCreateReport @ 0x1C003B058 (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C003B2BC (WerKernelSubmitReport.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C0052CDC (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0052DC0 (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C0053038 (TelemetryData_pWriteDumpFile.c)
 */

__int64 __fastcall TelemetryData_SubmitReport(__int64 a1)
{
  int inited; // ebx
  HANDLE *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8

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
        inited = WerKernelSubmitReport(*v3, v4, v5);
      if ( *v3 )
      {
        WerKernelCloseHandle(*v3);
        *v3 = 0LL;
      }
    }
  }
  return (unsigned int)inited;
}
