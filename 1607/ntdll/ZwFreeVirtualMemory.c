/*
 * XREFs of ZwFreeVirtualMemory @ 0x1800A67E0
 * Callers:
 *     RtlDestroyMemoryZone @ 0x180002930 (RtlDestroyMemoryZone.c)
 *     EtwpShutdownCompression @ 0x180003274 (EtwpShutdownCompression.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180004424 (PsspDuplicateSnapshotRemoteToRemote.c)
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180004D60 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspFreeLinkedHandleList @ 0x18000692C (PsspFreeLinkedHandleList.c)
 *     PssNtFreeSnapshot @ 0x180007C30 (PssNtFreeSnapshot.c)
 *     WerpFreeSid @ 0x180008E8C (WerpFreeSid.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpSegPageRangeDecommit @ 0x1800417F8 (RtlpHpSegPageRangeDecommit.c)
 *     RtlpHpLargeFree @ 0x18004F620 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x1800515AC (RtlSparseBitmapCtxAllocateArray.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 *     EtwpFreeLoggerContext @ 0x180051E4C (EtwpFreeLoggerContext.c)
 *     RtlpHpSegHeapDestroy @ 0x180052518 (RtlpHpSegHeapDestroy.c)
 *     EtwpAllocateTraceBufferPool @ 0x180054620 (EtwpAllocateTraceBufferPool.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x18005810C (RtlpAllocDeallocQueryBuffer.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     RtlCreateQueryDebugBuffer @ 0x1800685B0 (RtlCreateQueryDebugBuffer.c)
 *     RtlpHpSegHeapAllocate @ 0x18007F918 (RtlpHpSegHeapAllocate.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB80 (RtlpHpSegSegmentAllocate.c)
 *     RtlpInitParameterBlock @ 0x180080F88 (RtlpInitParameterBlock.c)
 *     LdrEnsureMrdataHeapExists @ 0x180081CF0 (LdrEnsureMrdataHeapExists.c)
 *     RtlFreeUserStack @ 0x180087350 (RtlFreeUserStack.c)
 *     RtlDestroyHandleTable @ 0x180089840 (RtlDestroyHandleTable.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D35A0 (RtlpProcessReflectionStartup.c)
 *     GetShipAssertBuffer @ 0x1800D8E50 (GetShipAssertBuffer.c)
 *     WerEscalationLazyInit @ 0x1800D9288 (WerEscalationLazyInit.c)
 *     RtlExtendMemoryZone @ 0x1800E3100 (RtlExtendMemoryZone.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlStdDeleteStackDatabase @ 0x1800F25D0 (RtlStdDeleteStackDatabase.c)
 *     RtlStdInitializeStackDatabase @ 0x1800F2610 (RtlStdInitializeStackDatabase.c)
 *     RtlpTraceDatabaseFree @ 0x1800F3690 (RtlpTraceDatabaseFree.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800FBEA4 (RtlpHpLargeAllocationDestroy.c)
 *     PssNtFreeRemoteSnapshot @ 0x1800FED10 (PssNtFreeRemoteSnapshot.c)
 *     RtlpSparseBitmapRangeArrayCleanup @ 0x1801013F4 (RtlpSparseBitmapRangeArrayCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  NTSTATUS result; // eax

  result = 30;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
