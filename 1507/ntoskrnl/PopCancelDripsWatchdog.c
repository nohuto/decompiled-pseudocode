/*
 * XREFs of PopCancelDripsWatchdog @ 0x1406BCF60
 * Callers:
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeCancelTimer2 @ 0x1400F436C (KeCancelTimer2.c)
 *     PopAcquireDripsWatchdogLock @ 0x1406BCF40 (PopAcquireDripsWatchdogLock.c)
 */

void PopCancelDripsWatchdog()
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v1; // ax

  if ( PopDripsWatchdog )
  {
    PopAcquireDripsWatchdogLock();
    KeCancelTimer2((__int64)&unk_1403571D0);
    qword_140357118 = 0LL;
    qword_140357150 = 0LL;
    qword_140357158 = 0LL;
    qword_140357160 = 0LL;
    qword_140357120 = 0LL;
    qword_140357128 = 0LL;
    qword_140357130 = 0LL;
    qword_140357138 = 0LL;
    qword_140357140 = 0LL;
    qword_140357148 = 0LL;
    ExReleaseResourceLite(&stru_140357168);
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
}
