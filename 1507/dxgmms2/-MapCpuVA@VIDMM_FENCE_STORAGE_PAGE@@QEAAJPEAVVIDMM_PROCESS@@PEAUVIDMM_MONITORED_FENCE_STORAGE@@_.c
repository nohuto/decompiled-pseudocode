/*
 * XREFs of ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N2PEAPEAX@Z @ 0x1C0031ED8
 * Callers:
 *     ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z @ 0x1C003163C (-MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAX@Z.c)
 * Callees:
 *     memset @ 0x1C0008500 (memset.c)
 *     ?VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z @ 0x1C005BDEC (-VidMmiEnsureVirtualAddressRangeValid@@YAJPEAX_K@Z.c)
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
  char *PoolWithTag; // rax
  char *v15; // rbx
  __int64 v16; // rcx
  int v17; // eax
  int v18; // edi
  char **v19; // rcx
  char *v20; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+90h] [rbp+8h] BYREF
  struct VIDMM_MONITORED_FENCE_STORAGE *v27; // [rsp+A0h] [rbp+18h]

  v27 = a3;
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
    v15 = i - 16;
    if ( a2 == *((struct VIDMM_PROCESS **)i - 1) )
    {
      ++*((_DWORD *)v15 + 8);
LABEL_12:
      *v6 = *(_QWORD *)v15 + *((unsigned int *)v27 + 4);
      *((_QWORD *)v7 + 1) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
      return 0LL;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28uLL, 0x68536956u);
  v15 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 0x28uLL);
    *((_DWORD *)v15 + 8) = 1;
    *((_QWORD *)v15 + 1) = a2;
    v11 = *(_QWORD *)a2;
    v16 = *(_QWORD *)a2;
    v26 = 0LL;
    a6 = 4096LL;
    if ( PsGetProcessWow64Process(v16) || (v17 = 2, a4) )
      v17 = 4;
    v18 = MmMapViewOfSection(*((_QWORD *)this + 9), v11, v15, 0LL, a6, &v26, &a6, 2, 0, v17);
    if ( v18 >= 0 )
    {
      if ( !a4 || !a5 || (v18 = VidMmiEnsureVirtualAddressRangeValid(*(void **)v15, a6), v18 >= 0) )
      {
        v19 = (char **)*((_QWORD *)this + 3);
        v20 = v15 + 16;
        *((_QWORD *)v15 + 2) = v12;
        *((_QWORD *)v15 + 3) = v19;
        if ( *v19 != v12 )
          __fastfail(3u);
        *v19 = v20;
        *((_QWORD *)this + 3) = v20;
        goto LABEL_12;
      }
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      WdLogEvent5_WdWarning(v25);
    }
  }
  else
  {
    v18 = -1073741801;
  }
  *((_QWORD *)v7 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v15 )
  {
    if ( *(_QWORD *)v15 )
      MmUnmapViewOfSection(v11, *(_QWORD *)v15);
    ExFreePoolWithTag(v15, 0);
  }
  return (unsigned int)v18;
}
