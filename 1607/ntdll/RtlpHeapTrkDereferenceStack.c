/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x18008F130
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18008EF98 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F0380 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char *v6; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  signed __int64 result; // rax

  v5 = 0;
  v6 = (char *)(*(unsigned __int16 *)(a1 + 18) % 16);
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180153468 + 8LL * (_QWORD)v6), v6, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v9 != a1 )
      __fastfail(3u);
    *v9 = v8;
    v5 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_1801530F8);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153468 + 8LL * (_QWORD)v6));
  if ( v5 )
    return RtlFreeHeap(qword_1801530C0, 0, a1);
  return result;
}
