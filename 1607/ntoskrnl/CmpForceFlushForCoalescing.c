/*
 * XREFs of CmpForceFlushForCoalescing @ 0x1406036B8
 * Callers:
 *     CmpCoalescingCallback @ 0x1401B51AC (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1405137E0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
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
