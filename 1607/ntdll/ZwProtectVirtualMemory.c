/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A6E20
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180019030 (LdrpChangeMrdataProtection.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019964 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpProtectHeap @ 0x18002D85C (RtlpProtectHeap.c)
 *     LdrpDoPostSnapWork @ 0x18002DE3C (LdrpDoPostSnapWork.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB1C (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x18002FDC0 (LdrInitSecurityCookie.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030088 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310D8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAC8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F40C (RtlpFreeUserBlockToHeap.c)
 *     LdrpSetProtection @ 0x180084D18 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1800908A0 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800D742C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800D76D4 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800FC04C (RtlpSubSegmentDebugInitialize.c)
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
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
