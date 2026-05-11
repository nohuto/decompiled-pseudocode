/*
 * XREFs of WmiLogStreamStateChange @ 0x1C000216C
 * Callers:
 *     PinSetDeviceState @ 0x1C0014B10 (PinSetDeviceState.c)
 * Callees:
 *     WmiLogEvent @ 0x1C0002098 (WmiLogEvent.c)
 */

NTSTATUS __fastcall WmiLogStreamStateChange(int a1, char a2, int a3)
{
  __int128 v4; // [rsp+40h] [rbp-18h] BYREF

  v4 = ExBus_PinState_GUID;
  return WmiLogEvent(a2 + 1, &v4, a1, a3, 0, 0);
}
