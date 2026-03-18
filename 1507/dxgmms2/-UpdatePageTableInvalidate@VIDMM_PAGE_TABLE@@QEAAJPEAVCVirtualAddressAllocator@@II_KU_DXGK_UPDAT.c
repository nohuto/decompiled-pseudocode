/*
 * XREFs of ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0063FEC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005E1EC (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z @ 0x1C005F5EC (-EvictPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_KE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z @ 0x1C0063D48 (-UncommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_K1@Z.c)
 * Callees:
 *     ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C0010608 (-GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ.c)
 *     ?UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_KIIPEAU_DXGK_PTE@@5II4W4_DXGK_PAGETABLEUPDATEMODE@@4U_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C0054E14 (-UpdatePageTable@VIDMM_GLOBAL@@QEAAXIPEAXPEAUVIDMM_MAPPED_VA_RANGE@@PEAUVIDMM_ALLOC@@PEAU_VIDMM_.c)
 *     ?FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z @ 0x1C005FB04 (-FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@I_KPEAX@Z.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::UpdatePageTableInvalidate(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        UINT a3,
        LONG a4,
        unsigned __int64 a5,
        DXGK_UPDATEPAGETABLEFLAGS a6)
{
  VIDMM_GLOBAL *v6; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  VIDMM_GLOBAL *KmdProcessHandle; // rax
  unsigned int v15; // r9d
  enum _DXGK_PAGETABLEUPDATEMODE v16; // r10d
  struct VIDMM_ALLOC *v17; // r11
  __int64 v18; // r8
  void *v19; // [rsp+90h] [rbp-28h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+8h] BYREF
  unsigned __int64 v21; // [rsp+C8h] [rbp+10h] BYREF

  v6 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 8);
  if ( (int)VIDMM_PAGE_TABLE_BASE::GetDriverUpdateAddress(this, a2, &v20, &v21, &v19) >= 0 )
  {
    KmdProcessHandle = CVirtualAddressAllocator::GetKmdProcessHandle((VIDMM_GLOBAL **)a2);
    VIDMM_GLOBAL::UpdatePageTable(
      v6,
      *(_DWORD *)this & 7,
      KmdProcessHandle,
      0LL,
      v17,
      v17,
      (UINT64)v17,
      a3,
      a4,
      (struct _DXGK_PTE *)v17,
      (struct _DXGK_PTE *)v17,
      v15,
      v20,
      v21,
      v16,
      a5,
      a6);
    VIDMM_PAGE_TABLE_BASE::FreeDriverUpdateAddress(this, a2, v18, (void *)v21, (struct _MDL *)v19);
    return 0LL;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v12 + 24) = 3296LL;
    WdLogEvent5_WdError(v12);
    return 3221225473LL;
  }
}
