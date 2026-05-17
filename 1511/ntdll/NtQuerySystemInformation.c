/*
 * XREFs of NtQuerySystemInformation @ 0x1800A5780
 * Callers:
 *     SendMessageToWERService @ 0x180002C98 (SendMessageToWERService.c)
 *     EtwpAllocateTraceBufferPool @ 0x180045378 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18004BB18 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18004C1F0 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x18004EE54 (TpInitializePackage.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpHpSegHeapCreate @ 0x1800598B0 (RtlpHpSegHeapCreate.c)
 *     PsspCaptureVaSpaceInformation @ 0x18006233C (PsspCaptureVaSpaceInformation.c)
 *     RtlSystemTimeToLocalTime @ 0x18007D8F0 (RtlSystemTimeToLocalTime.c)
 *     LdrInitializeMrdata @ 0x1800952FC (LdrInitializeMrdata.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800C7844 (CsrpLocalSetupForSecureProcess.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800D49B0 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800D6700 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800E4080 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800E6904 (RtlpHeapTrkAllocCacheAligned.c)
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
