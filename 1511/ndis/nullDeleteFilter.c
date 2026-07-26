/*
 * XREFs of nullDeleteFilter @ 0x1C0098EFC
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C0098D8C (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C0010D20 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *a1)
{
  NdisFreeRWLock(a1[36]);
  ExFreePoolWithTag(a1, 0);
}
