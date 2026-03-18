/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x140522A58
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
