/*
 * XREFs of ?EvictRootPageTable@CVirtualAddressAllocator@@QEAAXIE@Z @ 0x1C000ECEC
 * Callers:
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1C0039A20 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     ?PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C005155C (-PurgePageTables@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 * Callees:
 *     ?EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z @ 0x1C005F2A4 (-EvictPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_KEE@Z.c)
 */

void __fastcall CVirtualAddressAllocator::EvictRootPageTable(CVirtualAddressAllocator *this, unsigned int a2, char a3)
{
  VIDMM_PAGE_DIRECTORY *v3; // r10

  v3 = *(VIDMM_PAGE_DIRECTORY **)(32LL * a2 + *((_QWORD *)this + 12));
  if ( v3 )
    VIDMM_PAGE_DIRECTORY::EvictPageDirectory(v3, this, 0LL, 1u, a3);
}
