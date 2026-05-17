/*
 * XREFs of RtlpHeapTrkTrackRemove @ 0x18008EF98
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x180090FB0 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHeapTrkHash @ 0x18008F088 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18008F130 (RtlpHeapTrkDereferenceStack.c)
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
  _QWORD *v15; // rdx
  _QWORD *v16; // rcx

  v4 = 0LL;
  v5 = 0;
  v6 = RtlpHeapTrkHash(a2);
  v7 = v6 & 0xF;
  v8 = v6;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(qword_180153460 + 8 * v7), v9, v10, v11);
  v12 = (_QWORD **)(16 * v8 + qword_1801530F0);
  for ( i = *v12; i != v12; i = (_QWORD *)*i )
  {
    v4 = (unsigned __int64)i;
    if ( i[3] == a2 && i[2] == a1 )
    {
      v15 = (_QWORD *)*i;
      v16 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v16 != i )
        __fastfail(3u);
      *v16 = v15;
      v5 = 1;
      v15[1] = v16;
      break;
    }
  }
  result = RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180153460 + 8 * v7));
  if ( v5 )
  {
    if ( *(_QWORD *)(v4 + 32) )
    {
      RtlpHeapTrkDereferenceStack();
      *(_QWORD *)(v4 + 32) = 0LL;
    }
    return RtlFreeHeap(qword_1801530C0, 0, v4);
  }
  return result;
}
