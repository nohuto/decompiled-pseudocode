/*
 * XREFs of ZwQueryInformationJobObject @ 0x14015C360
 * Callers:
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x1406890AC (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle, *(_QWORD *)&JobInformationClass, JobInformation);
}
