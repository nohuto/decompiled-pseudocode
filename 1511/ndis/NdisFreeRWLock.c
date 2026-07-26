/*
 * XREFs of NdisFreeRWLock @ 0x1C0010D20
 * Callers:
 *     nullDeleteFilter @ 0x1C0098EFC (nullDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00ACCE0 (nullCreateFilter.c)
 *     EthDeleteFilter @ 0x1C00CD984 (EthDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C01005EC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C0010D48 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  ndisFreePerProcessorSlot(Lock->RefCountSlot, 2003977294LL);
  ExFreePoolWithTag(Lock, 0);
}
