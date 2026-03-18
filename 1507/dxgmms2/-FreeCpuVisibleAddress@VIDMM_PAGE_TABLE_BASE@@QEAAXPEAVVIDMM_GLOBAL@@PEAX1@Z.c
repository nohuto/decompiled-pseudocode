/*
 * XREFs of ?FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVVIDMM_GLOBAL@@PEAX1@Z @ 0x1C005FA20
 * Callers:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::FreeCpuVisibleAddress(
        SIZE_T **this,
        struct VIDMM_GLOBAL *a2,
        void *a3,
        struct _MDL *a4)
{
  _QWORD *v8; // rax
  SIZE_T *v9; // rdx
  SIZE_T v10; // rbx
  int v11; // eax
  VIDMM_CPU_HOST_APERTURE *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9

  if ( !this[1][16] )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
    v8[3] = 270LL;
    v8[4] = 48LL;
    v8[5] = this;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  v9 = this[1];
  v10 = v9[16];
  v11 = *(_DWORD *)(v10 + 56);
  if ( (v11 & 0x1001) == 0 )
  {
    if ( (v11 & 4) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 284LL) & 4) == 0 )
        MmUnmapIoSpace(a3, v9[2]);
    }
    else
    {
      v12 = *(VIDMM_CPU_HOST_APERTURE **)(v10 + 440);
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v12, (struct _VIDMM_GLOBAL_ALLOC *)v9);
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v12, (struct _VIDMM_GLOBAL_ALLOC *)this[1], v13, v14);
      MmUnmapLockedPages(a3, a4);
      ExFreePoolWithTag(a4, 0);
    }
  }
}
