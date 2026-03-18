/*
 * XREFs of WerKernelCloseHandle @ 0x1C00341C4
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00702B0 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerKernelCloseHandle(void *a1)
{
  if ( a1 )
    return ZwClose(a1);
  else
    return -1073741811;
}
