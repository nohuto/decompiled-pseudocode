/*
 * XREFs of PoStartPowerStateTasks @ 0x1405699DC
 * Callers:
 *     PoPowerOffMonitor @ 0x14014C668 (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1404008A4 (PnprQuiesceDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
