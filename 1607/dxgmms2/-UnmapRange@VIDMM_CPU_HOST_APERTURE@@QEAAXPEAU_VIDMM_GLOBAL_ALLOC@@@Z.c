/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00124C0 (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D478 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C006D51C (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00897DC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C0097DDC (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098BC8 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(VIDMM_CPU_HOST_APERTURE *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _QWORD *v2; // rax
  __int64 v4; // r8
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v2 = (_QWORD *)((char *)a2 + 472);
  v4 = *((_QWORD *)a2 + 59);
  v6 = (_QWORD *)*((_QWORD *)a2 + 60);
  if ( *(_QWORD **)(v4 + 8) != v2 || (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((unsigned int *)a2 + 123);
  v8 = (void *)*((_QWORD *)a2 + 58);
  *v2 = 0LL;
  *((_QWORD *)a2 + 60) = 0LL;
  v9 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v7);
  v10 = *((_QWORD *)this + 6);
  v17 = 0LL;
  v16[0] = v9;
  v16[1] = v8;
  if ( (*(_DWORD *)(v10 + 56) & 0x1000) != 0 )
    LOWORD(v17) = 0;
  else
    LOWORD(v17) = *(_WORD *)(v10 + 16) + 1;
  WORD1(v17) = *(_WORD *)(v10 + 372);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[39])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL) + 2136LL),
         v16) < 0 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v11, v13, v14);
    v15[7] = v16;
    v15[3] = 270LL;
    v15[4] = 46LL;
    v15[5] = this;
    v15[6] = a2;
    WdLogEvent5_WdCriticalError(v15);
  }
  operator delete[](v8);
  *((_QWORD *)a2 + 58) = 0LL;
}
