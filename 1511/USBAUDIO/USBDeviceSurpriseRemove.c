/*
 * XREFs of USBDeviceSurpriseRemove @ 0x1C001B2D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall USBDeviceSurpriseRemove(__int64 a1)
{
  return USBDeviceStop(a1);
}
