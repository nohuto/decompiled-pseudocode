/*
 * XREFs of DbgkpResumeProcess @ 0x1406696BC
 * Callers:
 *     PsDispatchIumService @ 0x140244710 (PsDispatchIumService.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     PsThawProcess @ 0x1404EBD04 (PsThawProcess.c)
 */

void __fastcall DbgkpResumeProcess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rcx
  __int16 v5; // ax

  PsThawProcess(a1, 0, a3, a4);
  CurrentThread = KeGetCurrentThread();
  v5 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
