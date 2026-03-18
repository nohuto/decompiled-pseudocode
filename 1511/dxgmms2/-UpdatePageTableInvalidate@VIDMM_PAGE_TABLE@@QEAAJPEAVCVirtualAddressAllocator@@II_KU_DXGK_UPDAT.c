/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C003DA64 (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 * Callees:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C003DDD4 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C003DE20 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0044F20 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rsi
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  unsigned int v12; // r9d
  enum _DXGK_PAGETABLEUPDATEMODE v13; // r10d
  struct VIDMM_ALLOC *v14; // r11
  unsigned int v15; // r8d
  __int64 v17; // rax
  void *v18; // [rsp+90h] [rbp-28h] BYREF
  unsigned int v19; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+C8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v19, &v20, &v18) < 0 )
  {
    v17 = WdLogNewEntry5_WdError();
    *(_QWORD *)(v17 + 24) = 3270LL;
    WdLogEvent5_WdError(v17);
    return 3221225473LL;
  }
  else
  {
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
    VIDMM_GLOBAL::UpdatePageTable(
      v6,
      *(_DWORD *)this & 7,
      KmdProcessHandle,
      0LL,
      v14,
      v14,
      (unsigned __int64)v14,
      a3,
      a4,
      (struct _DXGK_PTE *)v14,
      (struct _DXGK_PTE *)v14,
      v12,
      v19,
      v20,
      v13,
      a5,
      a6);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v15, v20, v18);
    return 0LL;
  }
}
