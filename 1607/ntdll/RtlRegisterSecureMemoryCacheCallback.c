/*
 * XREFs of RtlRegisterSecureMemoryCacheCallback @ 0x1800ED200
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     NtQuerySystemInformation @ 0x1800A6AE0 (NtQuerySystemInformation.c)
 */

NTSTATUS __fastcall RtlRegisterSecureMemoryCacheCallback(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Heap; // rax
  char *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 *v8; // rax

  result = NtQuerySystemInformation((SYSTEM_INFORMATION_CLASS)50, &RtlSecureMemorySystemRangeStart, 8u, 0LL);
  if ( result >= 0 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x20uLL);
    v7 = Heap;
    if ( Heap )
    {
      *(_DWORD *)(Heap + 16) = 1;
      *(_QWORD *)(Heap + 24) = a1;
      RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpSecMemLock, v4, v5, v6);
      v8 = (__int64 *)off_18014C9D8;
      if ( *off_18014C9D8 != (_UNKNOWN *)&RtlpSecMemListHead )
        __fastfail(3u);
      *(_QWORD *)v7 = &RtlpSecMemListHead;
      *(_QWORD *)(v7 + 8) = v8;
      *v8 = v7;
      off_18014C9D8 = (_UNKNOWN **)v7;
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
