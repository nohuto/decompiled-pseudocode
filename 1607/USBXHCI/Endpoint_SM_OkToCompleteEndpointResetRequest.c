/*
 * XREFs of Endpoint_SM_OkToCompleteEndpointResetRequest @ 0x1C0023A3C
 * Callers:
 *     ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval @ 0x1C003ABD0 (ESM_ReclaimingCanceledTransfersAfterControllerSurpriseRemoval.c)
 *     ESM_WaitingForControllerResetCompletion @ 0x1C003B070 (ESM_WaitingForControllerResetCompletion.c)
 * Callees:
 *     Endpoint_SM_CompleteResetRequestFromClient @ 0x1C00239AC (Endpoint_SM_CompleteResetRequestFromClient.c)
 */

__int64 __fastcall Endpoint_SM_OkToCompleteEndpointResetRequest(__int64 a1)
{
  __int64 result; // rax
  int v2; // edx
  int v3; // ett

  _m_prefetchw((const void *)(a1 + 32));
  LODWORD(result) = *(_DWORD *)(a1 + 32);
  do
  {
    v2 = result ^ 0x100;
    v3 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), result ^ 0x100, result);
  }
  while ( v3 != (_DWORD)result );
  if ( (result & 0x100) != 0 )
    return Endpoint_SM_CompleteResetRequestFromClient(a1, v2, 256);
  return result;
}
