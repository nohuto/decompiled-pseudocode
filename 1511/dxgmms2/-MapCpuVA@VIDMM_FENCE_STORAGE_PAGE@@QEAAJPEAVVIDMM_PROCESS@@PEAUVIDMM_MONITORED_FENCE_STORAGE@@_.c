/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C003C1C0
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C0052520 (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C00810A8 (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
 */

__int64 __fastcall VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_PROCESS *a2,
        struct VIDMM_MONITORED_FENCE_STORAGE *a3,
        char a4,
        bool a5,
        unsigned __int64 a6)
{
  _QWORD *v6; // r12
  char *v7; // rbp
  __int64 v11; // r15
  char *v12; // rsi
  char *i; // rax
  char *v14; // rbx
  char *PoolWithTag; // rax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edi
  char **v20; // rcx
  char *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v26; // [rsp+A0h] [rbp+18h]

  v26 = a3;
  v6 = (_QWORD *)a6;
  v7 = (char *)this + 48;
  v11 = 0LL;
  *(_QWORD *)a6 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v7, 0LL);
  v12 = (char *)this + 16;
  *((_QWORD *)v7 + 1) = KeGetCurrentThread();
  for ( i = (char *)*((_QWORD *)this + 2); i != v12; i = *(char **)i )
  {
    v14 = i - 16;
    if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
    {
      ++*((_DWORD *)v14 + 8);
LABEL_5:
      *v6 = *(_QWORD *)v14 + *((unsigned int *)v26 + 4);
      *((_QWORD *)v7 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      return 0LL;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x68536956u);
  v14 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *((_DWORD *)v14 + 8) = 1;
    *((_QWORD *)v14 + 1) = a2;
    v11 = *(_QWORD *)a2;
    v17 = *(_QWORD *)a2;
    v25 = 0LL;
    a6 = 4096LL;
    if ( PsGetProcessWow64Process(v17) || (v18 = 2, a4) )
      v18 = 4;
    v19 = MmMapViewOfSection(*((_QWORD *)this + 9), v11, v14, 0LL, a6, &v25, &a6, 2, 0, v18);
    if ( v19 >= 0 )
    {
      if ( !a4 || !a5 || (v22 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v14, a6), v19 = v22, v22 >= 0) )
      {
        v20 = (char **)*((_QWORD *)this + 3);
        v21 = v14 + 16;
        *((_QWORD *)v14 + 2) = v12;
        *((_QWORD *)v14 + 3) = v20;
        if ( *v20 != v12 )
          __fastfail(3u);
        *v20 = v21;
        *((_QWORD *)this + 3) = v21;
        goto LABEL_5;
      }
      v24 = WdLogNewEntry5_WdWarning(v23);
      WdLogEvent5_WdWarning(v24);
    }
  }
  else
  {
    v19 = -1073741801;
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v14 )
  {
    if ( *(_QWORD *)v14 )
      MmUnmapViewOfSection(v11, *(_QWORD *)v14);
    ExFreePoolWithTag(v14, 0);
  }
  return (unsigned int)v19;
}
