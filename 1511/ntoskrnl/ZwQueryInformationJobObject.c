/*
 * XREFs of ZwQueryInformationJobObject @ 0x140152CA0
 * Callers:
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     VfZwQueryInformationJobObject @ 0x1406D3738 (VfZwQueryInformationJobObject.c)
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
