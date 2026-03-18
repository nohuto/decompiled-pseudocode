/*
 * XREFs of ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C006D51C
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C004B6A0 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C006D5D0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

PVOID __fastcall VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        PMDL *a3)
{
  _QWORD *v3; // r9
  __int64 v6; // rcx
  int v7; // eax
  VIDMM_CPU_HOST_APERTURE *v8; // rbp
  struct VIDMM_ALLOC *v9; // rdx
  __int64 v10; // rcx
  PMDL v11; // rdi
  PVOID result; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 1);
  *a3 = 0LL;
  v6 = v3[17];
  if ( !v6 )
    return 0LL;
  v7 = *(_DWORD *)(v6 + 56);
  if ( (v7 & 0x1001) != 0 )
    return *(PVOID *)(**((_QWORD **)this + 2) + 16LL);
  if ( (v7 & 0x2000) != 0 )
  {
    v8 = *(VIDMM_CPU_HOST_APERTURE **)(v6 + 472);
    v9 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 2);
    MemoryDescriptorList = 0LL;
    if ( VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture((VIDMM_GLOBAL *)v6, v9, v8, &MemoryDescriptorList) >= 0 )
    {
      v11 = MemoryDescriptorList;
      result = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
      if ( result )
      {
        *a3 = v11;
        return result;
      }
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v8, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v8, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      ExFreePoolWithTag(v11, 0);
    }
    v14 = WdLogNewEntry5_WdWarning(v10);
    WdLogEvent5_WdWarning(v14);
    return 0LL;
  }
  if ( (v7 & 4) == 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2, a3, v3);
    v13[3] = 270LL;
    v13[4] = 48LL;
    v13[5] = this;
    v13[6] = 0LL;
    v13[7] = 0LL;
    WdLogEvent5_WdCriticalError(v13);
    return 0LL;
  }
  result = (PVOID)(*(_QWORD *)(v6 + 32) + v3[18]);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 300LL) & 8) == 0 )
    return (PVOID)MmMapIoSpaceEx(result, v3[2], 1028LL);
  return result;
}
