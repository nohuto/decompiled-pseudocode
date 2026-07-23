/*
 * XREFs of CmpForceFlushForCoalescing @ 0x14060376C
 * Callers:
 *     CmpCoalescingCallback @ 0x1401B5090 (CmpCoalescingCallback.c)
 *     HvpMarkDirty @ 0x1404F6BD0 (HvpMarkDirty.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
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
