/*
 * XREFs of ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006167C
 * Callers:
 *     ndisPeriodicReceivesWorker @ 0x1C0062D40 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     ndisPeriodicReceivesGetMaxNblCount @ 0x1C0062CF0 (ndisPeriodicReceivesGetMaxNblCount.c)
 */

struct _NET_BUFFER_LIST *__fastcall ndisGetMiniportIndicateList(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NET_BUFFER_LIST *v2; // rsi
  int MaxNblCount; // edi
  _NET_BUFFER_LIST *QueuedHead; // rcx
  int v5; // edx

  v2 = 0LL;
  MaxNblCount = ndisPeriodicReceivesGetMaxNblCount();
  KeAcquireSpinLockAtDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  a1->PeriodicReceiveQueue.LockThread = KeGetCurrentThread();
  a1->PeriodicReceiveQueue.LockDbg = 2494242;
  if ( a1->PeriodicReceiveQueue.NumMQueuedNbls )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    v5 = 0;
    while ( QueuedHead )
    {
      ++a1->PeriodicReceiveQueue.TrackingDequeued;
      ++v5;
      if ( !--MaxNblCount )
        break;
      QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
    }
    v2 = a1->PeriodicReceiveQueue.QueuedHead;
    if ( QueuedHead )
    {
      a1->PeriodicReceiveQueue.QueuedHead = (_NET_BUFFER_LIST *)QueuedHead->Link.Alignment;
      QueuedHead->Link.Alignment = 0LL;
    }
    else
    {
      a1->PeriodicReceiveQueue.QueuedHead = 0LL;
    }
    if ( !a1->PeriodicReceiveQueue.QueuedHead )
      a1->PeriodicReceiveQueue.QueuedTail = 0LL;
    a1->PeriodicReceiveQueue.NumMQueuedNbls -= v5;
    a1->PeriodicReceiveQueue.NumNblsDequeued += v5;
  }
  a1->PeriodicReceiveQueue.LockThread = 0LL;
  a1->PeriodicReceiveQueue.LockDbg = 0;
  KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
  return v2;
}
