/*
 * XREFs of ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C0075B8C
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0070A38 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00760A0 (-MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C003EA8C (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::AllocateAt(
        VIDMM_LINEAR_POOL *this,
        union _LARGE_INTEGER a2,
        __int64 a3,
        void *a4,
        void **a5)
{
  union _LARGE_INTEGER v6; // [rsp+80h] [rbp+18h] BYREF

  return VIDMM_LINEAR_POOL::Allocate(this, a3, 0, 1, a2.QuadPart, a2.QuadPart + a3, 0, 0, a4, &v6, a5);
}
