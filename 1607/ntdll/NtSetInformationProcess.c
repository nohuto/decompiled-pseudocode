/*
 * XREFs of NtSetInformationProcess @ 0x1800A67A0
 * Callers:
 *     WerpSetProcessFaultInformation @ 0x180006B98 (WerpSetProcessFaultInformation.c)
 *     LdrpHandleTlsData @ 0x18002DEC4 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180082150 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008DC80 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800D6A7C (AVrfpEnableHandleVerifier.c)
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
