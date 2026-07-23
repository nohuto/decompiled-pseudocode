/*
 * XREFs of RtlCaptureStackBackTrace @ 0x140082890
 * Callers:
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140065520 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     MiShowBadMapper @ 0x1401E1300 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1401E298C (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x140211584 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1402133A4 (RtlGetCallersAddress.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x140223758 (ViKeLogCriticalRegionStackTrace.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     CmpLogDirtyVectorUse @ 0x140480720 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x140701694 (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x14070CF24 (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x1407114AC (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x140712F64 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1407140E4 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14004EE20 (RtlWalkFrameChain.c)
 */

USHORT __stdcall RtlCaptureStackBackTrace(
        ULONG FramesToSkip,
        ULONG FramesToCapture,
        PVOID *BackTrace,
        PULONG BackTraceHash)
{
  ULONG v4; // edi
  ULONG v7; // ebx
  ULONG v8; // eax
  ULONG v9; // ecx
  unsigned int v10; // r8d
  unsigned int i; // edx
  __int64 v13; // rax

  v4 = FramesToCapture;
  if ( FramesToCapture > 0xFFFF )
    v4 = 0xFFFF;
  if ( FramesToSkip > 0xFE )
    return 0;
  v7 = FramesToSkip + 1;
  v8 = RtlWalkFrameChain(BackTrace, v7 + v4, v7 << 8);
  v9 = 0;
  v10 = v8;
  if ( v8 <= v7 )
    return 0;
  if ( BackTraceHash )
  {
    for ( i = 0; i < v4; v9 += LODWORD(BackTrace[v13]) )
    {
      if ( i + v7 >= v10 )
        break;
      v13 = i++;
    }
    *BackTraceHash = v9;
  }
  else
  {
    LOWORD(i) = v8 - v7;
  }
  return i;
}
