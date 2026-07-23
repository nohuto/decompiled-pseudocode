/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x1800E1E38
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800E1304 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x1800E1760 (RtlpHeapTrkHash.c)
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
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180148698 + 8 * v7));
  v9 = (_QWORD **)(16 * v8 + qword_1801485F0);
  for ( i = *v9; i != v9; i = (_QWORD *)*i )
  {
    v4 = i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v12 = *i;
      v13 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v13 != i )
        __fastfail(3u);
      *v13 = v12;
      v5 = 1;
      *(_QWORD *)(v12 + 8) = v13;
      break;
    }
  }
  RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(qword_180148698 + 8 * v7));
  if ( v5 )
  {
    v11 = (_QWORD *)v4[4];
    if ( v11 )
    {
      RtlpHeapTrkDereferenceStack(v11);
      v4[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, v4);
  }
}
