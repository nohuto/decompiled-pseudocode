/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C0051A04
 * Callers:
 *     Controller_TelemetryReport @ 0x1C0015B70 (Controller_TelemetryReport.c)
 * Callees:
 *     WerKernelCloseHandle @ 0x1C003A138 (WerKernelCloseHandle.c)
 *     WerKernelCreateReport @ 0x1C003A14C (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C003A3B0 (WerKernelSubmitReport.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C0051C6C (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0051D50 (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C0051FC8 (TelemetryData_pWriteDumpFile.c)
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
