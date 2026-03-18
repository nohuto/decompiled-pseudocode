/*
 * XREFs of PnpSetDeviceInstancePropertyChangeEvent @ 0x14015FDC0
 * Callers:
 *     PnpSetDevicePropertyData @ 0x140597994 (PnpSetDevicePropertyData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstancePropertyChangeEvent(__int64 a1)
{
  return PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance(a1 + 40);
}
