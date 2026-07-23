/*
 * XREFs of NtSetInformationProcess @ 0x1800A5440
 * Callers:
 *     LdrpHandleTlsData @ 0x180040964 (LdrpHandleTlsData.c)
 *     RtlAddGrowableFunctionTable @ 0x1800712C0 (RtlAddGrowableFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18007CA10 (RtlDeleteGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x1800832E0 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x180089A10 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800CEA6C (AVrfpEnableHandleVerifier.c)
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
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
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
