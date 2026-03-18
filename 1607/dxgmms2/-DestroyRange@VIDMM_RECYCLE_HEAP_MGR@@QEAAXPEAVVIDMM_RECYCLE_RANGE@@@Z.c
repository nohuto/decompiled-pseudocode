/*
 * XREFs of ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F8D4
 * Callers:
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005DAD0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C005E2A0 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C006149C (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010188 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_p @ 0x1C001E0AC (Template_p.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _SLIST_ENTRY *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  VIDMM_RECYCLE_BLOCK *v7; // rcx
  __int64 v9; // rbx

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_p((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  v6 = WdLogNewEntry5_WdEvent(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = a2;
  WdLogEvent5_WdEvent(v6);
  v7 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)&a2[4].Next + 1);
  if ( (*(_QWORD *)v7)-- == 1LL )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v7);
  v9 = *((_QWORD *)this + 110);
  ++*(_DWORD *)(v9 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v9) >= *(_WORD *)(v9 + 16) )
  {
    ++*(_DWORD *)(v9 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v9 + 56))(a2, v9);
  }
  else
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v9, a2);
  }
}
