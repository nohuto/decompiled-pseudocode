/*
 * XREFs of RmpClientConnectionCleanup @ 0x180009B7C
 * Callers:
 *     RmDisconnectFromResourceManager @ 0x180009940 (RmDisconnectFromResourceManager.c)
 *     RmpClientConnectToResourceManager @ 0x180009A28 (RmpClientConnectToResourceManager.c)
 * Callees:
 *     RmpClientDisconnectContextHandle @ 0x180009C80 (RmpClientDisconnectContextHandle.c)
 *     RmpClientSubscriptionCleanup @ 0x18000A064 (RmpClientSubscriptionCleanup.c)
 */

__int64 __fastcall RmpClientConnectionCleanup(_QWORD *a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax

  RmpClientSubscriptionCleanup(a1 + 3);
  if ( a1[2] )
    RmpClientDisconnectContextHandle();
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = *a1;
  v3 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v3 != a1 )
    __fastfail(3u);
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
