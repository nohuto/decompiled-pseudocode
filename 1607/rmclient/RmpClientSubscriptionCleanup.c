/*
 * XREFs of RmpClientSubscriptionCleanup @ 0x18000A064
 * Callers:
 *     RmpClientConnectionCleanup @ 0x180009B7C (RmpClientConnectionCleanup.c)
 * Callees:
 *     RmpClientCallbackCleanup @ 0x180009D48 (RmpClientCallbackCleanup.c)
 *     RmpClientSubscriptionAcquireLock @ 0x180009E30 (RmpClientSubscriptionAcquireLock.c)
 *     RmpClientWnfDestroySubscription @ 0x18000D200 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall RmpClientSubscriptionCleanup(__int64 a1)
{
  void *v2; // rcx
  void **v3; // rcx
  void *v4; // rbx
  void **i; // rbx
  void *v6; // r8
  void **v8; // rcx

  v2 = *(void **)a1;
  if ( v2 )
    RmpClientWnfDestroySubscription(v2);
  RmpClientSubscriptionAcquireLock(a1);
  v3 = *(void ***)(a1 + 32);
  if ( !v3 || (v4 = *v3, ((unsigned __int8)*v3 & 1) != 0) )
  {
    for ( i = v3 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 32) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
      {
LABEL_21:
        v4 = *i;
        goto LABEL_10;
      }
    }
LABEL_9:
    v4 = 0LL;
  }
LABEL_10:
  while ( v4 )
  {
    RmpClientCallbackCleanup((__int64)v4, a1);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
    v8 = *(void ***)(a1 + 32);
    if ( v8 )
    {
      v4 = *v8;
      if ( ((unsigned __int8)*v8 & 1) == 0 )
        continue;
    }
    for ( i = v8 + 1;
          (unsigned __int64)i < *(_QWORD *)(a1 + 32) + 8 * ((unsigned __int64)*(unsigned int *)(a1 + 28) >> 5);
          ++i )
    {
      if ( (*(_BYTE *)i & 1) == 0 )
        goto LABEL_21;
    }
    goto LABEL_9;
  }
  v6 = *(void **)(a1 + 32);
  if ( v6 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  *(_DWORD *)(a1 + 16) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 8);
}
