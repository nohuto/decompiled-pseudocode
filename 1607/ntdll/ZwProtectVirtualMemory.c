/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A6E20
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180019040 (LdrpChangeMrdataProtection.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x180019974 (RtlpAllocateUserBlockFromHeap.c)
 *     RtlpProtectHeap @ 0x18002D86C (RtlpProtectHeap.c)
 *     LdrpDoPostSnapWork @ 0x18002DE4C (LdrpDoPostSnapWork.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002FB2C (LdrpCfgProcessLoadConfig.c)
 *     LdrInitSecurityCookie @ 0x18002FDD0 (LdrInitSecurityCookie.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180030098 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x1800310E8 (LdrpPrepareImportAddressTableForSnap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004EAD8 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004F41C (RtlpFreeUserBlockToHeap.c)
 *     LdrpSetProtection @ 0x180084D28 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1800908B0 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800D736C (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800FC04C (RtlpSubSegmentDebugInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ZwProtectVirtualMemory()
{
  __int64 result; // rax

  result = 80LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
