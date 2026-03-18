/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0079F8C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        struct CVirtualAddressAllocator *a2,
        void *a3,
        __int64 a4,
        struct VIDMM_ALLOC *a5,
        unsigned __int64 a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned __int64 a10,
        struct _DXGK_UPDATEPAGETABLEFLAGS a11)
{
  VIDMM_GLOBAL *v11; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  struct VIDMM_ALLOC *v21; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v22; // r11
  enum _DXGK_PAGETABLEUPDATEMODE v23; // ecx
  void *v24; // rbx
  __int64 v25; // r8
  unsigned __int64 v26; // [rsp+90h] [rbp-38h] BYREF
  void *v27; // [rsp+98h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+D8h] [rbp+10h] BYREF

  v11 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, a2, &v28, &v26, &v27) >= 0 )
  {
    v21 = 0LL;
    if ( a7 == 1 )
    {
      v21 = a5;
      v22 = **(struct _VIDMM_GLOBAL_ALLOC ***)a5;
    }
    else
    {
      v22 = 0LL;
      if ( a7 == 3 )
        v22 = a5;
    }
    if ( (*((_BYTE *)v11 + 40608) & 8) != 0 )
      v23 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v23 = (int)(*(_DWORD *)a1 << 16) >> 29;
    v24 = (void *)v26;
    VIDMM_GLOBAL::UpdatePageTable(
      v11,
      *(_DWORD *)a1 & 7,
      a3,
      *(struct VIDMM_MAPPED_VA_RANGE **)(a4 + 16),
      v21,
      v22,
      a6,
      a8,
      a9,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * a8),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v28,
      v26,
      v23,
      a10,
      a11);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, a2, v25, v24, v27);
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = 3339LL;
    WdLogEvent5_WdError(v19);
    return 3221225473LL;
  }
}
