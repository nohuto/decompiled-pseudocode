/*
 * XREFs of KeDeregisterBoundCallback @ 0x1401FFC50
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400100E0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1404F9234 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x1406EF7C0 (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // si
  struct _KTHREAD *v7; // rdx
  __int16 v8; // ax

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( v4[1].Count == a1 )
      v6 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v4);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v5);
    if ( v6 )
    {
      ExWaitForCallBacks(v5);
      PspQueueApcSpecialApc(v5);
      v3 = 0;
    }
  }
  v7 = KeGetCurrentThread();
  v8 = v7->KernelApcDisable + 1;
  v7->KernelApcDisable = v8;
  if ( !v8
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v7->ApcState.ApcListHead[0].Flink != &v7->152
    && !v7->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v3;
}
