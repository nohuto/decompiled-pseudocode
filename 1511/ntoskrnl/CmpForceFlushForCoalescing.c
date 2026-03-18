/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1405E3DB4
 * Callers:
 *     CmpCoalescingCallback @ 0x1401A9F98 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1403F77C0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void CmpForceFlushForCoalescing()
{
  int v0; // eax

  if ( !CmpNoWrite )
  {
    if ( CmpWorkerDataInitialized )
    {
      v0 = CmpForceFlushPending;
      if ( !CmpForceFlushPending && !_InterlockedCompareExchange(&CmpForceFlushPending, 1, 0) )
        ExQueueWorkItem(&CmpForceFlushWorkItem, (WORK_QUEUE_TYPE)(v0 + 1));
    }
  }
}
