/*
 * XREFs of ndisSSGetOidCacheEntry @ 0x1C006BF0C
 * Callers:
 *     ndisSSUpdateOidCacheValue @ 0x1C006C180 (ndisSSUpdateOidCacheValue.c)
 *     ndisSSGetCachedOidValue @ 0x1C00DC3B4 (ndisSSGetCachedOidValue.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ndisSSGetOidCacheEntry(__int64 a1, int a2)
{
  _DWORD *v2; // r8
  __int64 v3; // rax
  _DWORD *i; // rcx

  v2 = *(_DWORD **)(a1 + 600);
  v3 = 0LL;
  for ( i = v2; *i != a2; i += 6 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 5 )
      return 0LL;
  }
  return &v2[6 * v3];
}
