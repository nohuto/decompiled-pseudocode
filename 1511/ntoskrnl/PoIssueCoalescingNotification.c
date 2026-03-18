/*
 * XREFs of PoIssueCoalescingNotification @ 0x1401EC7F4
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x1404C1E00 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingActivate @ 0x140635B48 (PopCoalescingActivate.c)
 *     PopCoalescingNotify @ 0x140635C3C (PopCoalescingNotify.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopIssueCoalescingNotification @ 0x140635CC0 (PopIssueCoalescingNotification.c)
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
