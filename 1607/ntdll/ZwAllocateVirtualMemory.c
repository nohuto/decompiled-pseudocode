/*
 * XREFs of ZwAllocateVirtualMemory @ 0x1800A6720
 * Callers:
 *     EtwpInitializeCompression @ 0x180003078 (EtwpInitializeCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspCaptureThreadInformation @ 0x18000526C (PsspCaptureThreadInformation.c)
 *     WerpAllocateAndInitializeSid @ 0x180008DB0 (WerpAllocateAndInitializeSid.c)
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x180027790 (RtlpExtendHeap.c)
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpExtendLowFragHeapSegment @ 0x180028F00 (RtlpExtendLowFragHeapSegment.c)
 *     RtlpCreateLowFragHeap @ 0x180029C34 (RtlpCreateLowFragHeap.c)
 *     RtlCreateHeap @ 0x18002BA20 (RtlCreateHeap.c)
 *     RtlpHpSegPageRangeCommit @ 0x180043488 (RtlpHpSegPageRangeCommit.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCCC (RtlpInitializeHeapSegment.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x1800515BC (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpSparseBitmapCommitRangeArrayPage @ 0x180051698 (RtlpSparseBitmapCommitRangeArrayPage.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054630 (EtwpAllocateTraceBufferPool.c)
 *     EtwpAllocateFreeBuffers @ 0x1800547A8 (EtwpAllocateFreeBuffers.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18005811C (RtlpAllocDeallocQueryBuffer.c)
 *     PssNtCaptureSnapshot @ 0x180059160 (PssNtCaptureSnapshot.c)
 *     RtlpValidateHeapHeaders @ 0x18005D300 (RtlpValidateHeapHeaders.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlAllocateHandle @ 0x1800683A0 (RtlAllocateHandle.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpCommitQueryDebugInfo @ 0x18006DF8C (RtlpCommitQueryDebugInfo.c)
 *     RtlpHpSegLfhExtendContext @ 0x180077420 (RtlpHpSegLfhExtendContext.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F928 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB90 (RtlpHpSegSegmentAllocate.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     RtlCreateUserStack @ 0x180082160 (RtlCreateUserStack.c)
 *     RtlCreateMemoryZone @ 0x1800835F0 (RtlCreateMemoryZone.c)
 *     RtlpValidateHeap @ 0x180091244 (RtlpValidateHeap.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D549C (RtlpCopyRemoteDebugInformation.c)
 *     GetShipAssertBuffer @ 0x1800D8D90 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 *     RtlResetStackOverflow @ 0x1800D97F8 (RtlResetStackOverflow.c)
 *     RtlExtendMemoryZone @ 0x1800E3040 (RtlExtendMemoryZone.c)
 *     RtlValidateProcessHeaps @ 0x1800E9910 (RtlValidateProcessHeaps.c)
 *     RtlpAllocateTags @ 0x1800E9A34 (RtlpAllocateTags.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 *     RtlpStdExtendLowerWatermark @ 0x1800F2AA4 (RtlpStdExtendLowerWatermark.c)
 *     RtlpStdExtendUpperWatermark @ 0x1800F2B80 (RtlpStdExtendUpperWatermark.c)
 *     RtlpTraceDatabaseAllocate @ 0x1800F3644 (RtlpTraceDatabaseAllocate.c)
 * Callees:
 *     <none>
 */

__int64 ZwAllocateVirtualMemory()
{
  __int64 result; // rax

  result = 24LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
