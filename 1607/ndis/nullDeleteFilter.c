/*
 * XREFs of nullDeleteFilter @ 0x1C009E8D0
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009E760 (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C000FF60 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *a1)
{
  NdisFreeRWLock(a1[36]);
  ExFreePoolWithTag(a1, 0);
}
