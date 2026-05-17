/*
 * XREFs of TppPoolUpdateTrimmedWorker @ 0x180068308
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlWakeConditionVariable @ 0x180068440 (RtlWakeConditionVariable.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 */

__int64 __fastcall TppPoolUpdateTrimmedWorker(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  volatile signed __int64 *v4; // rsi
  __int64 result; // rax
  _QWORD *Heap; // rbx
  _QWORD *v8; // rcx
  unsigned int v9; // edx
  bool v10; // bl
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int64 *)(a1 + 72);
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  if ( (*(_DWORD *)(a1 + 436) & 0xFFE) == 0 )
    return RtlReleaseSRWLockExclusive(v4);
  Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, (TppHeapTag + 786432) | 8u, 24LL);
  if ( !Heap )
    return RtlReleaseSRWLockExclusive(v4);
  if ( (int)ZwDuplicateObject(-1LL, -2LL, -1LL, &v11, 0, 0, 2) < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 786432, (unsigned __int64)Heap);
    return RtlReleaseSRWLockExclusive(v4);
  }
  Heap[2] = v11;
  v8 = *(_QWORD **)(a1 + 456);
  *Heap = a1 + 448;
  Heap[1] = v8;
  if ( *v8 != a1 + 448 )
    __fastfail(3u);
  *v8 = Heap;
  *(_QWORD *)(a1 + 456) = Heap;
  v9 = *(_DWORD *)(a1 + 436) ^ (*(_DWORD *)(a1 + 436) ^ ((*(_DWORD *)(a1 + 436) & 0xFFFFF000) + 4096)) & 0x7FF000;
  *(_DWORD *)(a1 + 436) = v9;
  v10 = (((unsigned __int16)v9 ^ (unsigned __int16)(v9 >> 11)) & 0xFFE) == 0;
  result = RtlReleaseSRWLockExclusive(v4);
  if ( v10 )
    return RtlWakeConditionVariable(a1 + 440);
  return result;
}
