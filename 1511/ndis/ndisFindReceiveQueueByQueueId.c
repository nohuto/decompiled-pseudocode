/*
 * XREFs of ndisFindReceiveQueueByQueueId @ 0x1C0038E88
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C0022AA0 (NdisAllocateSharedMemory.c)
 *     ndisFreeReceiveQueue @ 0x1C0038EB4 (ndisFreeReceiveQueue.c)
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C0038FA0 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPreRcvFilterEnumFilters @ 0x1C0039600 (ndisOidPreRcvFilterEnumFilters.c)
 *     ndisOidPreRcvFilterFreeQueue @ 0x1C0039B60 (ndisOidPreRcvFilterFreeQueue.c)
 *     ndisOidPreRcvFilterQueueParameters @ 0x1C003A050 (ndisOidPreRcvFilterQueueParameters.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisUpdateRcvFilterQueueParameters @ 0x1C003A8A8 (ndisUpdateRcvFilterQueueParameters.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall ndisFindReceiveQueueByQueueId(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r9
  __int64 v3; // r8
  __int64 *i; // rax
  unsigned int v5; // ecx

  v2 = (__int64 *)(a1 + 3512);
  v3 = 0LL;
  for ( i = *(__int64 **)(a1 + 3512); i != v2; i = (__int64 *)*i )
  {
    v5 = *((_DWORD *)i + 12);
    if ( v5 == a2 )
      return i;
    if ( v5 > a2 )
      return (__int64 *)v3;
  }
  return (__int64 *)v3;
}
