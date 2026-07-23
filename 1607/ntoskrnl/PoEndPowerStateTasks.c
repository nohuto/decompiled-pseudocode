/*
 * XREFs of PoEndPowerStateTasks @ 0x1405349A4
 * Callers:
 *     PoPowerOffMonitor @ 0x140126D04 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
