/*
 * XREFs of ?VerifyAllocationIsIdle@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007D130
 * Callers:
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0048090 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234KU_DXGK_TRANSFERFLAGS@@@Z @ 0x1C00490BC (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z @ 0x1C0083BD0 (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_K11PEAU_MDL@@H@Z.c)
 * Callees:
 *     ?IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00471FC (-IsPagingOperationPending@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VerifyAllocationIsIdle(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rax

  if ( VIDMM_GLOBAL::IsPagingOperationPending(this, a2, 0) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v4, v3, v5, v6);
    v7[3] = 270LL;
    v7[4] = 32LL;
    v7[5] = a2;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
}
