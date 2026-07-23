/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x180062DE8
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlWakeConditionVariable @ 0x180062F20 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x1800A6BA0 (ZwDuplicateObject.c)
 */

void __fastcall TppPoolUpdateTrimmedWorker(__int64 a1)
{
  _RTL_SRWLOCK *v1; // rsi
  _QWORD *Heap; // rbx
  _QWORD *v4; // rcx
  unsigned int v5; // edx
  bool v6; // bl
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  v1 = (_RTL_SRWLOCK *)(a1 + 72);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    goto LABEL_2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8, 0x18uLL);
  if ( !Heap )
    goto LABEL_2;
  if ( ZwDuplicateObject(
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         (HANDLE)0xFFFFFFFFFFFFFFFELL,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &TargetHandle,
         0,
         0,
         2u) < 0 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, Heap);
LABEL_2:
    RtlReleaseSRWLockExclusive(v1);
    return;
  }
  Heap[2] = TargetHandle;
  v4 = *(_QWORD **)(a1 + 456);
  if ( *v4 != a1 + 448 )
    __fastfail(3u);
  *Heap = a1 + 448;
  Heap[1] = v4;
  *v4 = Heap;
  *(_QWORD *)(a1 + 456) = Heap;
  v5 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ ((*(_DWORD *)(a1 + 436) & 0xFFFFF000) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v5;
  v6 = (((unsigned __int16)v5 ^ (unsigned __int16)(v5 >> 11)) & 0xFFE) == 0;
  RtlReleaseSRWLockExclusive(v1);
  if ( v6 )
    RtlWakeConditionVariable((PRTL_CONDITION_VARIABLE)(a1 + 440));
}
