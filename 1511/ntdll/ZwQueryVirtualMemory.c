/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A5520
 * Callers:
 *     RtlLockCurrentThread @ 0x180002390 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180002450 (RtlUnlockCurrentThread.c)
 *     LdrpMapViewOfSection @ 0x18000EA30 (LdrpMapViewOfSection.c)
 *     RtlpGetHeapProtection @ 0x18001B7E4 (RtlpGetHeapProtection.c)
 *     LdrpGetImageSize @ 0x18003188C (LdrpGetImageSize.c)
 *     RtlpWalkFrameChain @ 0x180032E80 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x180036540 (RtlpxLookupFunctionTable.c)
 *     LdrResSearchResource @ 0x1800394E0 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x180055EFC (RtlpProtectHeap.c)
 *     PsspCaptureVaSpaceInformation @ 0x18006233C (PsspCaptureVaSpaceInformation.c)
 *     LdrpProtectAndRelocateImage @ 0x1800803C0 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180083BB4 (LdrpTouchThreadStack.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084CF8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpCaptureCriticalThunks @ 0x18008619C (LdrpCaptureCriticalThunks.c)
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E067C (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E4010 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800E4A6C (RtlpScanProcessVirtualMemory.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EA2C4 (RtlpGuardIsSuppressedAddress.c)
 *     RtlDebugCreateHeap @ 0x1800EED84 (RtlDebugCreateHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F2418 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpProtectHeap @ 0x1800F2860 (RtlpHpProtectHeap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
