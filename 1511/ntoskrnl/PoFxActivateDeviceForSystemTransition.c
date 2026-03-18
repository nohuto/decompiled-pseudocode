/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14011A37C
 * Callers:
 *     PopNotifyDevice @ 0x1403A51FC (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1)
{
  PopFxActivateDevice(a1, 1);
}
