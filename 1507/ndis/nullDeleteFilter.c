/*
 * XREFs of nullDeleteFilter @ 0x1C009BC8C
 * Callers:
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C009BB1C (ndisMCleanupMiniportBlockOnStop.c)
 * Callees:
 *     NdisFreeRWLock @ 0x1C000E700 (NdisFreeRWLock.c)
 */

void __fastcall nullDeleteFilter(PNDIS_RW_LOCK_EX *a1)
{
  NdisFreeRWLock(a1[36]);
  ExFreePoolWithTag(a1, 0);
}
