/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A6720
 * Callers:
 *     EtwpInitializeCompression @ 0x180003078 (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D60 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspCaptureThreadInformation @ 0x180005260 (PsspCaptureThreadInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DA0 (WerpAllocateAndInitializeSid.c)
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027780 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028EF0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C24 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18002BA10 (RtlCreateHeap.c)
 *     RtlpHpSegPageRangeCommit @ 0x180043478 (RtlpHpSegPageRangeCommit.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x1800515AC (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpSparseBitmapCommitRangeArrayPage @ 0x180051688 (RtlpSparseBitmapCommitRangeArrayPage.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054620 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180054798 (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18005810C (RtlpAllocDeallocQueryBuffer.c)
 *     PssNtCaptureSnapshot @ 0x180059150 (PssNtCaptureSnapshot.c)
 *     RtlpValidateHeapHeaders @ 0x18005D2F0 (RtlpValidateHeapHeaders.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlAllocateHandle @ 0x180068390 (RtlAllocateHandle.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077410 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F918 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB80 (RtlpHpSegSegmentAllocate.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateUserStack @ 0x180082150 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x1800835E0 (RtlCreateMemoryZone.c)
 *     RtlpValidateHeap @ 0x180091234 (RtlpValidateHeap.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D555C (RtlpCopyRemoteDebugInformation.c)
 *     GetShipAssertBuffer @ 0x1800D8E50 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D9288 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800D98B8 (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800E3100 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800E99D0 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800E9AF4 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F2AA4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800F2B80 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800F3644 (RtlpTraceDatabaseAllocate.c)
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
