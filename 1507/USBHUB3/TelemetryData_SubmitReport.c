/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C00702B0
 * Callers:
 *     WER_CreateReport @ 0x1C002FB90 (WER_CreateReport.c)
 * Callees:
 *     WerKernelCreateReport @ 0x1C0033764 (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0033B80 (WerKernelSubmitReport.c)
 *     WerKernelCloseHandle @ 0x1C00341C4 (WerKernelCloseHandle.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C006FDA8 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C006FE8C (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C007010C (TelemetryData_pWriteDumpFile.c)
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
