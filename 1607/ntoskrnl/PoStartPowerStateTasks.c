/*
 * XREFs of PoStartPowerStateTasks @ 0x1405349B4
 * Callers:
 *     PoPowerOffMonitor @ 0x140126D04 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1403DC3D4 (PnprQuiesceDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
