/*
 * XREFs of PnpWaitForDevicesToStart @ 0x14079AA9C
 * Callers:
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 * Callees:
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405506AC (PnpWaitForEmptyDeviceActionQueue.c)
 */

_BOOL8 PnpWaitForDevicesToStart()
{
  return PnpWaitForEmptyDeviceActionQueue() >= 0;
}
