/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1404B78D8
 * Callers:
 *     ExpWnfNotifySubscription @ 0x1403E23AC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall ExpWnfStartKernelDispatcher(int a1)
{
  if ( a1 )
  {
    ExpWnfDispatchKernelSubscription();
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(ExpWnfDispatcher + 40), 2u);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(ExpWnfDispatcher + 40), 3, 2) == 2 )
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(ExpWnfDispatcher + 8), DelayedWorkQueue);
  }
}
