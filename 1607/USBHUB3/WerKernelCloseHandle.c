/*
 * XREFs of WerKernelCloseHandle @ 0x1C0034DBC
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C0071FB4 (TelemetryData_SubmitReport.c)
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
