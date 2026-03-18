/*
 * XREFs of ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784
 * Callers:
 *     ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48 (-CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z.c)
 *     ?MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z @ 0x1C0068270 (-MergeRanges@VIDMM_RECYCLE_MULTIRANGE@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@0@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00686A4 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 *     ?ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA?AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0069EA0 (-ShrinkOnTailRangeFree@VIDMM_RECYCLE_BLOCK@@QEAA-AW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@PEAVVIDMM.c)
 * Callees:
 *     Template_p @ 0x1C0006E98 (Template_p.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010858 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::DestroyRange(VIDMM_RECYCLE_HEAP_MGR *this, struct _SLIST_ENTRY *a2, __int64 a3)
{
  __int64 v5; // rax
  VIDMM_RECYCLE_BLOCK *v6; // rcx
  __int64 v8; // rbx

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    Template_p((__int64)this, &EventRecycleRangeDestroy, a3, a2);
  v5 = WdLogNewEntry5_WdEvent(this, a2);
  *(_QWORD *)(v5 + 24) = a2;
  WdLogEvent5_WdEvent(v5);
  v6 = (VIDMM_RECYCLE_BLOCK *)*((_QWORD *)&a2[4].Next + 1);
  if ( (*(_QWORD *)v6)-- == 1LL )
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'(v6);
  v8 = *((_QWORD *)this + 50);
  ++*(_DWORD *)(v8 + 28);
  if ( ExQueryDepthSList((PSLIST_HEADER)v8) < *(_WORD *)(v8 + 16) )
  {
    ExpInterlockedPushEntrySList((PSLIST_HEADER)v8, a2);
  }
  else
  {
    ++*(_DWORD *)(v8 + 32);
    (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v8 + 56))(a2, v8);
  }
}
