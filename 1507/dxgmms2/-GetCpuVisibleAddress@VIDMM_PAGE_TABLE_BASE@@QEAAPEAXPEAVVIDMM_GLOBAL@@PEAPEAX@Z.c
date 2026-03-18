/*
 * XREFs of ?GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAPEAX@Z @ 0x1C005FEDC
 * Callers:
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 * Callees:
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 */

PVOID __fastcall VIDMM_PAGE_TABLE_BASE::GetCpuVisibleAddress(
        VIDMM_PAGE_TABLE_BASE *this,
        struct VIDMM_GLOBAL *a2,
        PMDL *a3)
{
  _QWORD *v3; // r9
  __int64 v6; // rcx
  PVOID result; // rax
  int v8; // eax
  struct VIDMM_CPU_HOST_APERTURE *v9; // rbp
  __int64 **v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  PMDL v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  PMDL MemoryDescriptorList; // [rsp+40h] [rbp+8h] BYREF

  v3 = (_QWORD *)*((_QWORD *)this + 1);
  *a3 = 0LL;
  v6 = v3[16];
  if ( !v6 )
    return 0LL;
  v8 = *(_DWORD *)(v6 + 56);
  if ( (v8 & 0x1001) != 0 )
    return *(PVOID *)(**((_QWORD **)this + 2) + 16LL);
  if ( (v8 & 0x2000) != 0 )
  {
    v9 = *(struct VIDMM_CPU_HOST_APERTURE **)(v6 + 440);
    v10 = (__int64 **)*((_QWORD *)this + 2);
    MemoryDescriptorList = 0LL;
    if ( (int)VIDMM_GLOBAL::BuildMdlForAllocInCpuHostAperture((VIDMM_GLOBAL *)v6, v10, v9, &MemoryDescriptorList) < 0 )
    {
LABEL_6:
      v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      WdLogEvent5_WdWarning(v14);
      return 0LL;
    }
    v15 = MemoryDescriptorList;
    result = MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmWriteCombined, 0LL, 0, 0x40000010u);
    if ( !result )
    {
      VIDMM_CPU_HOST_APERTURE::UnmapRange(v9, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1));
      VIDMM_CPU_HOST_APERTURE::ReleaseRange(v9, *((struct _VIDMM_GLOBAL_ALLOC **)this + 1), v16, v17);
      ExFreePoolWithTag(v15, 0);
      goto LABEL_6;
    }
    *a3 = v15;
  }
  else
  {
    if ( (v8 & 4) == 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, a2);
      v18[3] = 270LL;
      v18[4] = 48LL;
      v18[5] = this;
      v18[6] = 0LL;
      v18[7] = 0LL;
      WdLogEvent5_WdCriticalError(v18);
      return 0LL;
    }
    result = (PVOID)(*(_QWORD *)(v6 + 32) + v3[17]);
    if ( (*(_DWORD *)(*((_QWORD *)a2 + 3) + 284LL) & 4) == 0 )
      return (PVOID)MmMapIoSpaceEx(result, v3[2], 1028LL);
  }
  return result;
}
