/*
 * XREFs of ESM_CompletingResetRequestWhenEndpointNotHalted @ 0x1C00392E0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_CompleteResetRequestFromClient @ 0x1C0019CBC (Endpoint_SM_CompleteResetRequestFromClient.c)
 */

__int64 __fastcall ESM_CompletingResetRequestWhenEndpointNotHalted(__int64 a1, int a2, int a3)
{
  Endpoint_SM_CompleteResetRequestFromClient(*(_QWORD *)(a1 + 960), a2, a3);
  return 29LL;
}
