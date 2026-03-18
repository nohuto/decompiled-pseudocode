/*
 * XREFs of PnpWaitForEmptyDeviceEventQueue @ 0x14058FA20
 * Callers:
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceEventQueue()
{
  return KeWaitForSingleObject(&PnpEventQueueEmpty, Executive, 0, 0, 0LL);
}
