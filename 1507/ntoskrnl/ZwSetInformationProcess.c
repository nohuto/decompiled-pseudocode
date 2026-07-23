/*
 * XREFs of ZwSetInformationProcess @ 0x14017F370
 * Callers:
 *     RtlCreateUserStack @ 0x1404510C4 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x140546148 (RtlpWow64CreateUserStack.c)
 *     VfZwSetInformationProcess @ 0x140758074 (VfZwSetInformationProcess.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
