/*
 * XREFs of ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted @ 0x1C00391E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeReconfiguredOnResetWhenNotHalted(__int64 a1)
{
  return Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted(*(_QWORD *)(a1 + 960));
}
