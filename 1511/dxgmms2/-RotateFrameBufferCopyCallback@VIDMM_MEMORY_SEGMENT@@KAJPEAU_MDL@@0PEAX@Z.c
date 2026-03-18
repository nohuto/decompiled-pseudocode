/*
 * XREFs of ?RotateFrameBufferCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C005FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00472F0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0049524 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  struct VIDMM_SEGMENT *v3; // r10
  __int64 ByteCount; // rbx
  VIDMM_GLOBAL *v6; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdx

  v3 = (struct VIDMM_SEGMENT *)*((_QWORD *)a3 + 1);
  ByteCount = a2->ByteCount;
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)v3 + 1);
  VIDMM_GLOBAL::MemoryTransfer(
    v6,
    *(struct _VIDMM_GLOBAL_ALLOC **)a3,
    (unsigned int)ByteCount,
    *((char **)a3 + 4),
    0LL,
    0LL,
    a2,
    v3,
    (union _LARGE_INTEGER *)a3 + 2,
    0LL,
    *(DXGK_TRANSFERFLAGS *)(a3 + 24));
  v7 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
  *((_QWORD *)a3 + 4) += ByteCount;
  VIDMM_GLOBAL::WaitForAllPagingEngines(v6, v7);
  return 0LL;
}
