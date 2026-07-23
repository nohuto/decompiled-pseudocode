/*
 * XREFs of RtlWerpReportException @ 0x180001C20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl RtlWerpReportException(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  int v5; // [rsp+28h] [rbp+28h]
  __int64 v6; // [rsp+30h] [rbp+30h]

  return ReportExceptionInternal(
           ProcessId,
           (_DWORD)CrashReportSharedMem,
           Flags,
           (_DWORD)CrashVerticalProcessHandle,
           v5,
           v6);
}
