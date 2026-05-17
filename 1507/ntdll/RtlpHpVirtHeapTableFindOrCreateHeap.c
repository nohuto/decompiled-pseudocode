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

__int64 __fastcall RtlpHpVirtHeapTableFindOrCreateHeap(unsigned __int8 *a1, unsigned int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // r9
  __int64 v5; // r15
  unsigned __int8 *v6; // r8
  __int64 v7; // rbx
  __int64 v8; // r10
  __int64 v9; // rax
  char *v10; // rdx
  int v11; // r13d
  int v12; // r14d
  __int64 Entry; // rax
  __int64 v14; // rbx
  __int64 Heap; // rax
  __int128 v16; // xmm0
  char *v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned int v21; // edx
  char v22; // r14
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // r9
  _QWORD *v25; // r8
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  char v28; // dl
  __int64 v29; // r8
  __int64 v30; // r11
  __int64 v31; // r12
  _QWORD *v32; // r10
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v39; // [rsp+70h] [rbp+40h]
  char v40; // [rsp+78h] [rbp+48h]
  __int64 v41; // [rsp+80h] [rbp+50h]

  v40 = a2;
  v2 = 0LL;
  v3 = a2;
  v5 = 0LL;
  v6 = a1;
  v7 = 314159LL;
  v8 = 2LL;
  do
  {
    v9 = *v6;
    v6 += 8;
    v10 = (char *)(*(v6 - 3)
                 + 37 * (*(v6 - 4) + 37 * (*(v6 - 5) + 37 * (*(v6 - 6) + 37 * (*(v6 - 7) + 37 * (v9 + 37 * v7))))));
    v7 = *(v6 - 1) + 37 * (*(v6 - 2) + 37LL * (_QWORD)v10);
    --v8;
  }
  while ( v8 );
  if ( !v7 )
    v7 = 1LL;
  v11 = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    v12 = 1;
    RtlAcquireSRWLockShared(&RtlpHpVirtGlobalCtx, v10, (__int64)v6, v3);
  }
  else
  {
    v12 = 2;
    RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx, v10, (__int64)v6, v3);
  }
  Entry = RtlpHpVirtHeapTableFindEntry(v7, 1, a1);
  if ( Entry )
  {
    v14 = *(_QWORD *)(Entry + 40);
    if ( !v11 )
      ++*(_QWORD *)(Entry + 16);
    goto LABEL_43;
  }
  if ( v12 == 1 )
    RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
  else
    RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
  if ( (v40 & 1) != 0 )
    return 0LL;
  v2 = RtlpHpMetadataAlloc(0x30uLL, 0);
  if ( !v2 )
    return 0LL;
  Heap = RtlCreateHeap(2u, 0LL, 0LL, 0LL, 0LL, 0LL);
  v5 = Heap;
  if ( Heap )
  {
    *(_QWORD *)(Heap + 136) = v7;
    memset(v2, 0, 0x30uLL);
    v16 = *(_OWORD *)a1;
    v2[1] = v7;
    v2[2] = 1LL;
    *(_OWORD *)(v2 + 3) = v16;
    v2[5] = v5;
    RtlAcquireSRWLockExclusive(&RtlpHpVirtGlobalCtx, v17, v18, v19);
    v20 = RtlpHpVirtHeapTableFindEntry(v7, 1, a1);
    if ( v20 )
    {
      v14 = *(_QWORD *)(v20 + 40);
      ++*(_QWORD *)(v20 + 16);
      goto LABEL_48;
    }
    v21 = dword_18014484C;
    if ( dword_180144848 >= 2 * ((unsigned int)dword_18014484C >> 5) )
    {
      v22 = -1;
      v23 = 2 * ((unsigned __int64)(unsigned int)dword_18014484C >> 5);
      if ( v23 <= 0xFFFFFFFF )
      {
        if ( (unsigned int)v23 < 4 )
          v23 = 4LL;
        v24 = RtlpHpVirtTableAllocRoutine(8LL * (unsigned int)v23, 0LL);
        if ( v24 )
        {
          if ( (((_DWORD)v23 - 1) & (unsigned int)v23) != 0 )
          {
            do
            {
              ++v22;
              LODWORD(v23) = (unsigned int)v23 >> 1;
            }
            while ( (_DWORD)v23 );
            v23 = (unsigned int)(1 << v22);
          }
          v25 = (_QWORD *)v24;
          v26 = 0LL;
          if ( (unsigned int)v23 > 0x4000000 )
            v23 = 0x4000000LL;
          v27 = (8 * v23 + 7) >> 3;
          if ( v24 > v24 + 8 * v23 )
            v27 = 0LL;
          if ( v27 )
          {
            do
            {
              ++v26;
              *v25++ = (char *)&dword_180144848 + 1;
            }
            while ( v26 < v27 );
          }
          v28 = dword_18014484C;
          v29 = 0LL;
          v30 = -1LL << (dword_18014484C & 0x1F);
          if ( (dword_18014484C & 0xFFFFFFE0) != 0 )
          {
            do
            {
              v31 = qword_180144850;
              while ( 1 )
              {
                v32 = *(_QWORD **)(v31 + 8LL * (unsigned int)v29);
                if ( ((unsigned __int8)v32 & 1) != 0 )
                  break;
                *(_QWORD *)(v31 + 8LL * (unsigned int)v29) = *v32;
                v39 = v30 & v32[1];
                v33 = (37
                     * (BYTE6(v39)
                      + 37
                      * (BYTE5(v39)
                       + 37
                       * (BYTE4(v39)
                        + 37
                        * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                     + HIBYTE(v39)) & (unsigned int)(v23 - 1);
                *v32 = *(_QWORD *)(v24 + 8 * v33);
                *(_QWORD *)(v24 + 8 * v33) = v32;
              }
              v28 = dword_18014484C;
              v29 = (unsigned int)(v29 + 1);
            }
            while ( (unsigned int)v29 < (unsigned int)dword_18014484C >> 5 );
          }
          v34 = qword_180144850;
          v21 = (32 * v23) | v28 & 0x1F;
          qword_180144850 = v24;
          dword_18014484C = v21;
          if ( v34 )
          {
            RtlpHpVirtTableFreeRoutine(v34, 0LL, v29);
            v21 = dword_18014484C;
          }
        }
        else
        {
          v21 = dword_18014484C;
          if ( (dword_18014484C & 0xFFFFFFE0) == 0 )
          {
            v14 = 0LL;
LABEL_48:
            RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
            if ( v5 )
              RtlDestroyHeap(v5);
            goto LABEL_50;
          }
        }
      }
    }
    v35 = (v21 >> 5) - 1;
    v41 = v2[1] & (-1LL << (v21 & 0x1F));
    v36 = qword_180144850;
    v37 = (37
         * (BYTE6(v41)
          + 37
          * (BYTE5(v41)
           + 37
           * (BYTE4(v41)
            + 37 * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
         + HIBYTE(v41)) & (unsigned int)v35;
    *v2 = *(_QWORD *)(qword_180144850 + 8 * v37);
    *(_QWORD *)(v36 + 8 * v37) = v2;
    ++dword_180144848;
    RtlReleaseSRWLockExclusive(&RtlpHpVirtGlobalCtx);
    v12 = 0;
    v2 = 0LL;
    _InterlockedIncrement(&dword_180144858);
    v14 = v5;
    v5 = 0LL;
LABEL_43:
    if ( v12 == 1 )
    {
      RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
      return v14;
    }
    if ( v12 != 2 )
      return v14;
    goto LABEL_48;
  }
  v14 = 0LL;
LABEL_50:
  if ( v2 )
    RtlpHpMetadataFree((unsigned __int64)v2);
  return v14;
}
