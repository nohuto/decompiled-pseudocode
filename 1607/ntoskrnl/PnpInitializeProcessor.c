/*
 * XREFs of PnpInitializeProcessor @ 0x1401CCB80
 * Callers:
 *     KeStartDynamicProcessor @ 0x14064FA48 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL);
  return 0LL;
}
