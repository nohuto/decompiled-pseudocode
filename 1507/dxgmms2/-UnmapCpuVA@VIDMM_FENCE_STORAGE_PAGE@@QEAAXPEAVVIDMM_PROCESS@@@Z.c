/*
 * XREFs of ?UnmapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_PROCESS@@@Z @ 0x1C0031940
 * Callers:
 *     ?UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C00324B4 (-UnmapCpuVA@VIDMM_GLOBAL@@SAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapCpuVA(VIDMM_FENCE_STORAGE_PAGE *this, struct VIDMM_PROCESS *a2)
{
  char *v3; // rsi
  char *v5; // rcx
  char *v6; // rax
  char *v7; // rbx
  __int64 v9; // rdx
  char **v10; // rcx

  v3 = (char *)this + 48;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(v3, 0LL);
  v5 = (char *)this + 16;
  *((_QWORD *)v3 + 1) = KeGetCurrentThread();
  v6 = (char *)*((_QWORD *)this + 2);
  while ( v6 != v5 )
  {
    v7 = v6 - 16;
    v6 = *(char **)v6;
    if ( a2 == *((struct VIDMM_PROCESS **)v7 + 1) || !a2 )
    {
      if ( (*((_DWORD *)v7 + 8))-- == 1 )
      {
        MmUnmapViewOfSection(*(_QWORD *)a2, *(_QWORD *)v7);
        v9 = *((_QWORD *)v7 + 2);
        v10 = (char **)*((_QWORD *)v7 + 3);
        if ( *(char **)(v9 + 8) != v7 + 16 || *v10 != v7 + 16 )
          __fastfail(3u);
        *v10 = (char *)v9;
        *(_QWORD *)(v9 + 8) = v10;
        ExFreePoolWithTag(v7, 0);
      }
      break;
    }
  }
  *((_QWORD *)v3 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
