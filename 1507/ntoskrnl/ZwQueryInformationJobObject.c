/*
 * XREFs of ZwQueryInformationJobObject @ 0x140181610
 * Callers:
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     VfZwQueryInformationJobObject @ 0x140757300 (VfZwQueryInformationJobObject.c)
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
