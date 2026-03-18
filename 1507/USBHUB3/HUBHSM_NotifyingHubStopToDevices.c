/*
 * XREFs of HUBHSM_NotifyingHubStopToDevices @ 0x1C0006F80
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000C9D4 (HUBMUX_QueuePowerDownEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToDevices(__int64 a1)
{
  HUBMUX_QueuePowerDownEventToDSMs(*(_QWORD *)(a1 + 960), 4022LL);
  return 1000LL;
}
