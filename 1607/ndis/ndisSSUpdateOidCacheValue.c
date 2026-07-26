/*
 * XREFs of ndisSSUpdateOidCacheValue @ 0x1C006C180
 * Callers:
 *     ndisOidPostStatistics @ 0x1C000C340 (ndisOidPostStatistics.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ndisSSGetOidCacheEntry @ 0x1C006BF0C (ndisSSGetOidCacheEntry.c)
 */

void __fastcall ndisSSUpdateOidCacheValue(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  void **v3; // rax
  __int64 v4; // r9
  void **v5; // rbx
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax

  v1 = a1[4];
  v2 = *a1;
  v3 = (void **)ndisSSGetOidCacheEntry(*(_QWORD *)(*a1 + 4512), *(_DWORD *)(v1 + 32));
  v5 = v3;
  if ( v3 )
  {
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v4 + 40);
    *((_BYTE *)v3 + 20) = 0;
    if ( !*(_DWORD *)(v4 + 40) )
    {
      v6 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)(v1 + 48) >= v6 )
      {
        if ( v5[1]
          || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x7373444Eu), (v5[1] = PoolWithTag) != 0LL) )
        {
          memmove(v5[1], *(const void **)(v1 + 40), *((unsigned int *)v5 + 1));
          *((_BYTE *)v5 + 20) = 1;
        }
        else if ( (unsigned __int8)byte_1C00895D6 >= 2u )
        {
          WPP_SF_q(0x26u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v2);
        }
      }
    }
  }
}
