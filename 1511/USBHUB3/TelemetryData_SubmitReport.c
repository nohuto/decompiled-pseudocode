/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C0070F7C
 * Callers:
 *     WER_CreateReport @ 0x1C00308C0 (WER_CreateReport.c)
 * Callees:
 *     WerKernelCreateReport @ 0x1C00340E4 (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0034500 (WerKernelSubmitReport.c)
 *     WerKernelCloseHandle @ 0x1C0034B44 (WerKernelCloseHandle.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C0070A74 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0070B58 (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C0070DD8 (TelemetryData_pWriteDumpFile.c)
 */

__int64 __fastcall TelemetryData_SubmitReport(__int64 a1)
{
  int inited; // ebx
  HANDLE *v3; // rsi

  inited = TelemetryData_pInitWerContext(a1);
  if ( inited >= 0 )
  {
    inited = TelemetryData_pWriteDumpFile(a1);
    if ( inited >= 0 )
    {
      v3 = (HANDLE *)(a1 + 96);
      inited = WerKernelCreateReport((const WCHAR *)(a1 + 624), (const WCHAR *)(a1 + 656), (HANDLE *)(a1 + 96));
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
