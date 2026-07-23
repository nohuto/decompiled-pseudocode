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

__int64 __fastcall RtlProcessFlsData(_QWORD *a1)
{
  struct _PEB *v1; // rsi
  struct _TEB *v3; // rdi
  _LIST_ENTRY *Heap; // rax
  _LIST_ENTRY *v5; // rbx
  _LIST_ENTRY *Blink; // rcx
  unsigned int FlsHighIndex; // ebp
  unsigned int i; // edi
  _QWORD *v10; // r15
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // r14
  void (__fastcall *v14)(_QWORD); // r13

  v1 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v1->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v10 = &a1[i];
      if ( v10[2] )
      {
        v13 = 16LL * i;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)((char *)v1->FlsCallback + v13 + 8));
        v14 = *(void (__fastcall **)(_QWORD))((char *)v1->FlsCallback + v13);
        if ( v14 && v10[2] )
        {
          v14(v10[2]);
          v10[2] = 0LL;
        }
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)((char *)v1->FlsCallback + v13 + 8));
      }
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    v11 = *a1;
    v12 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v12 != a1 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    goto LABEL_5;
  }
  v3 = NtCurrentTeb();
  Heap = (_LIST_ENTRY *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (NtdllBaseTag + 2883584) | 8, 0x410uLL);
  v5 = Heap;
  if ( Heap )
  {
    v3->FlsData = Heap;
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    Blink = v1->FlsListHead.Blink;
    v5->Flink = &v1->FlsListHead;
    v5->Blink = Blink;
    if ( Blink->Flink != &v1->FlsListHead )
      __fastfail(3u);
    Blink->Flink = v5;
    v1->FlsListHead.Blink = v5;
LABEL_5:
    RtlReleaseSRWLockExclusive(&RtlpFlsLock);
    return 0LL;
  }
  return 3221225495LL;
}
