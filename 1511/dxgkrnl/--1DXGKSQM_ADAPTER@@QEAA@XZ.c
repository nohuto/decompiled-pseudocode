/*
 * XREFs of ??1DXGKSQM_ADAPTER@@QEAA@XZ @ 0x1C014FFD0
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0124E68 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKSQM_ADAPTER::~DXGKSQM_ADAPTER(DXGKSQM_ADAPTER *this)
{
  volatile signed __int32 *v1; // rcx
  __int64 v2; // rax

  v1 = (volatile signed __int32 *)pDxgkSqmControl;
  if ( !pDxgkSqmControl )
  {
    v2 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v2 + 24) = 865LL;
    WdLogEvent5_WdAssertion(v2);
    v1 = (volatile signed __int32 *)pDxgkSqmControl;
  }
  if ( !_InterlockedCompareExchange(v1 + 40, 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)pDxgkSqmControl, DxgkSqmThread, DelayedWorkQueue, 0LL);
}
