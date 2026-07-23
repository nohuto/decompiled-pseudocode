/*
 * XREFs of RtlProcessFlsData @ 0x18005B3E0
 * Callers:
 *     LdrShutdownThread @ 0x180012AA0 (LdrShutdownThread.c)
 *     LdrShutdownProcess @ 0x18005B1A0 (LdrShutdownProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockShared @ 0x1800276F0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x1800277C0 (RtlAcquireSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
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
  __int64 v11; // r14
  void (__fastcall *v12)(_QWORD); // r13
  __int64 v13; // rcx
  _QWORD *v14; // rax

  v1 = NtCurrentPeb();
  if ( a1 )
  {
    FlsHighIndex = v1->FlsHighIndex;
    for ( i = 1; i <= FlsHighIndex; ++i )
    {
      v10 = &a1[i];
      if ( v10[2] )
      {
        v11 = 16LL * i;
        RtlAcquireSRWLockShared((PRTL_SRWLOCK)((char *)v1->FlsCallback + v11 + 8));
        v12 = *(void (__fastcall **)(_QWORD))((char *)v1->FlsCallback + v11);
        if ( v12 && v10[2] )
        {
          v12(v10[2]);
          v10[2] = 0LL;
        }
        RtlReleaseSRWLockShared((PRTL_SRWLOCK)((char *)v1->FlsCallback + v11 + 8));
      }
    }
    RtlAcquireSRWLockExclusive(&RtlpFlsLock);
    v13 = *a1;
    v14 = (_QWORD *)a1[1];
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (_QWORD *)*v14 != a1 )
      __fastfail(3u);
    *v14 = v13;
    *(_QWORD *)(v13 + 8) = v14;
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
