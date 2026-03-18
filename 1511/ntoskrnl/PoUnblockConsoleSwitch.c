/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1404F551C
 * Callers:
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x1404C427C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
