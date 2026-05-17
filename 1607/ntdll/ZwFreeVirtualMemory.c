/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A67E0
 * Callers:
 *     RtlDestroyMemoryZone @ 0x180002930 (RtlDestroyMemoryZone.c)
 *     EtwpShutdownCompression @ 0x180003274 (EtwpShutdownCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureHandleInformation @ 0x180004AAC (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D44 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspFreeLinkedHandleList @ 0x18000693C (PsspFreeLinkedHandleList.c)
 *     PssNtFreeSnapshot @ 0x180007C40 (PssNtFreeSnapshot.c)
 *     WerpFreeSid @ 0x180008E9C (WerpFreeSid.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpSegPageRangeDecommit @ 0x180041808 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x1800515BC (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpHpLargeReAlloc @ 0x180051838 (RtlpHpLargeReAlloc.c)
 *     EtwpFreeLoggerContext @ 0x180051E5C (EtwpFreeLoggerContext.c)
 *     RtlpHpSegHeapDestroy @ 0x180052528 (RtlpHpSegHeapDestroy.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054630 (EtwpAllocateTraceBufferPool.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18005811C (RtlpAllocDeallocQueryBuffer.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067344 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685C0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F928 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB90 (RtlpHpSegSegmentAllocate.c)
 *     RtlpInitParameterBlock @ 0x180080F98 (RtlpInitParameterBlock.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081D00 (LdrEnsureMrdataHeapExists.c)
 *     RtlFreeUserStack @ 0x180087360 (RtlFreeUserStack.c)
 *     RtlDestroyHandleTable @ 0x180089850 (RtlDestroyHandleTable.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D34E0 (RtlpProcessReflectionStartup.c)
 *     GetShipAssertBuffer @ 0x1800D8D90 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D91C8 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800E3040 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA33C (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800F25D0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800F3690 (RtlpTraceDatabaseFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 *     RtlpSparseBitmapRangeArrayCleanup @ 0x1801014B4 (RtlpSparseBitmapRangeArrayCleanup.c)
 * Callees:
 *     <none>
 */

__int64 ZwFreeVirtualMemory()
{
  __int64 result; // rax

  result = 30LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
