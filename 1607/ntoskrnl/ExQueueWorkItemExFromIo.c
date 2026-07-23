/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14022E688
 * Callers:
 *     IoQueueWorkItemToNode @ 0x1401C9918 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14005FA2C (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1400CF05C (ExpTypeToPriority.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem((__int64)a1, v6, a3, 1u);
}
