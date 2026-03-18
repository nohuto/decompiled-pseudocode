/*
 * XREFs of ExReleaseTimeRefreshLock @ 0x140559DEC
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x140130474 (ExCleanTimerResolutionRequest.c)
 *     PoBroadcastSystemState @ 0x1403EE2D4 (PoBroadcastSystemState.c)
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     KdpTimeSlipWork @ 0x14072C8E0 (KdpTimeSlipWork.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 */

void ExReleaseTimeRefreshLock()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v1; // ax

  ExReleaseResourceLite(&ExpTimeRefreshLock);
  CurrentThread = KeGetCurrentThread();
  v1 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v1;
  if ( !v1
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
