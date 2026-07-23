/*
 * XREFs of ZwProtectVirtualMemory @ 0x180093E00
 * Callers:
 *     RtlpProtectHeap @ 0x180005EFC (RtlpProtectHeap.c)
 *     RtlpFreeUserBlockToHeap @ 0x180009080 (RtlpFreeUserBlockToHeap.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180018438 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180035070 (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpChangeMrdataProtection @ 0x180036198 (LdrpChangeMrdataProtection.c)
 *     LdrpCfgProcessLoadConfig @ 0x180040ECC (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x180041130 (LdrInitSecurityCookie.c)
 *     LdrpDoPostSnapWork @ 0x1800556CC (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180066C84 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpSetProtection @ 0x1800734DC (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x180083A50 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800C60F0 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F04C8 (RtlpHpLargeAllocationProtect.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F08C4 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpProtectHeap @ 0x1800F123C (RtlpHpProtectHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  __asm { syscall; Low latency system call }
  return result;
}
