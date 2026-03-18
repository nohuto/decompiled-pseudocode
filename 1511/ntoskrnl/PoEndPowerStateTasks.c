/*
 * XREFs of PoEndPowerStateTasks @ 0x1404F553C
 * Callers:
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PnprWakeDevices @ 0x1403B0D18 (PnprWakeDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoEndPowerStateTasks(_DWORD *a1)
{
  a1[4] = 8;
  return PopDispatchStateCallout(a1, 0LL);
}
