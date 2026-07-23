/*
 * XREFs of ZwQueryInformationJobObject @ 0x14015C8D0
 * Callers:
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140689190 (RtlGetConsoleSessionForegroundProcessId.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationJobObject(
        HANDLE JobHandle,
        JOBOBJECTINFOCLASS JobInformationClass,
        PVOID JobInformation,
        ULONG JobInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(JobHandle);
}
