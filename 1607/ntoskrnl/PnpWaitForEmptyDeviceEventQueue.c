/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x140550688
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
