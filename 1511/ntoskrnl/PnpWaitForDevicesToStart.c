/*
 * XREFs of PnpWaitForDevicesToStart @ 0x140750D00
 * Callers:
 *     IopInitializeSystemDrivers @ 0x1407513D4 (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140522A7C (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
