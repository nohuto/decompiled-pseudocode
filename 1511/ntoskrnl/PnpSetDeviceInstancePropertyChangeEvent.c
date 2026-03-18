/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x1401303C8
 * Callers:
 *     PnpSetDevicePropertyData @ 0x14051C830 (PnpSetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
