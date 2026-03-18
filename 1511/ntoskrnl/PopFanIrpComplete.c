/*
 * XREFs of PopFanIrpComplete @ 0x1401F36B8
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopFanIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 80), DelayedWorkQueue);
  return 3221225494LL;
}
