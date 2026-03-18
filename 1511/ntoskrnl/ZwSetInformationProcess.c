/*
 * XREFs of ZwSetInformationProcess @ 0x1401509A0
 * Callers:
 *     RtlCreateUserStack @ 0x1403F2BA0 (RtlCreateUserStack.c)
 *     RtlpWow64CreateUserStack @ 0x1404B0B04 (RtlpWow64CreateUserStack.c)
 *     VfZwSetInformationProcess @ 0x1406D44AC (VfZwSetInformationProcess.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
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
