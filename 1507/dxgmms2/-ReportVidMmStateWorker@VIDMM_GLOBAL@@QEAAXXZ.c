/*
 * XREFs of ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F68
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0005CD4 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReportState@VIDMM_DMA_POOL@@QEAAXXZ @ 0x1C005A0E0 (-ReportState@VIDMM_DMA_POOL@@QEAAXXZ.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C0062FE4 (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0068F5C (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0070F58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0070FB8 (-ReportSegmentState@VIDMM_SEGMENT@@QEAAXXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ReportVidMmStateWorker(VIDMM_GLOBAL *this)
{
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 k; // rdi
  struct _LIST_ENTRY *m; // rdi
  char *v6; // rdi
  char *n; // rbx
  CVirtualAddressAllocator *v8; // rcx
  _BYTE v9[40]; // [rsp+20h] [rbp-28h] BYREF

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
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v9,
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( m = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        m != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        m = m->Flink )
  {
    VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates((VIDMM_RECYCLE_HEAP_MGR *)&m[-43].Blink);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED((DXGAUTOPUSHLOCKSHARED *)v9, (VIDMM_GLOBAL *)((char *)this + 40648));
  v6 = (char *)this + 40688;
  for ( n = (char *)*((_QWORD *)this + 5086); n != v6; n = *(char **)n )
  {
    v8 = (CVirtualAddressAllocator *)*((_QWORD *)n + 51);
    if ( v8 )
      CVirtualAddressAllocator::ReportVaAllocatorState(v8);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
}
