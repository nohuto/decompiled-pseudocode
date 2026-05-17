/*
 * XREFs of NtQuerySystemInformation @ 0x1800A6AE0
 * Callers:
 *     SendMessageToWERService @ 0x180008BB0 (SendMessageToWERService.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054630 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpInitializeLowFragHeapManager @ 0x18005D598 (RtlpInitializeLowFragHeapManager.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x18005DC00 (RtlpQueryPseudoEnvironmentVariable.c)
 *     TpInitializePackage @ 0x180075CE8 (TpInitializePackage.c)
 *     RtlpHpSegHeapCreate @ 0x18007F470 (RtlpHpSegHeapCreate.c)
 *     RtlSystemTimeToLocalTime @ 0x1800841F0 (RtlSystemTimeToLocalTime.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18008F700 (RtlpHeapTrkAllocCacheAligned.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrInitializeMrdata @ 0x1800966EC (LdrInitializeMrdata.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CEC24 (CsrpLocalSetupForSecureProcess.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800DCD60 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800DF050 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800ED200 (RtlRegisterSecureMemoryCacheCallback.c)
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
