/*
 * XREFs of HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum @ 0x1C00177E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_ClearingDeviceProgrammingLostFlagOnEnum(__int64 a1)
{
  return HUBMISC_CheckIfDeviceProgrammingWasLost(*(_QWORD *)(a1 + 960));
}
