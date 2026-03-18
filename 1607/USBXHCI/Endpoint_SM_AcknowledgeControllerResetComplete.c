/*
 * XREFs of Endpoint_SM_AcknowledgeControllerResetComplete @ 0x1C002397C
 * Callers:
 *     ESM_AcknowledgingControllerResetCompleteInDisabled @ 0x1C003A6B0 (ESM_AcknowledgingControllerResetCompleteInDisabled.c)
 * Callees:
 *     <none>
 */

LONG __fastcall Endpoint_SM_AcknowledgeControllerResetComplete(__int64 a1)
{
  LONG result; // eax
  LONG v2; // ett

  _m_prefetchw((const void *)(a1 + 32));
  result = *(_DWORD *)(a1 + 32);
  do
  {
    v2 = result;
    result = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), result ^ 0x80, result);
  }
  while ( v2 != result );
  if ( (result & 0x80u) != 0 )
    return KeSetEvent((PRKEVENT)(a1 + 40), 0, 0);
  return result;
}
