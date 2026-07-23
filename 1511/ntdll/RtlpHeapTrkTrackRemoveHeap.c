/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800E71A0
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x180094F10 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180085324 (RtlpHeapTrkDereferenceStack.c)
 */

PVOID *__fastcall RtlpHeapTrkTrackRemoveHeap(PVOID *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  PVOID ***v4; // rdx
  PVOID **v5; // rax
  bool v6; // zf
  PVOID ***v7; // rcx
  PVOID **v8; // r9
  PVOID ****v9; // r8
  PVOID **v10; // r8
  _QWORD *v11; // rbx
  PVOID *result; // rax
  _QWORD *v13; // rcx
  PVOID *v14; // rax
  _QWORD *v15; // rcx
  PVOID BaseAddress[3]; // [rsp+20h] [rbp-18h] BYREF

  BaseAddress[1] = BaseAddress;
  v2 = 0;
  BaseAddress[0] = BaseAddress;
  do
  {
    v3 = v2 & 0xF;
    RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146358 + 8 * v3));
    v4 = (PVOID ***)(16LL * v2 + qword_1801463A8);
    v5 = *v4;
    while ( v5 != (PVOID **)v4 )
    {
      v6 = v5[2] == a1;
      v7 = (PVOID ***)v5;
      v5 = (PVOID **)*v5;
      if ( v6 )
      {
        v8 = *v7;
        v9 = (PVOID ****)v7[1];
        if ( (*v7)[1] != (PVOID *)v7 || *v9 != v7 )
          __fastfail(3u);
        *v9 = (PVOID ***)v8;
        v8[1] = (PVOID *)v9;
        v10 = (PVOID **)BaseAddress[0];
        v7[1] = (PVOID **)BaseAddress;
        *v7 = v10;
        if ( v10[1] != BaseAddress )
          __fastfail(3u);
        v10[1] = (PVOID *)v7;
        BaseAddress[0] = v7;
      }
    }
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180146358 + 8 * v3));
    ++v2;
  }
  while ( v2 < 0x1EEF );
  while ( 1 )
  {
    v11 = BaseAddress[0];
    result = BaseAddress;
    if ( BaseAddress[0] == BaseAddress )
      break;
    v13 = *(_QWORD **)BaseAddress[0];
    v14 = (PVOID *)*((_QWORD *)BaseAddress[0] + 1);
    if ( *(PVOID *)(*(_QWORD *)BaseAddress[0] + 8LL) != BaseAddress[0] || *v14 != BaseAddress[0] )
      __fastfail(3u);
    *v14 = v13;
    v13[1] = v14;
    v15 = (_QWORD *)v11[4];
    if ( v15 )
    {
      RtlpHeapTrkDereferenceStack(v15);
      v11[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v11);
  }
  return result;
}
