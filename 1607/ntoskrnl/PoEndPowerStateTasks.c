/*
 * XREFs of PoEndPowerStateTasks @ 0x140534464
 * Callers:
 *     PoPowerOffMonitor @ 0x140126794 (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1403DCE3C (PnprWakeDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
