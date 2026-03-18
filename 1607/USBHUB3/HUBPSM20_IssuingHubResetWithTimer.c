/*
 * XREFs of HUBPSM20_IssuingHubResetWithTimer @ 0x1C000DDF0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMUX_CheckAndQueueIfResetHubIsEnabled @ 0x1C000CF94 (HUBMUX_CheckAndQueueIfResetHubIsEnabled.c)
 */

__int64 __fastcall HUBPSM20_IssuingHubResetWithTimer(__int64 a1)
{
  HUBMUX_CheckAndQueueIfResetHubIsEnabled(**(_QWORD **)(a1 + 960));
  return 3013LL;
}
