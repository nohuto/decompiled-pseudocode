/*
 * XREFs of NtSetInformationProcess @ 0x1800A67A0
 * Callers:
 *     WerpSetProcessFaultInformation @ 0x180006BA8 (WerpSetProcessFaultInformation.c)
 *     LdrpHandleTlsData @ 0x18002DED4 (LdrpHandleTlsData.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBC0 (RtlDeleteGrowableFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 *     RtlCreateUserStack @ 0x180082160 (RtlCreateUserStack.c)
 *     RtlSetProcessIsCritical @ 0x18008DC90 (RtlSetProcessIsCritical.c)
 *     AVrfpEnableHandleVerifier @ 0x1800D69BC (AVrfpEnableHandleVerifier.c)
 * Callees:
 *     <none>
 */

__int64 NtSetInformationProcess()
{
  __int64 result; // rax

  result = 28LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
