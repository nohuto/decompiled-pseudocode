/*
 * XREFs of PnpSetDeviceInstanceStartedEvent @ 0x1400B2E6C
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpSetDeviceInstanceStartedEvent(__int64 a1)
{
  return PnpSetDeviceInstanceStartedEventFromDeviceInstance(a1 + 40);
}
