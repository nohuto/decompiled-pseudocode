/*
 * XREFs of PinWaitForStarvation @ 0x1C000228C
 * Callers:
 *     USBHwDataPipeReset @ 0x1C001D5D8 (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0023380 (USBMidiOutStateChangePin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
