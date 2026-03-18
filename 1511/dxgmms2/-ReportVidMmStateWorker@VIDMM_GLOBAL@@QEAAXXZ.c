/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007BDA8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C00144B8 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C007FEF8 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0081AA4 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0082B2C (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0084FF4 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0085054 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  struct _LIST_ENTRY *m; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rdi
  char *n; // rbx
  CVirtualAddressAllocator *v13; // rcx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 926); i = (unsigned int)(i + 1) )
    VIDMM_SEGMENT::ReportSegment(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * i));
  for ( j = 0LL; (unsigned int)j < *((_DWORD *)this + 1604); j = (unsigned int)(j + 1) )
  {
    if ( *((_QWORD *)this + j + 143) )
      VIDMM_DMA_POOL::ReportState(*((VIDMM_DMA_POOL **)this + j + 79));
  }
  for ( k = 0LL; (unsigned int)k < *((_DWORD *)this + 926); k = (unsigned int)(k + 1) )
    VIDMM_SEGMENT::ReportSegmentState(*(VIDMM_SEGMENT **)(*((_QWORD *)this + 464) + 8 * k));
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v14,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock,
    a3,
    a4);
  for ( m = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        m != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        m = m->Flink )
  {
    VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&m[-44]);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v14, (struct _KTHREAD **)this + 5088, v9, v10);
  v11 = (char *)this + 40744;
  for ( n = (char *)*((_QWORD *)this + 5093); n != v11; n = *(char **)n )
  {
    v13 = (CVirtualAddressAllocator *)*((_QWORD *)n + 51);
    if ( v13 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v13);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
