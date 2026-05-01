/*
 * XREFs of RmDisconnectFromResourceManager @ 0x18000DFB0
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientDisconnectContextHandle @ 0x18000E474 (RmpClientDisconnectContextHandle.c)
 *     RmpClientWnfDestroySubscription @ 0x18000E6A4 (RmpClientWnfDestroySubscription.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rdx

  RmpClientWnfDestroySubscription(a1 + 3);
  RmpClientDisconnectContextHandle(a1[2]);
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v1 = *a1;
  v2 = (_QWORD *)a1[1];
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v2 != a1 )
    __fastfail(3u);
  *v2 = v1;
  *(_QWORD *)(v1 + 8) = v2;
  RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
  return 0LL;
}
