/*
 * XREFs of ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974
 * Callers:
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0068880 (-RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0098070 (-RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z @ 0x1C0099070 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEA_NPEAX@Z.c)
 * Callees:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051824 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 */

void __fastcall VIDMM_GLOBAL::MemoryTransfer(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        SIZE_T a3,
        unsigned __int64 a4,
        struct VIDMM_SEGMENT *a5,
        union _LARGE_INTEGER *a6,
        struct _MDL *a7,
        struct VIDMM_SEGMENT *a8,
        union _LARGE_INTEGER *a9,
        struct _MDL *a10,
        DXGK_TRANSFERFLAGS a11)
{
  int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // [rsp+58h] [rbp-20h]

  if ( a2 )
  {
    VIDMM_GLOBAL::MemoryTransferInternal(
      this,
      *((_DWORD *)a2 + 19) & 0x3F,
      a2,
      a3,
      a4,
      a5,
      a6,
      a7,
      a8,
      a9,
      a10,
      v15,
      a11);
    v13 = *((_DWORD *)a2 + 19);
    v14 = *((_QWORD *)this + 5017) + 456LL * (v13 & 0x3F);
    if ( *((_QWORD *)a2 + 1) > (unsigned __int64)(qword_1C00353F0 - *(_QWORD *)(v14 + 432)) )
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v13 & 0x3F, 0LL, 0LL, 0LL, 0, 0);
    *(_QWORD *)(v14 + 432) += *((_QWORD *)a2 + 1);
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransferInternal(this, 0LL, 0LL, a3, a4, a5, a6, a7, a8, a9, a10, v15, a11);
  }
}
