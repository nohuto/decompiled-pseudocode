/*
 * XREFs of RtlpHeapTrkTrackRemoveHeap @ 0x1800E1F24
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkDereferenceStack @ 0x1800E1304 (RtlpHeapTrkDereferenceStack.c)
 */

_QWORD *__fastcall RtlpHeapTrkTrackRemoveHeap(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rsi
  _QWORD *v7; // rdx
  _QWORD *v8; // rax
  bool v9; // zf
  _QWORD *v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  _QWORD *result; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v19[1] = v19;
  v5 = 0;
  v19[0] = v19;
  do
  {
    v6 = v5 & 0xF;
    RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v6), a2, a3, a4);
    v7 = (_QWORD *)(16LL * v5 + qword_1801485F0);
    v8 = (_QWORD *)*v7;
    while ( v8 != v7 )
    {
      v9 = v8[2] == a1;
      v10 = v8;
      v8 = (_QWORD *)*v8;
      if ( v9 )
      {
        v11 = *v10;
        v12 = (_QWORD *)v10[1];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = v19[0];
        v10[1] = v19;
        *v10 = v13;
        if ( *(_QWORD **)(v13 + 8) != v19 )
          __fastfail(3u);
        *(_QWORD *)(v13 + 8) = v10;
        v19[0] = v10;
      }
    }
    RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v6));
    ++v5;
  }
  while ( v5 < 0x1EEF );
  while ( 1 )
  {
    v14 = v19[0];
    result = v19;
    if ( (_QWORD *)v19[0] == v19 )
      break;
    v16 = *(_QWORD *)v19[0];
    v17 = *(_QWORD **)(v19[0] + 8LL);
    if ( *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) != v19[0] || *v17 != v19[0] )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    v18 = *(_QWORD *)(v14 + 32);
    if ( v18 )
    {
      RtlpHeapTrkDereferenceStack(v18, (__int64)a2, a3, a4);
      *(_QWORD *)(v14 + 32) = 0LL;
    }
    RtlFreeHeap(qword_1801486F8, 0, v14);
  }
  return result;
}
