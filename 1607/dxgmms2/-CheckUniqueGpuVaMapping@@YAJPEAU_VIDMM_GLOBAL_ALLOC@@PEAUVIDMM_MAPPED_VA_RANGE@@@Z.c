/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C0045ED4
 * Callers:
 *     ?AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C004851C (-AddVaRangeToVadRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@IPEAPEAU_LIST_ENTRY@@PEA.c)
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C0068650 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CheckUniqueGpuVaMapping(struct _VIDMM_GLOBAL_ALLOC *a1, struct VIDMM_MAPPED_VA_RANGE *a2)
{
  char *v3; // rbp
  char *v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // r10
  char *v8; // rbx
  bool v9; // r9
  __int64 v10; // rsi
  unsigned int v11; // r14d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rax
  char **v16; // rcx
  char **v17; // rax
  char **v18; // rcx
  char *v19; // rax

  v3 = (char *)a1 + 352;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (char *)a1 + 192;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = *((_QWORD *)a2 + 10);
  v7 = *((_QWORD *)a2 + 9);
  v8 = (char *)*((_QWORD *)a1 + 24);
  v9 = v6 < 0;
  v10 = v6 & 0x7FFFFFFFFFFFFFFFLL;
  v11 = 0;
  while ( v8 != v5 )
  {
    v13 = *((_QWORD *)v8 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v13 )
    {
      if ( !v9 )
        goto LABEL_4;
      v16 = (char **)*((_QWORD *)v8 + 1);
      v17 = (char **)((char *)a2 + 40);
      if ( *v16 != v8 )
        __fastfail(3u);
      goto LABEL_17;
    }
    v14 = v13 + *((_QWORD *)v8 + 8) - *((_QWORD *)v8 + 7);
    if ( v7 < v14 && v10 != (*((_QWORD *)v8 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdAssertion(v14, v5);
      v15[3] = *((_QWORD *)v8 + 7);
      v15[4] = *((_QWORD *)v8 + 8);
      v15[5] = *((_QWORD *)v8 + 5);
      v15[6] = v10;
      WdLogEvent5_WdAssertion(v15);
      v11 = -1073741811;
      goto LABEL_4;
    }
    if ( v9 && v7 < v13 )
    {
      v16 = (char **)*((_QWORD *)v8 + 1);
      v17 = (char **)((char *)a2 + 40);
      if ( *v16 != v8 )
        __fastfail(3u);
LABEL_17:
      *v17 = v8;
      v17[1] = (char *)v16;
      *v16 = (char *)v17;
      *((_QWORD *)v8 + 1) = v17;
      goto LABEL_4;
    }
    v8 = *(char **)v8;
  }
  if ( v9 )
  {
    v18 = (char **)*((_QWORD *)v5 + 1);
    v19 = (char *)a2 + 40;
    if ( *v18 != v5 )
      __fastfail(3u);
    *(_QWORD *)v19 = v5;
    *((_QWORD *)a2 + 6) = v18;
    *v18 = v19;
    *((_QWORD *)v5 + 1) = v19;
  }
LABEL_4:
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
