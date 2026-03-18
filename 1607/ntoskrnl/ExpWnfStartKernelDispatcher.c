/*
 * XREFs of ExpWnfStartKernelDispatcher @ 0x1404D5F6C
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x1404630B4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x1404D5E70 (ExpWnfNotifySubscription.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
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
