/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C006D478
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0045FA0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00493F0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C004B654 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        SIZE_T **this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        struct _MDL *a4)
{
  SIZE_T *v8; // rdx
  SIZE_T v9; // rbx
  int v10; // eax
  VIDMM_CPU_HOST_APERTURE *v11; // rbx
  _QWORD *v12; // rax

  if ( !this[1][17] )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v12[3] = 270LL;
    v12[4] = 48LL;
    v12[5] = this;
    v12[6] = 0LL;
    v12[7] = 0LL;
    WdLogEvent5_WdCriticalError(v12);
  }
  v8 = this[1];
  v9 = v8[17];
  v10 = *(_DWORD *)(v9 + 56);
  if ( (v10 & 0x1001) == 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 300LL) & 8) == 0 )
        MmUnmapIoSpace(a3, v8[2]);
    }
    else
    {
      v11 = *(VIDMM_CPU_HOST_APERTURE **)(v9 + 472);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)v8);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v11, (struct _VIDMM_GLOBAL_ALLOC *)this[1]);
      MmUnmapLockedPages(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
