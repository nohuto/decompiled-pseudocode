/*
 * XREFs of HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove @ 0x1C0006FA0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueStopAfterSuspendToAllDSMs @ 0x1C000CBFC (HUBMUX_QueueStopAfterSuspendToAllDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToDevicesOnSuspriseRemove(__int64 a1)
{
  HUBMUX_QueueStopAfterSuspendToAllDSMs(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
