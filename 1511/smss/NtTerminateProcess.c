/*
 * XREFs of NtTerminateProcess @ 0x14000C2AC
 * Callers:
 *     __report_gsfailure @ 0x14000BFF0 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtTerminateProcess(HANDLE ProcessHandle, NTSTATUS ExitStatus)
{
  return __imp_NtTerminateProcess(ProcessHandle, ExitStatus);
}
