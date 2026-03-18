/*
 * XREFs of PnpInitializeProcessor @ 0x1401F9E50
 * Callers:
 *     KeStartDynamicProcessor @ 0x140698E60 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL);
  return 0LL;
}
