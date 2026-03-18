/*
 * XREFs of ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC
 * Callers:
 *     ?AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001133C (-AcquireRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_NPEAPEAU2@@Z @ 0x1C0039BC8 (-PageInOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_VIDMM_PLACEMENT_RESTRICTION@@_NPEA_N.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C004EBD8 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C005FA20 (-FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z.c)
 *     ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C005FEDC (-GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006E3A0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C006FEEC (-InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::ReleaseRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  unsigned int v6; // eax
  __int64 v8; // rbx
  int v9; // edi
  __int64 v10; // rax

  v4 = *((_DWORD *)a2 + 114);
  v6 = *((_DWORD *)a2 + 115);
  if ( v4 == -1 || v6 == -1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = a2;
    WdLogEvent5_WdAssertion(v10);
  }
  else
  {
    v8 = v6;
    v9 = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * v6);
    DXGPUSHLOCK::AcquireExclusive((VIDMM_CPU_HOST_APERTURE *)((char *)this + 96));
    *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v8) = *((_DWORD *)this + 16);
    *((_DWORD *)this + 15) += v9;
    *((_DWORD *)this + 16) = v4;
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)a2 + 114) = -1;
    *((_DWORD *)a2 + 115) = -1;
  }
}
