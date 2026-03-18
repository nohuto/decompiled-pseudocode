/*
 * XREFs of PnpInitializeProcessor @ 0x1401BE5E8
 * Callers:
 *     KeStartDynamicProcessor @ 0x14061A814 (KeStartDynamicProcessor.c)
 * Callees:
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 */

__int64 PnpInitializeProcessor()
{
  PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 6, 0, 1LL, 0LL, 0LL);
  return 0LL;
}
