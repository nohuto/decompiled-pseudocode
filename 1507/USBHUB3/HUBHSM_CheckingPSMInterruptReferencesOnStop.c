/*
 * XREFs of HUBHSM_CheckingPSMInterruptReferencesOnStop @ 0x1C0006C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHSM_CheckingPSMInterruptReferencesOnStop(__int64 a1)
{
  return HUBMUX_CheckIfAllPSMInterruptReferencesAreReleased(*(_QWORD *)(a1 + 960));
}
