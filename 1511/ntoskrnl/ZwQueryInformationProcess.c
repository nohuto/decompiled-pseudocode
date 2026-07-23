/*
 * XREFs of ZwQueryInformationProcess @ 0x140150940
 * Callers:
 *     VfZwQueryInformationProcess @ 0x1406D37B8 (VfZwQueryInformationProcess.c)
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
