/*
 * XREFs of ?RotateCopyCallback@VIDMM_MEMORY_SEGMENT@@KAJPEAU_MDL@@0PEAX@Z @ 0x1C0098070
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004FC60 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0051974 (-MemoryTransfer@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INT.c)
 */

__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, union _LARGE_INTEGER *a3)
{
  struct VIDMM_SEGMENT *QuadPart; // r10
  VIDMM_GLOBAL *v5; // rdi
  SIZE_T ByteCount; // rsi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  _QWORD *v13; // rax

  QuadPart = (struct VIDMM_SEGMENT *)a3[1].QuadPart;
  v5 = (VIDMM_GLOBAL *)*((_QWORD *)QuadPart + 1);
  if ( (*(_BYTE *)(456LL * (*(_DWORD *)(a3->QuadPart + 76) & 0x3F) + *((_QWORD *)v5 + 5017) + 420) & 4) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( *(_BYTE *)(*((_QWORD *)v5 + 3) + 2091LL) )
  {
    a3[4].QuadPart += ByteCount;
  }
  else
  {
    VIDMM_GLOBAL::MemoryTransfer(
      v5,
      (struct _VIDMM_GLOBAL_ALLOC *)a3->QuadPart,
      ByteCount,
      a3[4].QuadPart,
      QuadPart,
      a3 + 2,
      0LL,
      0LL,
      0LL,
      a1,
      (DXGK_TRANSFERFLAGS)a3[3].LowPart);
    v8 = (struct _VIDMM_GLOBAL_ALLOC *)a3->QuadPart;
    a3[4].QuadPart += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines(v5, v8);
    if ( *(_BYTE *)(*((_QWORD *)v5 + 3) + 2091LL) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 384LL);
      if ( (*(_BYTE *)(v12 + 2828) & 4) != 0 )
      {
        v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12, v9, v10, v11);
        v13[5] = 0LL;
        v13[7] = 0LL;
        v13[3] = 270LL;
        v13[4] = 4LL;
        v13[6] = 10LL;
        WdLogEvent5_WdCriticalError(v13);
      }
    }
  }
  return 0LL;
}
