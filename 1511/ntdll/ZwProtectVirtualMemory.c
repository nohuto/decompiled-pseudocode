/*
 * XREFs of ZwProtectVirtualMemory @ 0x1800A5AC0
 * Callers:
 *     LdrInitSecurityCookie @ 0x18000FE38 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x180010044 (LdrpCfgProcessLoadConfig.c)
 *     RtlpLowFragHeapFree @ 0x180020B00 (RtlpLowFragHeapFree.c)
 *     RtlpAllocateUserBlockFromHeap @ 0x18002F12C (RtlpAllocateUserBlockFromHeap.c)
 *     LdrpChangeMrdataProtection @ 0x18002F420 (LdrpChangeMrdataProtection.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x18003052C (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpDoPostSnapWork @ 0x1800408DC (LdrpDoPostSnapWork.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004FBB0 (RtlpFreeUserBlockToHeap.c)
 *     RtlpProtectHeap @ 0x180055EFC (RtlpProtectHeap.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180072458 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpSetProtection @ 0x1800804B8 (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x18008DE80 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800CF420 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F2418 (RtlpHpLargeAllocationProtect.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1800F2544 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpProtectHeap @ 0x1800F2860 (RtlpHpProtectHeap.c)
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
