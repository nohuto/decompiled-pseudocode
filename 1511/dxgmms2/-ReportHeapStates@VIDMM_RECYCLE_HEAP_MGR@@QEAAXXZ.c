/*
 * XREFs of ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0082B2C
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007BDA8 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0012004 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C0082A84 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11, v5, v6, v7);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 80));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 144));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 208));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 272));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 336));
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v8, v9, v10);
}
