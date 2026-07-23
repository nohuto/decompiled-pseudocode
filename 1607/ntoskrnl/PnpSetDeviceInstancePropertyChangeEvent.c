/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14013918C
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14054D73C (PnpSetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
