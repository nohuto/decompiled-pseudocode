/*
 * XREFs of ?GetKmdProcessHandle@CVirtualAddressAllocator@@QEAAPEAXXZ @ 0x1C00114EC
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDATEPAGETABLEFLAGS@@@Z @ 0x1C003D748 (-UpdatePageTableInvalidate@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@II_KU_DXGK_UPDAT.c)
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C003DF00 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003EEF0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C005405C (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 */

VIDMM_GLOBAL *__fastcall CVirtualAddressAllocator::GetKmdProcessHandle(VIDMM_GLOBAL **this)
{
  VIDMM_GLOBAL **v1; // r8
  unsigned int v3; // eax
  __int64 v4; // r8
  VIDMM_GLOBAL *KmdProcessHandle; // rax

  v1 = this;
  if ( !this[11] )
  {
    v3 = VIDMM_GLOBAL::AdapterId(this[8]);
    KmdProcessHandle = (VIDMM_GLOBAL *)VIDMM_PROCESS::GetKmdProcessHandle(*(VIDMM_PROCESS **)(v4 + 72), v3);
    v1[11] = KmdProcessHandle;
  }
  return v1[11];
}
