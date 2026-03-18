/*
 * XREFs of RtlCaptureStackBackTrace @ 0x14001D418
 * Callers:
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400C7FC0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1400C88C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     RtlpLogHeapFailure @ 0x14017E6E8 (RtlpLogHeapFailure.c)
 *     MiShowBadMapper @ 0x14020DDF0 (MiShowBadMapper.c)
 *     MiAddMdlTracker @ 0x140213DCC (MiAddMdlTracker.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 *     RtlStdLogStackTrace @ 0x140245C34 (RtlStdLogStackTrace.c)
 *     RtlGetCallersAddress @ 0x1402482B4 (RtlGetCallersAddress.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     CmpLogDirtyVectorUse @ 0x14044DBE0 (CmpLogDirtyVectorUse.c)
 *     VerifierKeReleaseQueuedSpinLock @ 0x1407421E4 (VerifierKeReleaseQueuedSpinLock.c)
 *     VfPendingFinishLogging @ 0x1407426CC (VfPendingFinishLogging.c)
 *     ViPoolLogStackCallout @ 0x1407463BC (ViPoolLogStackCallout.c)
 *     ViFaultsInjectionNotification @ 0x140746EE8 (ViFaultsInjectionNotification.c)
 *     VfCheckUserHandle @ 0x1407473CC (VfCheckUserHandle.c)
 *     VerifierKeEnterCriticalRegion @ 0x14074812C (VerifierKeEnterCriticalRegion.c)
 *     VerifierKeLeaveCriticalRegion @ 0x14074839C (VerifierKeLeaveCriticalRegion.c)
 *     VerifierKeLowerIrql @ 0x14074846C (VerifierKeLowerIrql.c)
 *     VerifierKeReleaseInStackQueuedSpinLock @ 0x140748584 (VerifierKeReleaseInStackQueuedSpinLock.c)
 *     VerifierKeReleaseInStackQueuedSpinLockNoReboot @ 0x14074877C (VerifierKeReleaseInStackQueuedSpinLockNoReboot.c)
 *     VerifierKeReleaseSpinLock @ 0x1407489FC (VerifierKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLock @ 0x140748C30 (VerifierPortKeReleaseSpinLock.c)
 *     VerifierPortKeReleaseSpinLockNoXdv @ 0x140749904 (VerifierPortKeReleaseSpinLockNoXdv.c)
 *     ViKeRaiseIrqlSanityChecks @ 0x140749DC8 (ViKeRaiseIrqlSanityChecks.c)
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockInitializeResource @ 0x14074FB94 (VfDeadlockInitializeResource.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     VerifierExReleaseFastMutex @ 0x140751B00 (VerifierExReleaseFastMutex.c)
 *     ViExAcquireFastMutexCommon @ 0x140751EEC (ViExAcquireFastMutexCommon.c)
 *     ViExTryToAcquireFastMutexCommon @ 0x140752060 (ViExTryToAcquireFastMutexCommon.c)
 * Callees:
 *     RtlWalkFrameChain @ 0x14001D4B0 (RtlWalkFrameChain.c)
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
