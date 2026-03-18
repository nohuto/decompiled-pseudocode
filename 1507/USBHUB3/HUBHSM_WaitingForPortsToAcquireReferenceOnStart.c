/*
 * XREFs of HUBHSM_WaitingForPortsToAcquireReferenceOnStart @ 0x1C0007830
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_QueuePowerUpEventToPSMs @ 0x1C000C430 (HUBMUX_QueuePowerUpEventToPSMs.c)
 */

__int64 __fastcall HUBHSM_WaitingForPortsToAcquireReferenceOnStart(__int64 a1)
{
  __int64 v1; // rdi
  KIRQL v2; // al

  v1 = *(_QWORD *)(a1 + 960);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v1 + 2240));
  _InterlockedOr((volatile signed __int32 *)(v1 + 2272), 4u);
  KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 2240), v2);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 2272), 0xFFFFFFEF);
  HUBMUX_QueuePowerUpEventToPSMs(v1, 3026LL);
  return 1000LL;
}
