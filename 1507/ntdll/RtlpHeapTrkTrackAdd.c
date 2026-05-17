/*
 * XREFs of RtlpHeapTrkTrackAdd @ 0x1800E1D60
 * Callers:
 *     RtlpHeapTrkInterceptor @ 0x1800E1810 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkHash @ 0x1800E1760 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkTrackStack @ 0x1800E206C (RtlpHeapTrkTrackStack.c)
 */

signed __int64 __fastcall RtlpHeapTrkTrackAdd(__int64 a1, __int64 a2)
{
  signed __int64 result; // rax
  _QWORD *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rax
  char *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rax

  result = RtlAllocateHeap(qword_1801486F8, 0, 40LL);
  v5 = (_QWORD *)result;
  if ( result )
  {
    v6 = (unsigned int)RtlpHeapTrkHash(a2);
    v5[2] = a1;
    v5[3] = a2;
    v7 = RtlpHeapTrkTrackStack();
    v5[4] = v7;
    if ( v7 )
    {
      v11 = v6 & 0xF;
      RtlAcquireSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v11), v8, v9, v10);
      v12 = (__int64 *)(qword_1801485F0 + 16 * v6);
      v13 = *v12;
      *v5 = *v12;
      v5[1] = v12;
      if ( *(__int64 **)(v13 + 8) != v12 )
        __fastfail(3u);
      *(_QWORD *)(v13 + 8) = v5;
      *v12 = (__int64)v5;
      return RtlReleaseSRWLockExclusive(*(volatile signed __int64 **)(qword_180148698 + 8 * v11));
    }
    else
    {
      return RtlFreeHeap(qword_1801486F8, 0, (unsigned __int64)v5);
    }
  }
  return result;
}
