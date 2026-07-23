/*
 * XREFs of NtSetInformationProcess @ 0x180093AC0
 * Callers:
 *     RtlCreateUserStack @ 0x180001780 (RtlCreateUserStack.c)
 *     LdrpHandleTlsData @ 0x180055754 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x180070AD0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlSetProcessIsCritical @ 0x180081A00 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800C573C (AVrfpEnableHandleVerifier.c)
 *     RtlReportExceptionEx @ 0x1800C7660 (RtlReportExceptionEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtSetInformationProcess(
        HANDLE ProcessHandle,
        PROCESSINFOCLASS ProcessInformationClass,
        PVOID ProcessInformation,
        ULONG ProcessInformationLength)
{
  NTSTATUS result; // eax

  result = 28;
  __asm { syscall; Low latency system call }
  return result;
}
