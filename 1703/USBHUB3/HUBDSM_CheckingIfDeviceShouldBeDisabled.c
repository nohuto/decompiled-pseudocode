/*
 * XREFs of HUBDSM_CheckingIfDeviceShouldBeDisabled @ 0x1C00186F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfDeviceShouldBeDisabled(__int64 a1)
{
  return HUBMISC_CheckIfDeviceShouldBeDisabledOnRemove(*(_QWORD *)(a1 + 960));
}
