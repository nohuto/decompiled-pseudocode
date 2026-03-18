/*
 * XREFs of ExpWnfWorkItemRoutine @ 0x1406FC580
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140561FF0 (ExpWnfDispatchKernelSubscription.c)
 */

void __fastcall ExpWnfWorkItemRoutine(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v5; // rcx
  __int16 v6; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  do
  {
    _InterlockedAnd((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0xFFFFFFFD);
    ExpWnfDispatchKernelSubscription(a1, a2, a3, a4);
    a1 = ExpWnfDispatcher;
  }
  while ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 0, 1) != 1 );
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
