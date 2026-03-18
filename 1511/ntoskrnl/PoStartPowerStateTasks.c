/*
 * XREFs of PoStartPowerStateTasks @ 0x1404F554C
 * Callers:
 *     PoPowerOffMonitor @ 0x1401177BC (PoPowerOffMonitor.c)
 *     PnprQuiesceDevices @ 0x1403B02B8 (PnprQuiesceDevices.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PoStartPowerStateTasks(_DWORD *a1)
{
  a1[4] = 1;
  return PopDispatchStateCallout(a1, 0LL);
}
