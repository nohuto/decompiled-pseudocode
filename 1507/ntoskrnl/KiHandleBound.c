/*
 * XREFs of KiHandleBound @ 0x14020024C
 * Callers:
 *     KiBoundFault @ 0x14018EDC0 (KiBoundFault.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 */

__int64 KiHandleBound()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // ebx
  struct _EX_RUNDOWN_REF *v2; // rax
  struct _EX_RUNDOWN_REF *v3; // rdi
  struct _KTHREAD *v4; // rdx
  __int16 v5; // cx

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  --CurrentThread->KernelApcDisable;
  v2 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v3 = v2;
  if ( v2 )
  {
    v1 = ((__int64 (*)(void))v2[1].Count)();
    ExDereferenceCallBackBlock(&KiBoundsCallback, v3);
  }
  v4 = KeGetCurrentThread();
  v5 = v4->KernelApcDisable + 1;
  v4->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
    && !v4->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v1;
}
