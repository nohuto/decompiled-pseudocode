/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18008523C
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x180094F10 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x180085324 (RtlpHeapTrkDereferenceStack.c)
 *     RtlpHeapTrkHash @ 0x1800853A0 (RtlpHeapTrkHash.c)
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
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  signed __int64 result; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180146358 + 8 * v7), v9, v10, v11);
  v12 = (_QWORD **)(16 * v8 + qword_1801463A8);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v4 = (unsigned __int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v14 = (_QWORD *)*i;
      v15 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v15 != i )
        __fastfail(3u);
      *v15 = v14;
      v5 = 1;
      v14[1] = v15;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180146358 + 8 * v7));
  if ( v5 )
  {
    if ( *(_QWORD *)(v4 + 32) )
    {
      RtlpHeapTrkDereferenceStack();
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_1801463C0, 0, v4);
  }
  return result;
}
