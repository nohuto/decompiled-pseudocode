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

void __fastcall RtlpHeapTrkDereferenceStack(_QWORD *BaseAddress)
{
  char v2; // di
  __int64 v3; // rsi
  _QWORD *v5; // rcx
  PVOID *v6; // rax

  v2 = 0;
  v3 = *((unsigned __int16 *)BaseAddress + 9) % 16;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
  if ( (*((_DWORD *)BaseAddress + 5))-- == 1 )
  {
    v5 = (_QWORD *)*BaseAddress;
    v6 = (PVOID *)BaseAddress[1];
    if ( *(_QWORD **)(*BaseAddress + 8LL) != BaseAddress || *v6 != BaseAddress )
      __fastfail(3u);
    *v6 = v5;
    v2 = 1;
    v5[1] = v6;
    _InterlockedDecrement(&dword_180145FB4);
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146360 + 8 * v3));
  if ( v2 )
    RtlFreeHeap(HeapHandle, 0, BaseAddress);
}
