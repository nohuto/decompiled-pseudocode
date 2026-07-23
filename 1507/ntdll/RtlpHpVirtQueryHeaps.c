/*
 * XREFs of RtlpHpVirtQueryHeaps @ 0x1800EB6B4
 * Callers:
 *     RtlQueryHeapInformation @ 0x180078AA0 (RtlQueryHeapInformation.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800D8EF0 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180030740 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpHpVirtHeapTableDereferenceHeap @ 0x1800EAD60 (RtlpHpVirtHeapTableDereferenceHeap.c)
 *     RtlpHpVirtHeapTableFindOrCreateHeap @ 0x1800EB0C8 (RtlpHpVirtHeapTableFindOrCreateHeap.c)
 *     RtlpHpVirtQueryHeapsRemote @ 0x1800EB900 (RtlpHpVirtQueryHeapsRemote.c)
 */

__int64 __fastcall RtlpHpVirtQueryHeaps(unsigned __int8 *a1, SIZE_T a2, _QWORD *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  __int16 v7; // ax
  _QWORD *Heap; // rax
  unsigned __int64 v9; // rbx
  _WORD *v10; // rbp
  unsigned __int64 v11; // r15
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rax
  _BYTE *i; // rdx
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v19; // [rsp+28h] [rbp-30h]
  __int64 v20; // [rsp+30h] [rbp-28h]

  if ( a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v5 = *((unsigned __int16 *)a1 + 1);
  if ( (v5 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)a1 + 1) != -1LL )
    return (unsigned int)RtlpHpVirtQueryHeapsRemote(a1, a2);
  if ( (v5 & 2) != 0 && a2 < 0x38 )
    return (unsigned int)-1073741811;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v6 = 0;
    v7 = v5 | 1;
    *((_QWORD *)a1 + 2) = 0LL;
    *((_WORD *)a1 + 1) = v7;
    if ( (v7 & 2) != 0 )
    {
      Heap = RtlpHpVirtHeapTableFindOrCreateHeap(a1 + 24, 1);
      *((_QWORD *)a1 + 2) = 1LL;
      *((_QWORD *)a1 + 5) = Heap;
      if ( Heap )
      {
        *((_QWORD *)a1 + 6) = Heap[1] << 12;
        RtlpHpVirtHeapTableDereferenceHeap((__int64)Heap);
      }
      else
      {
        *((_QWORD *)a1 + 6) = 0LL;
      }
      *a3 = 56LL;
    }
    else
    {
      v9 = (a2 - 24) >> 5;
      v10 = a1 + 24;
      v11 = (unsigned __int64)&a1[32 * v9 + 24];
      RtlAcquireSRWLockShared(&RtlpHpVirtGlobalCtx);
      if ( (unsigned int)dword_180144848 <= v9 )
      {
        v12 = qword_180144850;
        v20 = qword_180144850;
        v13 = (__int64 *)qword_180144850;
        v19 = qword_180144850;
        if ( (unsigned __int64)v10 < v11 )
        {
          while ( 1 )
          {
            if ( !v13 )
              goto LABEL_23;
            if ( (*v13 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            {
              v12 = v20;
              v13 = (__int64 *)v19;
            }
            v14 = *v13;
            if ( (*v13 & 1) != 0 )
            {
LABEL_23:
              for ( i = (_BYTE *)(v12 + 8); ; i += 8 )
              {
                if ( (unsigned __int64)i >= qword_180144850 + 8 * ((unsigned __int64)(unsigned int)dword_18014484C >> 5) )
                {
                  v14 = 0LL;
                  goto LABEL_28;
                }
                if ( (*i & 1) == 0 )
                  break;
              }
              v14 = *(_QWORD *)i;
              v20 = (__int64)i;
            }
            v19 = v14;
LABEL_28:
            if ( !v14 )
              break;
            *(_OWORD *)v10 = *(_OWORD *)(v14 + 24);
            v16 = *(_QWORD *)(v14 + 40);
            *((_QWORD *)v10 + 2) = v16;
            *((_QWORD *)v10 + 3) = *(_QWORD *)(v16 + 8) << 12;
            v10 += 16;
            if ( (unsigned __int64)v10 >= v11 )
              break;
            v12 = v20;
            v13 = (__int64 *)v19;
          }
        }
        RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
        v17 = ((char *)v10 - (char *)a1 - 24) >> 5;
        *((_QWORD *)a1 + 2) = v17;
        *a3 = 32 * v17 + 24;
      }
      else
      {
        v6 = -1073741789;
        *a3 = 32LL * (unsigned int)dword_180144848 + 24;
        RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
      }
    }
  }
  else
  {
    v6 = 0;
    *((_WORD *)a1 + 1) = v5 & 0xFFFE;
    *((_QWORD *)a1 + 2) = 0LL;
    *a3 = 24LL;
  }
  return v6;
}
