/*
 * XREFs of CmpCoalescingCallback @ 0x1401DFE7C
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void __fastcall CmpCoalescingCallback(int a1)
{
  int v1; // ecx
  WORK_QUEUE_TYPE v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rcx
  __int16 v5; // ax

  v1 = a1 - 1;
  if ( v1 )
  {
    v2 = v1 - 1;
    if ( v2 )
    {
      if ( v2 == DelayedWorkQueue )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        if ( !CmpNoWrite
          && CmpWorkerDataInitialized
          && !CmpForceFlushPending
          && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        {
          ExQueueWorkItem(&CmpForceFlushWorkItem, v2);
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
      }
    }
    else
    {
      CmpEnableLazyFlush(8);
    }
  }
  else
  {
    _InterlockedOr(&CmpHoldLazyFlush, 8u);
  }
}
