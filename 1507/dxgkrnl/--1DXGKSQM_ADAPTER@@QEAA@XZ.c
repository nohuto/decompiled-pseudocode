/*
 * XREFs of ??1DXGKSQM_ADAPTER@@QEAA@XZ @ 0x1C014B27C
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C011F368 (--1DXGADAPTER@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGKSQM_ADAPTER::~DXGKSQM_ADAPTER(DXGKSQM_ADAPTER *this, __int64 a2, __int64 a3, __int64 a4)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax

  v4 = (volatile signed __int32 *)pDxgkSqmControl;
  if ( !pDxgkSqmControl )
  {
    v5 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 865LL;
    WdLogEvent5_WdAssertion(v5);
    v4 = (volatile signed __int32 *)pDxgkSqmControl;
  }
  if ( !_InterlockedCompareExchange(v4 + 40, 1, 0) )
    IoQueueWorkItem(*(PIO_WORKITEM *)pDxgkSqmControl, DxgkSqmThread, DelayedWorkQueue, 0LL);
}
