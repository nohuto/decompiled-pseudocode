/*
 * XREFs of ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C009EDA8
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00999EC (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C009F438 (-MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z.c)
 * Callees:
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::AllocateAt(
        VIDMM_LINEAR_POOL *this,
        union _LARGE_INTEGER a2,
        unsigned __int64 a3,
        __int64 a4,
        void **a5)
{
  void *v6; // [rsp+40h] [rbp-28h]
  union _LARGE_INTEGER v7; // [rsp+80h] [rbp+18h] BYREF

  v6 = (void *)a4;
  LOBYTE(a4) = 1;
  return VIDMM_LINEAR_POOL::Allocate(this, a3, 0LL, a4, a2.QuadPart, a2.QuadPart + a3, 0, 0, v6, &v7, a5);
}
