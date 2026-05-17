/*
 * XREFs of RtlProcessFlsData @ 0x180044AA0
 * Callers:
 *     LdrShutdownThread @ 0x180021810 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x180044620 (LdrShutdownProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlProcessFlsData(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  struct _PEB *v4; // rsi
  struct _TEB *v6; // rdi
  __int64 Heap; // rax
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _LIST_ENTRY *v11; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v16; // r15
  __int64 v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r14
  void (__fastcall *v20)(_QWORD); // r13

  v4 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v4->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v16 = &a1[i];
      if ( v16[2] )
      {
        v19 = 16LL * i;
        RtlAcquireSRWLockShared((volatile signed __int64 *)((char *)v4->FlsCallback + v19 + 8), a2, a3, a4);
        v20 = *(void (__fastcall **)(_QWORD))((char *)v4->FlsCallback + v19);
        if ( v20 && v16[2] )
        {
          v20(v16[2]);
          v16[2] = 0LL;
        }
        RtlReleaseSRWLockShared((volatile signed __int64 *)((char *)v4->FlsCallback + v19 + 8));
      }
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsLock, a2, a3, a4);
    v17 = *a1;
    v18 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v18 != a1 )
      __fastfail(3u);
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    goto LABEL_5;
  }
  v6 = NtCurrentTeb();
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8u, 1040LL);
  v11 = (_LIST_ENTRY *)Heap;
  if ( Heap )
  {
    v6->FlsData = (void *)Heap;
    RtlAcquireSRWLockExclusive(&RtlpFlsLock, v8, v9, v10);
    Blink = v4->FlsListHead.Blink;
    v11->Flink = &v4->FlsListHead;
    v11->Blink = Blink;
    if ( Blink->Flink != &v4->FlsListHead )
      __fastfail(3u);
    Blink->Flink = v11;
    v4->FlsListHead.Blink = v11;
LABEL_5:
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    return 0LL;
  }
  return 3221225495LL;
}
