/*
 * XREFs of NdisFreeRWLock @ 0x1C000E700
 * Callers:
 *     nullDeleteFilter @ 0x1C009BC8C (nullDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00AC5D8 (nullCreateFilter.c)
 *     EthDeleteFilter @ 0x1C00D41F4 (EthDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C01065CC (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C000E728 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  ndisFreePerProcessorSlot(Lock->RefCountSlot, 2003977294LL);
  ExFreePoolWithTag(Lock, 0);
}
