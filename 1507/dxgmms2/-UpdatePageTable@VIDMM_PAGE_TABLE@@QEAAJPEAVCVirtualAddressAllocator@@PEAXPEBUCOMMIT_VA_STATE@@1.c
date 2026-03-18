/*
 * XREFs of ?UpdatePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEAXPEBUCOMMIT_VA_STATE@@1_KW4VIDMM_VAD_OWNER_TYPE@@II3U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063E68
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTable(
        VIDMM_PAGE_TABLE_BASE *a1,
        struct CVirtualAddressAllocator *a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
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
  __int64 v16; // rcx
  __int64 v17; // rax
  struct VIDMM_ALLOC *v19; // rdi
  struct VIDMM_ALLOC *v20; // r11
  enum _DXGK_PAGETABLEUPDATEMODE v21; // ecx
  void *v22; // rbx
  __int64 v23; // r8
  unsigned __int64 v24; // [rsp+90h] [rbp-38h] BYREF
  void *v25; // [rsp+98h] [rbp-30h] BYREF
  unsigned int v26; // [rsp+D8h] [rbp+10h] BYREF

  v11 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(a1, a2, &v26, &v24, &v25) >= 0 )
  {
    v19 = 0LL;
    if ( a7 == 1 )
    {
      v19 = a5;
      v20 = **(struct VIDMM_ALLOC ***)a5;
    }
    else
    {
      v20 = 0LL;
      if ( a7 == 3 )
        v20 = a5;
    }
    if ( (*((_BYTE *)v11 + 40552) & 8) != 0 )
      v21 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    else
      v21 = (int)(*(_DWORD *)a1 << 16) >> 29;
    v22 = (void *)v24;
    VIDMM_GLOBAL::UpdatePageTable(
      v11,
      *(_DWORD *)a1 & 7,
      a3,
      *(struct VIDMM_MAPPED_VA_RANGE **)(a4 + 16),
      v19,
      v20,
      a6,
      a8,
      a9,
      (struct _DXGK_PTE *)(*((_QWORD *)a1 + 3) + 16LL * a8),
      0LL,
      (*(_DWORD *)a1 >> 7) & 0x1F,
      v26,
      v24,
      v21,
      a10,
      a11);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(a1, a2, v23, v22, (struct _MDL *)v25);
    return 0LL;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = 3365LL;
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
}
