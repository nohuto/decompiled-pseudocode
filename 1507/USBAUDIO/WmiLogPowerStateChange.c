/*
 * XREFs of WmiLogPowerStateChange @ 0x1C00024BC
 * Callers:
 *     DeviceSetPowerState @ 0x1C0014650 (DeviceSetPowerState.c)
 * Callees:
 *     WmiLogEvent @ 0x1C00022D8 (WmiLogEvent.c)
 */

NTSTATUS __fastcall WmiLogPowerStateChange(int a1, int a2, int a3, int a4)
{
  __int128 v5; // [rsp+40h] [rbp-18h] BYREF

  v5 = ExBus_PowerState_GUID;
  return WmiLogEvent(a3 + 96, &v5, a1, a2, a3, a4);
}
