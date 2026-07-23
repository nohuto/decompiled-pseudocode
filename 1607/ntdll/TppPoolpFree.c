/*
 * XREFs of TppPoolpFree @ 0x180083BA8
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TpUnreserveTaskPost @ 0x18003A14C (TpUnreserveTaskPost.c)
 *     TppCleanupGroupMemberDestroy @ 0x18003B5E0 (TppCleanupGroupMemberDestroy.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     TpReleasePool @ 0x180083990 (TpReleasePool.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     TppDestroyTimerSubQueue @ 0x180083CB8 (TppDestroyTimerSubQueue.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

LOGICAL __fastcall TppPoolpFree(char *BaseAddress)
{
  void *v2; // rcx
  char **v3; // r8
  PVOID *v4; // rdx

  v2 = (void *)*((_QWORD *)BaseAddress + 7);
  if ( v2 )
  {
    NtClose(v2);
    *((_QWORD *)BaseAddress + 7) = 0LL;
  }
  TppDestroyTimerSubQueue(BaseAddress + 120);
  TppDestroyTimerSubQueue(BaseAddress + 240);
  NtClose(*((HANDLE *)BaseAddress + 8));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 2));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 5));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, *((PVOID *)BaseAddress + 6));
  RtlAcquireSRWLockExclusive(&TppPoolpListLock);
  v3 = (char **)*((_QWORD *)BaseAddress + 48);
  v4 = (PVOID *)*((_QWORD *)BaseAddress + 49);
  if ( v3[1] != BaseAddress + 384 || *v4 != BaseAddress + 384 )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = (char *)v4;
  RtlReleaseSRWLockExclusive(&TppPoolpListLock);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, BaseAddress);
}
