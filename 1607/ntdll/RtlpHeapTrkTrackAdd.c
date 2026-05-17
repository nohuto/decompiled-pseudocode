/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x18008ECDC
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x180090FB0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHeapTrkTrackStack @ 0x18008EDAC (RtlpHeapTrkTrackStack.c)
 *     RtlpHeapTrkHash @ 0x18008F088 (RtlpHeapTrkHash.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  unsigned int v6; // ebp
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rax

  result = RtlAllocateHeap(qword_1801530C0, 0, 0x28uLL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v11 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180153460 + 8 * v11), v8, v9, v10);
      v12 = qword_1801530F0 + 16LL * v6;
      v13 = *(_QWORD *)v12;
      if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) != v12 )
        __fastfail(3u);
      *v5 = v13;
      v5[1] = v12;
      *(_QWORD *)(v13 + 8) = v5;
      *(_QWORD *)v12 = v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153460 + 8 * v11));
    }
    else
    {
      return RtlFreeHeap(qword_1801530C0, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
