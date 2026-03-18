/*
 * XREFs of ExReleaseRundownProtectionCacheAware @ 0x140109170
 * Callers:
 *     VerifierExReleaseRundownProtectionCacheAware @ 0x140741C04 (VerifierExReleaseRundownProtectionCacheAware.c)
 * Callees:
 *     <none>
 */

void __stdcall ExReleaseRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  signed __int64 *v2; // r8
  signed __int64 v3; // rcx
  unsigned __int64 v4; // rcx

  v2 = (signed __int64 *)(*(_QWORD *)RunRefCacheAware
                        + *((_DWORD *)RunRefCacheAware + 4)
                        * (KeGetCurrentPrcb()->Number % *((_DWORD *)RunRefCacheAware + 5)));
  _m_prefetchw(v2);
  while ( 1 )
  {
    while ( 1 )
    {
      v3 = *v2;
      if ( (*v2 & 1) != 0 )
        break;
      if ( v3 == _InterlockedCompareExchange64(v2, v3 - 2, v3) )
        return;
    }
    if ( v3 != 1 )
      break;
    v2 = (signed __int64 *)(*(_QWORD *)RunRefCacheAware
                          + *((_DWORD *)RunRefCacheAware + 4) * (0u % *((_DWORD *)RunRefCacheAware + 5)));
  }
  v4 = v3 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    KeSetEvent((PRKEVENT)(v4 + 8), 0, 0);
}
