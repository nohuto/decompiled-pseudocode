/*
 * XREFs of PinWaitForStarvation @ 0x1C0001FC8
 * Callers:
 *     USBHwDataPipeReset @ 0x1C001C4AC (USBHwDataPipeReset.c)
 *     USBMidiOutStateChangePin @ 0x1C0021A00 (USBMidiOutStateChangePin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PinWaitForStarvation(__int64 a1)
{
  return PinWaitForStarvationTimeout(a1, 0LL);
}
