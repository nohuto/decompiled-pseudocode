/*
 * XREFs of TppPoolpFree @ 0x18007F6E8
 * Callers:
 *     TpUnreserveTaskPost @ 0x180008A0C (TpUnreserveTaskPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x18000CAAC (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 *     TpTrimPools @ 0x180067D30 (TpTrimPools.c)
 *     TpReleasePool @ 0x18007F4C0 (TpReleasePool.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     TppDestroyTimerSubQueue @ 0x18007F7F8 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 */

__int64 __fastcall TppPoolpFree(unsigned __int64 a1)
{
  void *v2; // rcx
  char *v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r8
  _QWORD *v7; // rdx

  v2 = *(void **)(a1 + 56);
  if ( v2 )
  {
    NtClose(v2);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  TppDestroyTimerSubQueue(a1 + 120);
  TppDestroyTimerSubQueue(a1 + 240);
  NtClose(*(HANDLE *)(a1 + 64));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 16));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 40));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *(_QWORD *)(a1 + 48));
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpListLock, v3, v4, v5);
  v6 = *(_QWORD *)(a1 + 384);
  v7 = *(_QWORD **)(a1 + 392);
  if ( *(_QWORD *)(v6 + 8) != a1 + 384 || *v7 != a1 + 384 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, a1);
}
