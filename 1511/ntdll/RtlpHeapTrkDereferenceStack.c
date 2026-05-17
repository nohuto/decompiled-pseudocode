/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x180085324
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x18008523C (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E71A0 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHeapTrkDereferenceStack(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char *v6; // rsi
  signed __int64 result; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rax

  v5 = 0;
  v6 = (char *)(*(unsigned __int16 *)(a1 + 18) % 16);
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180146360 + 8LL * (_QWORD)v6), v6, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v9 = *(_QWORD *)a1;
    v10 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v10 != a1 )
      __fastfail(3u);
    *v10 = v9;
    v5 = 1;
    *(_QWORD *)(v9 + 8) = v10;
    _InterlockedDecrement(&dword_180145FB4);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180146360 + 8LL * (_QWORD)v6));
  if ( v5 )
    return RtlFreeHeap(qword_1801463C0, 0, a1);
  return result;
}
