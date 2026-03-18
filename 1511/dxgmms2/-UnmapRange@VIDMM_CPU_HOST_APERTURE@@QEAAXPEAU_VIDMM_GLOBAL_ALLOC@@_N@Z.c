/*
 * XREFs of ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001370C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C00670E0 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C0067188 (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C007B1FC (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0084A04 (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C001132C (--_V@YAXPEAX@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::UnmapRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        char a3)
{
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  _QWORD v18[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v19; // [rsp+30h] [rbp-18h]

  if ( !a3 )
    DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 72));
  v6 = (_QWORD *)((char *)a2 + 440);
  v7 = *((_QWORD *)a2 + 55);
  v8 = (_QWORD *)*((_QWORD *)a2 + 56);
  if ( *(struct _VIDMM_GLOBAL_ALLOC **)(v7 + 8) != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 440)
    || (_QWORD *)*v8 != v6 )
  {
    __fastfail(3u);
  }
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  if ( !a3 )
  {
    *((_QWORD *)this + 10) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 72, 0LL);
    KeLeaveCriticalRegion();
  }
  v9 = *((unsigned int *)a2 + 115);
  *v6 = 0LL;
  v10 = (void *)*((_QWORD *)a2 + 54);
  *((_QWORD *)a2 + 56) = 0LL;
  v11 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v9);
  v12 = *((_QWORD *)this + 6);
  v19 = 0LL;
  v18[0] = v11;
  v18[1] = v10;
  if ( (*(_DWORD *)(v12 + 56) & 0x1000) != 0 )
    LOWORD(v19) = 0;
  else
    LOWORD(v19) = *(_WORD *)(v12 + 16) + 1;
  WORD1(v19) = *(_WORD *)(v12 + 372);
  if ( ((int (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[39])(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 24LL) + 1992LL),
         v18) < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v14, v13, v15, v16);
    v17[7] = v18;
    v17[3] = 270LL;
    v17[4] = 46LL;
    v17[5] = this;
    v17[6] = a2;
    WdLogEvent5_WdCriticalError(v17);
  }
  operator delete[](v10);
  *((_QWORD *)a2 + 54) = 0LL;
}
