/*
 * XREFs of ZwQueryVirtualMemory @ 0x180093B30
 * Callers:
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x180005EFC (RtlpProtectHeap.c)
 *     RtlpWalkFrameChain @ 0x1800126E0 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     LdrpGetImageSize @ 0x180017484 (LdrpGetImageSize.c)
 *     LdrResSearchResource @ 0x18001AAA0 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     LdrpMapViewOfSection @ 0x180040BD0 (LdrpMapViewOfSection.c)
 *     PsspCaptureVaSpaceInformation @ 0x18004EB0C (PsspCaptureVaSpaceInformation.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     LdrpProtectAndRelocateImage @ 0x1800733E4 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x1800779B4 (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180077EF0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180077FB0 (RtlUnlockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180080CB0 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     LdrpCaptureCriticalThunks @ 0x1800C0C48 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800D8620 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800DE8C0 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800DF31C (RtlpScanProcessVirtualMemory.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800E57F0 (RtlpGuardIsSuppressedAddress.c)
 *     RtlDebugCreateHeap @ 0x1800EC2EC (RtlDebugCreateHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800F04C8 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpProtectHeap @ 0x1800F123C (RtlpHpProtectHeap.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
