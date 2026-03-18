/*
 * XREFs of PoUnblockConsoleSwitch @ 0x1405699AC
 * Callers:
 *     PoPowerOffMonitor @ 0x14014C668 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 * Callees:
 *     PopDispatchStateCallout @ 0x14055E27C (PopDispatchStateCallout.c)
 */

__int64 __fastcall PoUnblockConsoleSwitch(_DWORD *a1, int a2)
{
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  a1[4] = 7;
  return PopDispatchStateCallout(a1, (__int64)&v3);
}
