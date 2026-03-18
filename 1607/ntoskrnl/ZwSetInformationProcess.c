/*
 * XREFs of ZwSetInformationProcess @ 0x14015A000
 * Callers:
 *     RtlpWow64CreateUserStack @ 0x1404D29B8 (RtlpWow64CreateUserStack.c)
 *     RtlCreateUserStack @ 0x14050B698 (RtlCreateUserStack.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, *(_QWORD *)&ProcessInformationClass, ProcessInformation);
}
