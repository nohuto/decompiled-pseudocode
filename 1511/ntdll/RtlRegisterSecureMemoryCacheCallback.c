/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800E4080
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     NtQuerySystemInformation @ 0x1800A5780 (NtQuerySystemInformation.c)
 */

NTSTATUS __cdecl RtlRegisterSecureMemoryCacheCallback(PRTL_SECURE_MEMORY_CACHE_CALLBACK Callback)
{
  NTSTATUS result; // eax
  _DWORD *Heap; // rax
  _DWORD *v4; // rbx
  PVOID **v5; // rax

  result = NtQuerySystemInformation(SystemRangeStartInformation, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v4 = Heap;
    if ( Heap )
    {
      Heap[4] = 1;
      *((_QWORD *)Heap + 3) = Callback;
      RtlAcquireSRWLockExclusive(&RtlpSecMemLock);
      v5 = (PVOID **)off_180142DA0;
      *(_QWORD *)v4 = &RtlpSecMemListHead;
      *((_QWORD *)v4 + 1) = v5;
      if ( *v5 != &RtlpSecMemListHead )
        __fastfail(3u);
      *v5 = (PVOID *)v4;
      off_180142DA0 = (_UNKNOWN **)v4;
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
