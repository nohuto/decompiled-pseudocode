/*
 * XREFs of KeDeregisterBoundCallback @ 0x1401C3BD4
 * Callers:
 *     <none>
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x1400384D0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     PspQueueApcSpecialApc @ 0x1404B8A08 (PspQueueApcSpecialApc.c)
 *     ExWaitForCallBacks @ 0x14066C12C (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // edi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // si

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v3;
}
