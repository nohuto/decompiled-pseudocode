/*
 * XREFs of NtQuerySystemInformation @ 0x1800A6AE0
 * Callers:
 *     SendMessageToWERService @ 0x180008BA0 (SendMessageToWERService.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054620 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18005D588 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DBF0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x180075CD8 (TpInitializePackage.c)
 *     RtlpHpSegHeapCreate @ 0x18007F460 (RtlpHpSegHeapCreate.c)
 *     RtlSystemTimeToLocalTime @ 0x1800841E0 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F6F0 (RtlpHeapTrkAllocCacheAligned.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800966DC (LdrInitializeMrdata.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800DCE20 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800DF110 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800ED2C0 (RtlRegisterSecureMemoryCacheCallback.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtQuerySystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  NTSTATUS result; // eax

  result = 54;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
