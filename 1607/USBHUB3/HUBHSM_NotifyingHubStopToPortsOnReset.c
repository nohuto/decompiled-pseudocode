/*
 * XREFs of HUBHSM_NotifyingHubStopToPortsOnReset @ 0x1C0007640
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueueStopToAllPSMs @ 0x1C000CB14 (HUBMUX_QueueStopToAllPSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubStopToPortsOnReset(__int64 a1)
{
  HUBMUX_QueueStopToAllPSMs(*(_QWORD *)(a1 + 960));
  return 2053LL;
}
