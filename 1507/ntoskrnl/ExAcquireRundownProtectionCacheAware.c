/*
 * XREFs of ExAcquireRundownProtectionCacheAware @ 0x1400D3850
 * Callers:
 *     VerifierExAcquireRundownProtectionCacheAware @ 0x140741B44 (VerifierExAcquireRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall ExAcquireRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  struct _EX_RUNDOWN_REF *v1; // r8
  unsigned __int64 v2; // rtt

  v1 = (struct _EX_RUNDOWN_REF *)(*(_QWORD *)RunRefCacheAware
                                + *((_DWORD *)RunRefCacheAware + 4)
                                * (KeGetCurrentPrcb()->Number % *((_DWORD *)RunRefCacheAware + 5)));
  _m_prefetchw(v1);
  v2 = v1->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 == _InterlockedCompareExchange64((volatile signed __int64 *)v1, v2 + 2, v2) )
    return 1;
  else
    return ExfAcquireRundownProtection(v1);
}
