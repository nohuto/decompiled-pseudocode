/*
 * XREFs of NormalizationList__Unlock @ 0x14024EEAC
 * Callers:
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 * Callees:
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void NormalizationList__Unlock()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v1; // ax

  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&NormalizationListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&NormalizationListLock);
  KeAbPostRelease((ULONG_PTR)&NormalizationListLock);
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
