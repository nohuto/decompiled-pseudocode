/*
 * XREFs of ExUnsubscribeWnfStateChange @ 0x14055D070
 * Callers:
 *     <none>
 * Callees:
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 */

void __fastcall ExUnsubscribeWnfStateChange(struct _EX_RUNDOWN_REF *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExpWnfDeleteSubscription(a1, PsInitialSystemProcess, a3, a4);
  v5 = KeGetCurrentThread();
  v6 = v5->KernelApcDisable + 1;
  v5->KernelApcDisable = v6;
  if ( !v6
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v5->ApcState.ApcListHead[0].Flink != &v5->152
    && !v5->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
