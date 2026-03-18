/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C006F770
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C002F414 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C004F850 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, union _LARGE_INTEGER *a3)
{
  struct VIDMM_SEGMENT *QuadPart; // r9
  __int64 ByteCount; // rbx
  VIDMM_GLOBAL *v6; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v7; // rdx

  QuadPart = (struct VIDMM_SEGMENT *)a3[1].QuadPart;
  ByteCount = a1->ByteCount;
  v6 = (VIDMM_GLOBAL *)*((_QWORD *)QuadPart + 1);
  VIDMM_GLOBAL::MemoryTransfer(
    v6,
    (struct _VIDMM_GLOBAL_ALLOC *)a3->QuadPart,
    (unsigned int)ByteCount,
    a3[4].QuadPart,
    QuadPart,
    a3 + 2,
    0LL,
    0LL,
    0LL,
    a1,
    (struct _DXGK_TRANSFERFLAGS)a3[3].LowPart);
  v7 = (struct _VIDMM_GLOBAL_ALLOC *)a3->QuadPart;
  a3[4].QuadPart += ByteCount;
  VIDMM_GLOBAL::WaitForAllPagingEngines(v6, v7);
  return 0LL;
}
