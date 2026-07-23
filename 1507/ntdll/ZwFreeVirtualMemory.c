/*
 * XREFs of ZwFreeVirtualMemory @ 0x180093AE0
 * Callers:
 *     WerpFreeSid @ 0x180001F54 (WerpFreeSid.c)
 *     RtlFreeUserStack @ 0x180002EB0 (RtlFreeUserStack.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAllocate @ 0x180003BE8 (RtlpHpSegHeapAllocate.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800051C8 (LdrEnsureMrdataHeapExists.c)
 *     RtlpHpSegHeapDestroy @ 0x180008328 (RtlpHpSegHeapDestroy.c)
 *     EtwpFreeLoggerContext @ 0x1800094E8 (EtwpFreeLoggerContext.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18000DE90 (RtlpAllocDeallocQueryBuffer.c)
 *     RtlpHpSegPageRangeDecommit @ 0x1800370E8 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlCreateQueryDebugBuffer @ 0x180052F10 (RtlCreateQueryDebugBuffer.c)
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x1800586E4 (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x180058B8C (RtlSparseBitmapCtxAllocateArray.c)
 *     PsspCaptureAuxiliaryPages @ 0x180058D10 (PsspCaptureAuxiliaryPages.c)
 *     PssNtFreeSnapshot @ 0x1800597E0 (PssNtFreeSnapshot.c)
 *     RtlpInitParameterBlock @ 0x180070FE4 (RtlpInitParameterBlock.c)
 *     EtwpAllocateTraceBufferPool @ 0x1800766E0 (EtwpAllocateTraceBufferPool.c)
 *     RtlDestroyMemoryZone @ 0x180078CF0 (RtlDestroyMemoryZone.c)
 *     RtlDestroyHandleTable @ 0x180079250 (RtlDestroyHandleTable.c)
 *     PsspCaptureHandleInformation @ 0x180082508 (PsspCaptureHandleInformation.c)
 *     PsspFreeLinkedHandleList @ 0x1800833F8 (PsspFreeLinkedHandleList.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180083478 (PsspDuplicateSnapshotLocalToRemote.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 *     GetShipAssertBuffer @ 0x1800C7FA4 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800C83D8 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800D1E70 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800E4760 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800E47A0 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800E5E40 (RtlpTraceDatabaseFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F0430 (RtlpHpLargeAllocationDestroy.c)
 *     EtwpShutdownCompression @ 0x1800F5244 (EtwpShutdownCompression.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800F65A0 (PssNtFreeRemoteSnapshot.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1800F68A4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  __asm { syscall; Low latency system call }
  return result;
}
