/*
 * XREFs of RtlCaptureStackBackTrace @ 0x1400243AC
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     RtlpLogHeapFailure @ 0x14014FF40 (RtlpLogHeapFailure.c)
 *     MiShowBadMapper @ 0x1401CEA7C (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x1401D2A9C (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 *     RtlStdLogStackTrace @ 0x1401F6FF4 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1401F924C (RtlGetCallersAddress.c)
 *     ViKeLogCriticalRegionStackTrace @ 0x14020BE70 (ViKeLogCriticalRegionStackTrace.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     CmpLogDirtyVectorUse @ 0x1403EDAE8 (CmpLogDirtyVectorUse.c)
 *     ViPoolLogStackCallout @ 0x1406B582C (ViPoolLogStackCallout.c)
 *     VfPendingFinishLogging @ 0x1406C0E8C (VfPendingFinishLogging.c)
 *     ViFaultsInjectionNotification @ 0x1406C5438 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 *     ViKeIrqlLogCommon @ 0x1406C6F14 (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x1406CC308 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x140026150 (RtlWalkFrameChain.c)
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
