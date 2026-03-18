/*
 * XREFs of VerifierExAllocateCacheAwareRundownProtection @ 0x1406CE140
 * Callers:
 *     <none>
 * Callees:
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
 */

PEX_RUNDOWN_REF_CACHE_AWARE __fastcall VerifierExAllocateCacheAwareRundownProtection(__int32 PoolType, ULONG PoolTag)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfCheckPoolType(PoolType, retaddr, PoolTag);
  return pXdvExAllocateCacheAwareRundownProtection((POOL_TYPE)PoolType, PoolTag);
}
