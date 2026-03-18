/*
 * XREFs of PoIssueCoalescingNotification @ 0x14023AB10
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x140558308 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingActivate @ 0x1406B5318 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x1406B540C (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PopIssueCoalescingNotification @ 0x1406B5498 (PopIssueCoalescingNotification.c)
 */

__int64 __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  CurrentIrql = KeGetCurrentIrql();
  PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x70436F50u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[1].List.Blink = 0LL;
  HIDWORD(PoolWithTag[1].List.Flink) = a2;
  LOBYTE(PoolWithTag[1].List.Flink) = *(_BYTE *)(a1 + 32);
  if ( CurrentIrql >= 2u )
  {
    PoolWithTag->List.Flink = 0LL;
    PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PopIssueCoalescingNotification;
    PoolWithTag->Parameter = PoolWithTag;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  else
  {
    PopIssueCoalescingNotification();
  }
  return 0LL;
}
