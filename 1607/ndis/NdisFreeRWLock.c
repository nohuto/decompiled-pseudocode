/*
 * XREFs of NdisFreeRWLock @ 0x1C000FF60
 * Callers:
 *     nullDeleteFilter @ 0x1C009E8D0 (nullDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00B0604 (nullCreateFilter.c)
 *     EthDeleteFilter @ 0x1C00D36B4 (EthDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C010650C (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C000FF88 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  ndisFreePerProcessorSlot(Lock->RefCountSlot, 2003977294LL);
  ExFreePoolWithTag(Lock, 0);
}
