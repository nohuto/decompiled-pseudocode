/*
 * XREFs of ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C02D9B30
 * Callers:
 *     ?UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC2F0 (-UninitializeProcess@UmfdHostLifeTimeManager@@SAXXZ.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ @ 0x1C02BC3F4 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXXZ.c)
 * Callees:
 *     ?Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ @ 0x1C02DC2B0 (-Cancel@CWaitableWorkItem@CMultipleConsumerWorkQueue@@QEAAXXZ.c)
 */

CMultipleConsumerWorkQueue::CWaitableWorkItem *__fastcall UmfdCancelServerOutstandingRequests(union _SLIST_HEADER **a1)
{
  union _SLIST_HEADER *i; // rcx
  CMultipleConsumerWorkQueue::CWaitableWorkItem *result; // rax

  for ( i = *a1; ; i = *a1 )
  {
    result = (CMultipleConsumerWorkQueue::CWaitableWorkItem *)ExpInterlockedPopEntrySList(i + 1);
    if ( !result )
      break;
    CMultipleConsumerWorkQueue::CWaitableWorkItem::Cancel(result);
  }
  return result;
}
