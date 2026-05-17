/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A6880
 * Callers:
 *     RtlLockCurrentThread @ 0x180002270 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180002330 (RtlUnlockCurrentThread.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CB4 (PsspCaptureVaSpaceInformation.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x18002D86C (RtlpProtectHeap.c)
 *     LdrpMapViewOfSection @ 0x18002F354 (LdrpMapViewOfSection.c)
 *     LdrpGetImageSize @ 0x180031464 (LdrpGetImageSize.c)
 *     RtlpWalkFrameChain @ 0x1800326D0 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x1800362F0 (RtlpxLookupFunctionTable.c)
 *     LdrResSearchResource @ 0x180039310 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     LdrpProtectAndRelocateImage @ 0x180084C40 (LdrpProtectAndRelocateImage.c)
 *     LdrpTouchThreadStack @ 0x180087C48 (LdrpTouchThreadStack.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800896B8 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpCaptureCriticalThunks @ 0x18008A034 (LdrpCaptureCriticalThunks.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800E97E8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800ED190 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800EDBD0 (RtlpScanProcessVirtualMemory.c)
 *     RtlpGuardIsSuppressedAddress @ 0x1800EFB24 (RtlpGuardIsSuppressedAddress.c)
 *     RtlpHpProtectHeap @ 0x1800F9E20 (RtlpHpProtectHeap.c)
 *     RtlDebugCreateHeap @ 0x1800FA2A0 (RtlDebugCreateHeap.c)
 *     RtlpHpLargeAllocationProtect @ 0x1800FBF38 (RtlpHpLargeAllocationProtect.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
