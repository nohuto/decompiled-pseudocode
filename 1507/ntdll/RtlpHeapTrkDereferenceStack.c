/*
 * XREFs of RtlpHeapTrkDereferenceStack @ 0x1800E1304
 * Callers:
 *     RtlpHeapTrkTrackRemove @ 0x1800E1E38 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800E1F24 (RtlpHeapTrkTrackRemoveHeap.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
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
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8LL * (_QWORD)v6), v6, a3, a4);
  if ( (*(_DWORD *)(a1 + 20))-- == 1 )
  {
    v8 = *(_QWORD *)a1;
    v9 = *(_QWORD **)(a1 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a1 + 8LL) != a1 || *v9 != a1 )
      __fastfail(3u);
    *v9 = v8;
    v5 = 1;
    *(_QWORD *)(v8 + 8) = v9;
    _InterlockedDecrement(&dword_1801485E8);
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_1801486A0 + 8LL * (_QWORD)v6));
  if ( v5 )
    return RtlFreeHeap(qword_1801486F8, 0, a1);
  return result;
}
