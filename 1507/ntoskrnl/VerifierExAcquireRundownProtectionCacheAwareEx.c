/*
 * XREFs of VerifierExAcquireRundownProtectionCacheAwareEx @ 0x140741B4C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierExAcquireRundownProtectionCacheAwareEx(
        PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware,
        ULONG Count)
{
  return pXdvExAcquireRundownProtectionCacheAwareEx(RunRefCacheAware, Count);
}
