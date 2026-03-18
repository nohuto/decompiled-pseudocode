/*
 * XREFs of HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1C0007530
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000D49C (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_NotifyingHubResumeInS0ToDevices(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToDSMs(*(_QWORD *)(a1 + 960), 4010LL);
  return 1000LL;
}
