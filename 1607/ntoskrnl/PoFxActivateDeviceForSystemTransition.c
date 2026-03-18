/*
 * XREFs of PoFxActivateDeviceForSystemTransition @ 0x14011450C
 * Callers:
 *     PopNotifyDevice @ 0x1403CF498 (PopNotifyDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall PoFxActivateDeviceForSystemTransition(__int64 a1)
{
  PopFxActivateDevice(a1, 1);
}
