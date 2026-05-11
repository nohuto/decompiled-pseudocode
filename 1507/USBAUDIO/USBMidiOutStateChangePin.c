/*
 * XREFs of USBMidiOutStateChangePin @ 0x1C0023300
 * Callers:
 *     <none>
 * Callees:
 *     PinWaitForStarvation @ 0x1C00020F8 (PinWaitForStarvation.c)
 */

__int64 __fastcall USBMidiOutStateChangePin(__int64 a1, int a2, int a3)
{
  if ( a3 == 2 && a2 == 3 )
    PinWaitForStarvation(a1);
  return 0LL;
}
