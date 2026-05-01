/*
 * XREFs of RmpClientWnfSubscriptionWorker @ 0x180001130
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x1800095E0 (memcpy_0.c)
 *     RmpClientTraceWnfMessageDropped @ 0x18000EB84 (RmpClientTraceWnfMessageDropped.c)
 */

__int64 __fastcall RmpClientWnfSubscriptionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Src,
        size_t Size)
{
  signed __int32 v7; // ebp
  _QWORD *Heap; // rax
  _QWORD *v9; // rdi
  _QWORD *v10; // rcx

  if ( !Src )
    return 0LL;
  v7 = _InterlockedExchangeAdd(&RmpClientWnfMessagesReceived, 1u);
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(Size + 20));
  v9 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = Size;
    memcpy_0((char *)Heap + 20, Src, (unsigned int)Size);
    RtlAcquireSRWLockExclusive(a4 + 32);
    v10 = *(_QWORD **)(a4 + 24);
    *v9 = a4 + 16;
    v9[1] = v10;
    if ( *v10 != a4 + 16 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(a4 + 24) = v9;
    if ( !*(_BYTE *)(a4 + 80) )
    {
      TpPostWork(*(_QWORD *)(a4 + 72));
      *(_BYTE *)(a4 + 80) = 1;
    }
    RtlReleaseSRWLockExclusive(a4 + 32);
    return 0LL;
  }
  RmpClientTraceWnfMessageDropped(
    (unsigned int)(v7 + 1),
    (unsigned int)_InterlockedIncrement(&RmpClientWnfMessagesDropped));
  return 3221225495LL;
}
