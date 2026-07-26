/*
 * XREFs of ndisEmptyPeriodicReceivesQueue @ 0x1C0065ED4
 * Callers:
 *     ndisSwitchMiniportReceiveFunction @ 0x1C002505C (ndisSwitchMiniportReceiveFunction.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004EF18 (ndisBindUnbindPeriodicReceives.c)
 * Callees:
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0001160 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisTracePeriodicReceivesEnd @ 0x1C004FA28 (ndisTracePeriodicReceivesEnd.c)
 *     ndisTracePeriodicReceivesStart @ 0x1C004FB08 (ndisTracePeriodicReceivesStart.c)
 *     ndisReturnNetBufferListsInternal @ 0x1C00671E8 (ndisReturnNetBufferListsInternal.c)
 */

_NET_BUFFER_LIST *__fastcall ndisEmptyPeriodicReceivesQueue(struct _NDIS_MINIPORT_BLOCK *a1, char a2)
{
  _NET_BUFFER_LIST *result; // rax
  struct _NET_BUFFER_LIST *QueuedHead; // rdi
  unsigned __int64 *p_SpinLock; // rsi
  char v7; // bp
  __int64 v8; // r8
  __int64 Clock; // r14
  unsigned int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax

  result = a1->PeriodicReceiveQueue.QueuedHead;
  QueuedHead = 0LL;
  if ( result )
  {
    QueuedHead = a1->PeriodicReceiveQueue.QueuedHead;
    result = (_NET_BUFFER_LIST *)(unsigned int)a1->PeriodicReceiveQueue.NumMQueuedNbls;
    a1->PeriodicReceiveQueue.TrackingDequeued += (unsigned int)result;
    if ( a2 )
      a1->PeriodicReceiveQueue.TrackingEmptied += (unsigned int)result;
    else
      a1->PeriodicReceiveQueue.NumNblsDequeued += (int)result;
  }
  a1->PeriodicReceiveQueue.QueuedHead = 0LL;
  a1->PeriodicReceiveQueue.QueuedTail = 0LL;
  a1->PeriodicReceiveQueue.NumMQueuedNbls = 0;
  if ( QueuedHead )
  {
    a1->PeriodicReceiveQueue.LockThread = 0LL;
    p_SpinLock = &a1->PeriodicReceiveQueue.SpinLock;
    a1->PeriodicReceiveQueue.LockDbg = 0;
    KeReleaseSpinLockFromDpcLevel(&a1->PeriodicReceiveQueue.SpinLock);
    if ( a2 )
    {
      ndisReturnNetBufferListsInternal(a1, QueuedHead, 0LL, 0LL);
    }
    else
    {
      if ( BYTE1(dword_1C008AE58) )
      {
        v7 = 1;
        ndisTracePeriodicReceivesStart((__int64)a1);
        Clock = WmiGetClock(0LL, 0LL, v8);
      }
      else
      {
        Clock = 0LL;
        v7 = 0;
      }
      v10 = ndisDoPeriodicReceivesIndication(a1, QueuedHead);
      if ( v7 )
      {
        v12 = WmiGetClock(0LL, 0LL, v11);
        ndisTracePeriodicReceivesEnd((__int64)a1, v12 - Clock, v10);
      }
    }
    KeAcquireSpinLockAtDpcLevel(p_SpinLock);
    result = (_NET_BUFFER_LIST *)KeGetCurrentThread();
    a1->PeriodicReceiveQueue.LockThread = result;
    a1->PeriodicReceiveQueue.LockDbg = 2494644;
  }
  return result;
}
