/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A6880
 * Callers:
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180002330 (RtlUnlockCurrentThread.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18002D85C (RtlpProtectHeap.c)
 *     LdrpMapViewOfSection @ 0x18002F344 (LdrpMapViewOfSection.c)
 *     LdrpGetImageSize @ 0x180031454 (LdrpGetImageSize.c)
 *     RtlpWalkFrameChain @ 0x1800326C0 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x1800362E0 (RtlpxLookupFunctionTable.c)
 *     LdrResSearchResource @ 0x180039300 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C30 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180087C38 (LdrpTouchThreadStack.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896A8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpCaptureCriticalThunks @ 0x18008A024 (LdrpCaptureCriticalThunks.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E98A8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800ED250 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800EDC90 (RtlpScanProcessVirtualMemory.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
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
