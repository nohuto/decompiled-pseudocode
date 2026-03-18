/*
 * XREFs of KeDeregisterBoundCallback @ 0x1401D2770
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140013F40 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136688 (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1403E5244 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x1406AFC00 (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _EX_RUNDOWN_REF *v8; // rbx
  char v9; // si

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v8 = v4;
  if ( v4 )
  {
    v9 = 0;
    if ( v4[1].Count == a1 )
      v9 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v4);
    ExDereferenceCallBackBlock(&KiBoundsCallback, v8);
    if ( v9 )
    {
      ExWaitForCallBacks(v8);
      PspQueueApcSpecialApc(v8);
      v3 = 0;
    }
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v5, v6, v7);
  return v3;
}
