/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x1401489D8
 * Callers:
 *     PopNotifyDevice @ 0x1403EEB1C (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

LONG __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1)
{
  return PopFxActivateDevice(a1, 1);
}
