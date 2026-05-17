/*
 * XREFs of NtQuerySystemInformation @ 0x180093C60
 * Callers:
 *     SendMessageToWERService @ 0x180001D58 (SendMessageToWERService.c)
 *     TpInitializePackage @ 0x180003584 (TpInitializePackage.c)
 *     RtlpHpSegHeapCreate @ 0x180003E6C (RtlpHpSegHeapCreate.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     PsspCaptureVaSpaceInformation @ 0x18004EB0C (PsspCaptureVaSpaceInformation.c)
 *     RtlpQueryPseudoEnvironmentVariable @ 0x180064638 (RtlpQueryPseudoEnvironmentVariable.c)
 *     RtlSystemTimeToLocalTime @ 0x180071820 (RtlSystemTimeToLocalTime.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800BAB28 (CsrpLocalSetupForSecureProcess.c)
 *     LdrInitializeMrdata @ 0x1800C1470 (LdrInitializeMrdata.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 *     RtlQueryModuleInformation @ 0x1800CC170 (RtlQueryModuleInformation.c)
 *     RtlLocalTimeToSystemTime @ 0x1800CE100 (RtlLocalTimeToSystemTime.c)
 *     RtlRegisterSecureMemoryCacheCallback @ 0x1800DE930 (RtlRegisterSecureMemoryCacheCallback.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1800E11A4 (RtlpHeapTrkAllocCacheAligned.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800F0798 (RtlpInitializeLowFragHeapManager.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
