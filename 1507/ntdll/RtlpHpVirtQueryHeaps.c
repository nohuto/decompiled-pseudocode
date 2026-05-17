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

__int64 __fastcall RtlpHpVirtQueryHeaps(unsigned __int8 *a1, char *a2, _QWORD *a3, __int64 a4)
{
  int v6; // eax
  unsigned int v7; // edi
  __int16 v8; // ax
  __int64 Heap; // rax
  char *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int64 v13; // rbx
  _WORD *v14; // rbp
  unsigned __int64 v15; // r15
  __int64 v16; // rdx
  __int64 *v17; // rcx
  __int64 v18; // rax
  _BYTE *i; // rdx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v23; // [rsp+28h] [rbp-30h]
  __int64 v24; // [rsp+30h] [rbp-28h]

  if ( (unsigned __int64)a2 < 0x18 )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 1 )
    return (unsigned int)-1073741811;
  v6 = *((unsigned __int16 *)a1 + 1);
  if ( (v6 & 0xFFFFFFFC) != 0 )
    return (unsigned int)-1073741811;
  if ( *((_QWORD *)a1 + 1) != -1LL )
    return (unsigned int)RtlpHpVirtQueryHeapsRemote(a1);
  if ( (v6 & 2) != 0 && (unsigned __int64)a2 < 0x38 )
    return (unsigned int)-1073741811;
  if ( (RtlpHpHeapFeatures & 2) != 0 )
  {
    v7 = 0;
    v8 = v6 | 1;
    *((_QWORD *)a1 + 2) = 0LL;
    *((_WORD *)a1 + 1) = v8;
    if ( (v8 & 2) != 0 )
    {
      Heap = RtlpHpVirtHeapTableFindOrCreateHeap(a1 + 24, 1u);
      *((_QWORD *)a1 + 2) = 1LL;
      *((_QWORD *)a1 + 5) = Heap;
      if ( Heap )
      {
        *((_QWORD *)a1 + 6) = *(_QWORD *)(Heap + 8) << 12;
        RtlpHpVirtHeapTableDereferenceHeap(Heap, v10, v11, v12);
      }
      else
      {
        *((_QWORD *)a1 + 6) = 0LL;
      }
      *a3 = 56LL;
    }
    else
    {
      v13 = (unsigned __int64)(a2 - 24) >> 5;
      v14 = a1 + 24;
      v15 = (unsigned __int64)&a1[32 * v13 + 24];
      RtlAcquireSRWLockShared(&RtlpHpVirtGlobalCtx, a2, (__int64)a3, a4);
      if ( (unsigned int)dword_180144848 <= v13 )
      {
        v16 = qword_180144850;
        v24 = qword_180144850;
        v17 = (__int64 *)qword_180144850;
        v23 = qword_180144850;
        if ( (unsigned __int64)v14 < v15 )
        {
          while ( 1 )
          {
            if ( !v17 )
              goto LABEL_23;
            if ( (*v17 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
            {
              v16 = v24;
              v17 = (__int64 *)v23;
            }
            v18 = *v17;
            if ( (*v17 & 1) != 0 )
            {
LABEL_23:
              for ( i = (_BYTE *)(v16 + 8); ; i += 8 )
              {
                if ( (unsigned __int64)i >= qword_180144850 + 8 * ((unsigned __int64)(unsigned int)dword_18014484C >> 5) )
                {
                  v18 = 0LL;
                  goto LABEL_28;
                }
                if ( (*i & 1) == 0 )
                  break;
              }
              v18 = *(_QWORD *)i;
              v24 = (__int64)i;
            }
            v23 = v18;
LABEL_28:
            if ( !v18 )
              break;
            *(_OWORD *)v14 = *(_OWORD *)(v18 + 24);
            v20 = *(_QWORD *)(v18 + 40);
            *((_QWORD *)v14 + 2) = v20;
            *((_QWORD *)v14 + 3) = *(_QWORD *)(v20 + 8) << 12;
            v14 += 16;
            if ( (unsigned __int64)v14 >= v15 )
              break;
            v16 = v24;
            v17 = (__int64 *)v23;
          }
        }
        RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
        v21 = ((char *)v14 - (char *)a1 - 24) >> 5;
        *((_QWORD *)a1 + 2) = v21;
        *a3 = 32 * v21 + 24;
      }
      else
      {
        v7 = -1073741789;
        *a3 = 32LL * (unsigned int)dword_180144848 + 24;
        RtlReleaseSRWLockShared(&RtlpHpVirtGlobalCtx);
      }
    }
  }
  else
  {
    v7 = 0;
    *((_WORD *)a1 + 1) = v6 & 0xFFFE;
    *((_QWORD *)a1 + 2) = 0LL;
    *a3 = 24LL;
  }
  return v7;
}
