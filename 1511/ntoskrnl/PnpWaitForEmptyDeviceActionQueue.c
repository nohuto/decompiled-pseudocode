/*
 * XREFs of PnpWaitForEmptyDeviceActionQueue @ 0x140522A7C
 * Callers:
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PnpWaitForDevicesToStart @ 0x140750D00 (PnpWaitForDevicesToStart.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407510A0 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

NTSTATUS PnpWaitForEmptyDeviceActionQueue()
{
  return KeWaitForSingleObject(&PnpEnumerationLock, Executive, 0, 0, 0LL);
}
