/*
 * XREFs of RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8
 * Callers:
 *     RtlpHpVirtGetProcessHeap @ 0x1800EAC9C (RtlpHpVirtGetProcessHeap.c)
 *     RtlpHpVirtQueryHeaps @ 0x1800EB6B4 (RtlpHpVirtQueryHeaps.c)
 * Callees:
 *     RtlDestroyHeap @ 0x180004920 (RtlDestroyHeap.c)
 *     RtlCreateHeap @ 0x180005330 (RtlCreateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpHpVirtHeapTableFindEntry @ 0x1800EAEDC (RtlpHpVirtHeapTableFindEntry.c)
 *     RtlpHpVirtTableAllocRoutine @ 0x1800EBC94 (RtlpHpVirtTableAllocRoutine.c)
 *     RtlpHpVirtTableFreeRoutine @ 0x1800EBCB0 (RtlpHpVirtTableFreeRoutine.c)
 */

void *__fastcall RtlpHpVirtHeapTableFindOrCreateHeap(unsigned __int8 *a1, char a2)
{
  _QWORD *v2; // rsi
  void *v4; // r15
  unsigned __int8 *v5; // r8
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rax
  int v9; // r13d
  int v10; // r14d
  __int64 Entry; // rax
  void *v12; // rbx
  PVOID Heap; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  unsigned int v16; // edx
  char v17; // r14
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // r9
  _QWORD *v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // rcx
  char v23; // dl
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // r12
  _QWORD *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rcx
  int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v34; // [rsp+70h] [rbp+40h]
  __int64 v36; // [rsp+80h] [rbp+50h]

  v2 = 0LL;
  v4 = 0LL;
  v5 = a1;
  v6 = 314159LL;
  v7 = 2LL;
  do
  {
    v8 = *v5;
    v5 += 8;
    v6 = *(v5 - 1)
       + 37
       * (*(v5 - 2)
        + 37
        * (*(v5 - 3) + 37 * (*(v5 - 4) + 37 * (*(v5 - 5) + 37 * (*(v5 - 6) + 37 * (*(v5 - 7) + 37 * (v8 + 37 * v6)))))));
    --v7;
  }
  while ( v7 );
  if ( !v6 )
    v6 = 1LL;
  v9 = a2 & 2;
  if ( (a2 & 2) != 0 )
  {
    v10 = 1;
    RtlAcquireSRWLockShared(&RtlpHpVirtGlobalCtx);
  }
  else
  {
    v10 = 2;
    RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  }
  Entry = RtlpHpVirtHeapTableFindEntry(v6, 1, a1);
  if ( Entry )
  {
    v12 = *(void **)(Entry + 40);
    if ( !v9 )
      ++*(_QWORD *)(Entry + 16);
    goto LABEL_43;
  }
  if ( v10 == 1 )
    RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
  else
    RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  if ( (a2 & 1) != 0 )
    return 0LL;
  v2 = RtlpHpMetadataAlloc(0x30uLL, 0);
  if ( !v2 )
    return 0LL;
  Heap = RtlCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL);
  v4 = Heap;
  if ( Heap )
  {
    *((_QWORD *)Heap + 17) = v6;
    memset(v2, 0, 0x30uLL);
    v14 = *(_OWORD *)a1;
    v2[1] = v6;
    v2[2] = 1LL;
    *(_OWORD *)(v2 + 3) = v14;
    v2[5] = v4;
    RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx);
    v15 = RtlpHpVirtHeapTableFindEntry(v6, 1, a1);
    if ( v15 )
    {
      v12 = *(void **)(v15 + 40);
      ++*(_QWORD *)(v15 + 16);
      goto LABEL_48;
    }
    v16 = dword_18014484C;
    if ( dword_180144848 >= 2 * ((unsigned int)dword_18014484C >> 5) )
    {
      v17 = -1;
      v18 = 2 * ((unsigned __int64)(unsigned int)dword_18014484C >> 5);
      if ( v18 <= 0xFFFFFFFF )
      {
        if ( (unsigned int)v18 < 4 )
          v18 = 4LL;
        v19 = RtlpHpVirtTableAllocRoutine(8LL * (unsigned int)v18, 0LL);
        if ( v19 )
        {
          if ( (((_DWORD)v18 - 1) & (unsigned int)v18) != 0 )
          {
            do
            {
              ++v17;
              LODWORD(v18) = (unsigned int)v18 >> 1;
            }
            while ( (_DWORD)v18 );
            v18 = (unsigned int)(1 << v17);
          }
          v20 = (_QWORD *)v19;
          v21 = 0LL;
          if ( (unsigned int)v18 > 0x4000000 )
            v18 = 0x4000000LL;
          v22 = (8 * v18 + 7) >> 3;
          if ( v19 > v19 + 8 * v18 )
            v22 = 0LL;
          if ( v22 )
          {
            do
            {
              ++v21;
              *v20++ = (char *)&dword_180144848 + 1;
            }
            while ( v21 < v22 );
          }
          v23 = dword_18014484C;
          v24 = 0LL;
          v25 = -1LL << (dword_18014484C & 0x1F);
          if ( (dword_18014484C & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v26 = qword_180144850;
              while ( 1 )
              {
                v27 = *(_QWORD **)(v26 + 8LL * (unsigned int)v24);
                if ( ((unsigned __int8)v27 & 1) != 0 )
                  break;
                *(_QWORD *)(v26 + 8LL * (unsigned int)v24) = *v27;
                v34 = v25 & v27[1];
                v28 = (37
                     * (BYTE6(v34)
                      + 37
                      * (BYTE5(v34)
                       + 37
                       * (BYTE4(v34)
                        + 37
                        * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
                     + HIBYTE(v34)) & (unsigned int)(v18 - 1);
                *v27 = *(_QWORD *)(v19 + 8 * v28);
                *(_QWORD *)(v19 + 8 * v28) = v27;
              }
              v23 = dword_18014484C;
              v24 = (unsigned int)(v24 + 1);
            }
            while ( (unsigned int)v24 < (unsigned int)dword_18014484C >> 5 );
          }
          v29 = qword_180144850;
          v16 = (32 * v18) | v23 & 0x1F;
          qword_180144850 = v19;
          dword_18014484C = v16;
          if ( v29 )
          {
            RtlpHpVirtTableFreeRoutine(v29, 0LL, v24);
            v16 = dword_18014484C;
          }
        }
        else
        {
          v16 = dword_18014484C;
          if ( (dword_18014484C & 0xFFFFFFE0) == 0 )
          {
            v12 = 0LL;
LABEL_48:
            RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
            if ( v4 )
              RtlDestroyHeap(v4);
            goto LABEL_50;
          }
        }
      }
    }
    v30 = (v16 >> 5) - 1;
    v36 = v2[1] & (-1LL << (v16 & 0x1F));
    v31 = qword_180144850;
    v32 = (37
         * (BYTE6(v36)
          + 37
          * (BYTE5(v36)
           + 37
           * (BYTE4(v36)
            + 37 * (BYTE3(v36) + 37 * (BYTE2(v36) + 37 * (BYTE1(v36) + 37 * ((unsigned __int8)v36 + 11623883)))))))
         + HIBYTE(v36)) & (unsigned int)v30;
    *v2 = *(_QWORD *)(qword_180144850 + 8 * v32);
    *(_QWORD *)(v31 + 8 * v32) = v2;
    ++dword_180144848;
    RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
    v10 = 0;
    v2 = 0LL;
    _InterlockedIncrement(&dword_180144858);
    v12 = v4;
    v4 = 0LL;
LABEL_43:
    if ( v10 == 1 )
    {
      RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
      return v12;
    }
    if ( v10 != 2 )
      return v12;
    goto LABEL_48;
  }
  v12 = 0LL;
LABEL_50:
  if ( v2 )
    RtlpHpMetadataFree((unsigned __int64)v2);
  return v12;
}
