/*
 * XREFs of HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach @ 0x1C001BD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfEndpointsToBeDisabledOnDetach(__int64 a1)
{
  return HUBUCX_CheckIfEndpointsNeedToBeDisabledOnConfigFailure(*(_QWORD *)(a1 + 960));
}
