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

signed __int64 __fastcall RtlpHeapTrkTrackRemove(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  char v5; // si
  unsigned int v6; // eax
  __int64 v7; // rbp
  __int64 v8; // rbx
  char *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD **v12; // rcx
  _QWORD *i; // rax
  signed __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  _QWORD *v20; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v7), v9, v10, v11);
  v12 = (_QWORD **)(16 * v8 + qword_1801485F0);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v4 = (unsigned __int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v19 = (_QWORD *)*i;
      v20 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v20 != i )
        __fastfail(3u);
      *v20 = v19;
      v5 = 1;
      v19[1] = v20;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v7));
  if ( v5 )
  {
    v18 = *(_QWORD *)(v4 + 32);
    if ( v18 )
    {
      RtlpHeapTrkDereferenceStack(v18, v15, v16, v17);
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_1801486F8, 0, v4);
  }
  return result;
}
