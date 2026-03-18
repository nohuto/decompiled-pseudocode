/*
 * XREFs of HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x1C0007C00
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000D3E8 (HUBMUX_QueuePowerUpEventToDSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForDevicesToAcquireReferenceOnStart(__int64 a1)
{
  HUBMUX_QueuePowerUpEventToDSMs(*(_QWORD *)(a1 + 960), 4018LL);
  return 1000LL;
}
