/*
 * XREFs of ZwAllocateVirtualMemory @ 0x180093A80
 * Callers:
 *     RtlCreateUserStack @ 0x180001780 (RtlCreateUserStack.c)
 *     WerpAllocateAndInitializeSid @ 0x180001FA8 (WerpAllocateAndInitializeSid.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAllocate @ 0x180003BE8 (RtlpHpSegHeapAllocate.c)
 *     RtlpCreateLowFragHeap @ 0x180004D48 (RtlpCreateLowFragHeap.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18000DE90 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpHpSegLfhVsCommit @ 0x180037280 (RtlpHpSegLfhVsCommit.c)
 *     RtlAllocateHandle @ 0x1800526C0 (RtlAllocateHandle.c)
 *     RtlCreateQueryDebugBuffer @ 0x180052F10 (RtlCreateQueryDebugBuffer.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x180058B8C (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpSparseBitmapCommitRangeArrayPage @ 0x180058C6C (RtlpSparseBitmapCommitRangeArrayPage.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     PssNtCaptureSnapshot @ 0x180058F80 (PssNtCaptureSnapshot.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800695AC (RtlpCommitQueryDebugInfo.c)
 *     RtlpExtendLowFragHeapSegment @ 0x18006ACE0 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpHpSegLfhExtendContext @ 0x18006C810 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800704D4 (RtlpHpSegPageRangeCommit.c)
 *     RtlCreateMemoryZone @ 0x180072D10 (RtlCreateMemoryZone.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x180076848 (EtwpAllocateFreeBuffers.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180082EEC (PsspCaptureThreadInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800C3ECC (RtlpCopyRemoteDebugInformation.c)
 *     GetShipAssertBuffer @ 0x1800C7FA4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800C83D8 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800C8A08 (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800D1E70 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800D8750 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800D8890 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E47A0 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800E4C34 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800E4D10 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800E5DF4 (RtlpTraceDatabaseAllocate.c)
 *     RtlpValidateHeap @ 0x1800EDA3C (RtlpValidateHeap.c)
 *     RtlpValidateHeapHeaders @ 0x1800EE040 (RtlpValidateHeapHeaders.c)
 *     EtwpInitializeCompression @ 0x1800F51B0 (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
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
  __asm { syscall; Low latency system call }
  return result;
}
