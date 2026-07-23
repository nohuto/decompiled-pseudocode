/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A53C0
 * Callers:
 *     RtlCreateMemoryZone @ 0x1800011E0 (RtlCreateMemoryZone.c)
 *     WerpAllocateAndInitializeSid @ 0x180002EE8 (WerpAllocateAndInitializeSid.c)
 *     RtlpHpSegPageRangeCommit @ 0x18001B578 (RtlpHpSegPageRangeCommit.c)
 *     RtlpExtendHeap @ 0x18001E644 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x18001E8B0 (RtlpFindAndCommitPages.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlCreateQueryDebugBuffer @ 0x180042E90 (RtlCreateQueryDebugBuffer.c)
 *     RtlAllocateHandle @ 0x180044190 (RtlAllocateHandle.c)
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     EtwpAllocateTraceBufferPool @ 0x180045378 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x1800454F8 (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x180046DD8 (RtlpAllocDeallocQueryBuffer.c)
 *     PssNtCaptureSnapshot @ 0x1800478E0 (PssNtCaptureSnapshot.c)
 *     RtlpValidateHeapHeaders @ 0x18004B6B0 (RtlpValidateHeapHeaders.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18004F4BC (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCreateLowFragHeap @ 0x180053214 (RtlpCreateLowFragHeap.c)
 *     RtlpHpSegLfhExtendContext @ 0x1800535C0 (RtlpHpSegLfhExtendContext.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800551A8 (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateHeap @ 0x180055310 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180057998 (RtlpInitializeHeapSegment.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800593FC (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAllocate @ 0x180059598 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x18005ADDC (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpSparseBitmapCommitRangeArrayPage @ 0x18005AEBC (RtlpSparseBitmapCommitRangeArrayPage.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006CDEC (RtlpCommitQueryDebugInfo.c)
 *     RtlCreateUserStack @ 0x1800832E0 (RtlCreateUserStack.c)
 *     PsspCaptureHandleInformation @ 0x18008A588 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18008B488 (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x18008BDD8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     WerEscalationLazyInit @ 0x18008C318 (WerEscalationLazyInit.c)
 *     GetShipAssertBuffer @ 0x18008C868 (GetShipAssertBuffer.c)
 *     RtlCreateProcessReflection @ 0x18008C990 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     RtlpValidateHeap @ 0x180092BC8 (RtlpValidateHeap.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800CD51C (RtlpCopyRemoteDebugInformation.c)
 *     RtlResetStackOverflow @ 0x1800D1444 (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800DA390 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800E07B0 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800E08D4 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E9300 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800E9794 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800E9870 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800EA8D4 (RtlpTraceDatabaseAllocate.c)
 *     EtwpInitializeCompression @ 0x1800F4BAC (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F67B8 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  NTSTATUS result; // eax

  result = 24;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
