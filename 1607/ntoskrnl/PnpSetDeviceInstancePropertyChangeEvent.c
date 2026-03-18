/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x140138C1C
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14054D39C (PnpSetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
