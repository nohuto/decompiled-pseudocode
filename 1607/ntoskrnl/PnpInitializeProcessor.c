/*
 * XREFs of PnpInitializeProcessor @ 0x1401CCA64
 * Callers:
 *     KeStartDynamicProcessor @ 0x14064FB2C (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL);
  return 0LL;
}
