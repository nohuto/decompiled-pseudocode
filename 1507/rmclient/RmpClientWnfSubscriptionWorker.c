/*
 * XREFs of RmpClientWnfSubscriptionWorker @ 0x18000E880
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_0 @ 0x180008DEC (memcpy_0.c)
 *     RmpClientTraceWnfMessageDropped @ 0x18000E164 (RmpClientTraceWnfMessageDropped.c)
 */

__int64 __fastcall RmpClientWnfSubscriptionWorker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void *Src,
        size_t Size)
{
  unsigned int v6; // ebx
  signed __int32 v8; // ebp
  _QWORD *Heap; // rax
  const GUID *v10; // r8
  _QWORD *v11; // rsi
  _QWORD *v12; // rcx

  v6 = 0;
  if ( Src )
  {
    v8 = _InterlockedExchangeAdd(&RmpClientWnfMessagesReceived, 1u);
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned int)(Size + 20));
    v11 = Heap;
    if ( Heap )
    {
      *((_DWORD *)Heap + 4) = Size;
      memcpy_0((char *)Heap + 20, Src, (unsigned int)Size);
      RtlAcquireSRWLockExclusive(a4 + 32);
      v12 = *(_QWORD **)(a4 + 24);
      *v11 = a4 + 16;
      v11[1] = v12;
      if ( *v12 != a4 + 16 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(a4 + 24) = v11;
      if ( !*(_BYTE *)(a4 + 80) )
      {
        TpPostWork(*(_QWORD *)(a4 + 72));
        *(_BYTE *)(a4 + 80) = 1;
      }
      RtlReleaseSRWLockExclusive(a4 + 32);
    }
    else
    {
      RmpClientTraceWnfMessageDropped(v8 + 1, _InterlockedIncrement(&RmpClientWnfMessagesDropped), v10);
      return (unsigned int)-1073741801;
    }
  }
  return v6;
}
