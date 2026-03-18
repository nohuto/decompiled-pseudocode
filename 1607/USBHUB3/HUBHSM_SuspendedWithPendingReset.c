/*
 * XREFs of HUBHSM_SuspendedWithPendingReset @ 0x1C0007CC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBFDO_AcquireWdfPowerReference @ 0x1C000B088 (HUBFDO_AcquireWdfPowerReference.c)
 */

__int64 __fastcall HUBHSM_SuspendedWithPendingReset(__int64 a1)
{
  HUBFDO_AcquireWdfPowerReference(*(_QWORD *)(a1 + 960));
  return 1000LL;
}
