/*
 * XREFs of PopThermalIrpComplete @ 0x14014B840
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 */

__int64 __fastcall PopThermalIrpComplete(__int64 a1, __int64 a2, struct _WORK_QUEUE_ITEM *a3)
{
  ExQueueWorkItem(a3 + 12, DelayedWorkQueue);
  return 3221225494LL;
}
