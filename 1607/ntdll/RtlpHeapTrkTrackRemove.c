/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18008EF88
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x180090FA0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C540 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x18008F078 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F120 (RtlpHeapTrkDereferenceStack.c)
 */

void __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  _QWORD **v9; // rcx
  _QWORD *i; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  void *v13; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153468 + 8 * v7));
  v9 = (_QWORD **)(16 * v8 + qword_1801530F0);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v4 = i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v11 = *i;
      v12 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v12 != i )
        __fastfail(3u);
      *v12 = v11;
      v5 = 1;
      *(_QWORD *)(v11 + 8) = v12;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180153468 + 8 * v7));
  if ( v5 )
  {
    v13 = (void *)v4[4];
    if ( v13 )
    {
      RtlpHeapTrkDereferenceStack(v13);
      v4[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v4);
  }
}
