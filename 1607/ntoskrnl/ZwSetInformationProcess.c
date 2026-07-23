/*
 * XREFs of ZwSetInformationProcess @ 0x14015A570
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x1404B6458 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x1404EE628 (RtlCreateUserStack.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
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
