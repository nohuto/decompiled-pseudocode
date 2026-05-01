/*
 * XREFs of RmpClientWnfAddMessage @ 0x18000D134
 * Callers:
 *     RmpClientWnfSubscriptionWorker @ 0x18000D3B0 (RmpClientWnfSubscriptionWorker.c)
 * Callees:
 *     memcpy_0 @ 0x1800066E0 (memcpy_0.c)
 */

__int64 __fastcall RmpClientWnfAddMessage(__int64 a1, unsigned int a2, const void *a3)
{
  size_t v4; // rbp
  _QWORD *Heap; // rax
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx

  v4 = a2;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a2 + 20);
  v7 = 0;
  v8 = Heap;
  if ( Heap )
  {
    *((_DWORD *)Heap + 4) = v4;
    memcpy_0((char *)Heap + 20, a3, v4);
    RtlAcquireSRWLockExclusive(a1 + 32);
    v9 = *(_QWORD **)(a1 + 24);
    if ( *v9 != a1 + 16 )
      __fastfail(3u);
    *v8 = a1 + 16;
    v8[1] = v9;
    *v9 = v8;
    *(_QWORD *)(a1 + 24) = v8;
    if ( !*(_BYTE *)(a1 + 64) )
    {
      TpPostWork(*(_QWORD *)(a1 + 56));
      *(_BYTE *)(a1 + 64) = 1;
    }
    RtlReleaseSRWLockExclusive(a1 + 32);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v7;
}
