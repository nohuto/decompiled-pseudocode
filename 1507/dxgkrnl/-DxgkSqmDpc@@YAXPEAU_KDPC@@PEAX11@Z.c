/*
 * XREFs of ?DxgkSqmDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001FA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DxgkSqmDpc(struct _KDPC *Dpc, PVOID DeferredContext, PVOID SystemArgument1, PVOID SystemArgument2)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax

  v4 = (volatile signed __int32 *)pDxgkSqmControl;
  if ( !pDxgkSqmControl )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, DeferredContext, SystemArgument1, SystemArgument2);
    *(_QWORD *)(v5 + 24) = 506LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = (volatile signed __int32 *)pDxgkSqmControl;
  }
  if ( !_InterlockedCompareExchange(v4 + 40, 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)pDxgkSqmControl, DxgkSqmThread, DelayedWorkQueue, 0LL);
}
