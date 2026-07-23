/*
 * XREFs of ZwQueryInformationProcess @ 0x14017F310
 * Callers:
 *     VfZwQueryInformationProcess @ 0x140757380 (VfZwQueryInformationProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
