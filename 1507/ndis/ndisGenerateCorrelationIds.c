/*
 * XREFs of ndisGenerateCorrelationIds @ 0x1C0047F70
 * Callers:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0 (ndisGenerateNetBufferListCorrelationIds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisGenerateCorrelationIds(unsigned int a1)
{
  unsigned int v1; // r8d

  v1 = _InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  if ( v1 + a1 < v1 || v1 + a1 < (unsigned __int64)v1 )
    return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)&ndisCorrelationCounter, a1);
  return v1;
}
