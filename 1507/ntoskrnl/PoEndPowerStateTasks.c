/*
 * XREFs of PoEndPowerStateTasks @ 0x1405699CC
 * Callers:
 *     PoPowerOffMonitor @ 0x14014C668 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1404013F4 (PnprWakeDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
