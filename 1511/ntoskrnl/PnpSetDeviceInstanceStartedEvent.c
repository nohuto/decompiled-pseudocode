/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1401076DC
 * Callers:
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance((unsigned __int16 *)(a1 + 40));
}
