/*
 * XREFs of ExReleaseRundownProtectionCacheAware @ 0x140091FB0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 */

void __stdcall ExReleaseRundownProtectionCacheAware(PEX_RUNDOWN_REF_CACHE_AWARE RunRefCacheAware)
{
  signed __int64 *v1; // rdx
  signed __int64 v2; // r8
  unsigned __int64 v3; // r8

  v1 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                        + RunRefCacheAware->RunRefSize * (KeGetPcr()->Prcb.Number % RunRefCacheAware->Number));
  _m_prefetchw(v1);
  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *v1;
      if ( (*v1 & 1) != 0 )
        break;
      if ( v2 == _InterlockedCompareExchange64(v1, v2 - 2, v2) )
        return;
    }
    if ( v2 != 1 )
      break;
    v1 = (signed __int64 *)((char *)RunRefCacheAware->RunRefs
                          + RunRefCacheAware->RunRefSize * (0 % RunRefCacheAware->Number));
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    KeSetEvent((PRKEVENT)(v3 + 8), 0, 0);
}
