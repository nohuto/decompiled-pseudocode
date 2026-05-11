/*
 * XREFs of WmiLogStreamStateChange @ 0x1C00023AC
 * Callers:
 *     PinSetDeviceState @ 0x1C0015B30 (PinSetDeviceState.c)
 * Callees:
 *     WmiLogEvent @ 0x1C00022D8 (WmiLogEvent.c)
 */

NTSTATUS __fastcall WmiLogStreamStateChange(int a1, char a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  v4 = ExBus_PinState_GUID;
  return WmiLogEvent(a2 + 1, &v4, a1, a3, 0, 0);
}
