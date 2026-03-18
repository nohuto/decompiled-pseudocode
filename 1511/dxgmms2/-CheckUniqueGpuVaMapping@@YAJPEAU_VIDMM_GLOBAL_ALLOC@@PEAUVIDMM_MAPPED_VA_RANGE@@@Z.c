/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005F088
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0040A80 (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0040E18 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v4; // r14
  __int64 v5; // rbp
  char *v6; // rdx
  unsigned __int64 v7; // r10
  char *v8; // rbx
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned int v11; // edi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  char **v16; // rcx
  char *v17; // rax
  char **v18; // rcx
  char *v19; // rax

  KeEnterCriticalRegion();
  v4 = (char *)a1 + 344;
  ExAcquirePushLockExclusiveEx((char *)a1 + 344, 0LL);
  v5 = *((_QWORD *)a2 + 10);
  v6 = (char *)a1 + 184;
  v7 = *((_QWORD *)a2 + 9);
  v8 = (char *)*((_QWORD *)a1 + 23);
  LOBYTE(v9) = v5 < 0;
  v10 = v5 & 0x7FFFFFFFFFFFFFFFLL;
  v11 = 0;
  while ( 1 )
  {
    if ( v8 == v6 )
    {
      if ( (_BYTE)v9 )
      {
        v18 = (char **)*((_QWORD *)v6 + 1);
        v19 = (char *)a2 + 40;
        *((_QWORD *)a2 + 5) = v6;
        *((_QWORD *)a2 + 6) = v18;
        if ( *v18 != v6 )
          __fastfail(3u);
        *v18 = v19;
        *((_QWORD *)v6 + 1) = v19;
      }
      goto LABEL_4;
    }
    v13 = *((_QWORD *)v8 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v13 )
      break;
    v14 = v13 + *((_QWORD *)v8 + 8) - *((_QWORD *)v8 + 7);
    if ( v7 < v14 && v10 != (*((_QWORD *)v8 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v6, v13, v9);
      v15[3] = *((_QWORD *)v8 + 7);
      v15[4] = *((_QWORD *)v8 + 8);
      v15[5] = *((_QWORD *)v8 + 5);
      v15[6] = v10;
      WdLogEvent5_WdAssertion(v15);
      v11 = -1073741811;
      goto LABEL_4;
    }
    if ( (_BYTE)v9 && v7 < v13 )
    {
      v16 = (char **)*((_QWORD *)v8 + 1);
      v17 = (char *)a2 + 40;
      *((_QWORD *)a2 + 5) = v8;
      *((_QWORD *)a2 + 6) = v16;
      if ( *v16 != v8 )
        __fastfail(3u);
LABEL_14:
      *v16 = v17;
      *((_QWORD *)v8 + 1) = v17;
      goto LABEL_4;
    }
    v8 = *(char **)v8;
  }
  if ( (_BYTE)v9 )
  {
    v16 = (char **)*((_QWORD *)v8 + 1);
    v17 = (char *)a2 + 40;
    *((_QWORD *)a2 + 5) = v8;
    *((_QWORD *)a2 + 6) = v16;
    if ( *v16 != v8 )
      __fastfail(3u);
    goto LABEL_14;
  }
LABEL_4:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
