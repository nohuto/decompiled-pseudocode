/*
 * XREFs of ?CheckUniqueGpuVaMapping@@YAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAUVIDMM_MAPPED_VA_RANGE@@@Z @ 0x1C005CEF8
 * Callers:
 *     ?AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_LIST_ENTRY@@2@Z @ 0x1C005C514 (-AddVaRangeToVad@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@PEAUVIDMM_MAPPED_VA_RANGE@@PEAU_L.c)
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
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  char **v14; // rcx
  char *v15; // rax
  _QWORD *v16; // rax
  char **v17; // rcx
  char *v18; // rax

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
        v14 = (char **)*((_QWORD *)v6 + 1);
        v15 = (char *)a2 + 40;
        *((_QWORD *)a2 + 5) = v6;
        *((_QWORD *)a2 + 6) = v14;
        if ( *v14 != v6 )
          __fastfail(3u);
        *v14 = v15;
        *((_QWORD *)v6 + 1) = v15;
      }
      goto LABEL_20;
    }
    v12 = *((_QWORD *)v8 + 4);
    if ( v7 + *((_QWORD *)a2 + 13) - *((_QWORD *)a2 + 12) <= v12 )
      break;
    v13 = v12 + *((_QWORD *)v8 + 8) - *((_QWORD *)v8 + 7);
    if ( v7 < v13 && v10 != (*((_QWORD *)v8 + 5) & 0x7FFFFFFFFFFFFFFFLL) )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdAssertion(v13, v6, v12, v9);
      v16[3] = *((_QWORD *)v8 + 7);
      v16[4] = *((_QWORD *)v8 + 8);
      v16[5] = *((_QWORD *)v8 + 5);
      v16[6] = v10;
      WdLogEvent5_WdAssertion(v16);
      v11 = -1073741811;
      goto LABEL_20;
    }
    if ( (_BYTE)v9 && v7 < v12 )
    {
      v17 = (char **)*((_QWORD *)v8 + 1);
      v18 = (char *)a2 + 40;
      *((_QWORD *)a2 + 5) = v8;
      *((_QWORD *)a2 + 6) = v17;
      if ( *v17 != v8 )
        __fastfail(3u);
LABEL_15:
      *v17 = v18;
      *((_QWORD *)v8 + 1) = v18;
      goto LABEL_20;
    }
    v8 = *(char **)v8;
  }
  if ( (_BYTE)v9 )
  {
    v17 = (char **)*((_QWORD *)v8 + 1);
    v18 = (char *)a2 + 40;
    *((_QWORD *)a2 + 5) = v8;
    *((_QWORD *)a2 + 6) = v17;
    if ( *v17 != v8 )
      __fastfail(3u);
    goto LABEL_15;
  }
LABEL_20:
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
