/*
 * XREFs of ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0068F5C
 * Callers:
 *     ?ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0052F68 (-ReportVidMmStateWorker@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ @ 0x1C0068EB4 (-ReportBlockStates@VIDMM_RECYCLE_HEAP@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ReportHeapStates(
        VIDMM_RECYCLE_HEAP_MGR *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9, v5);
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 16));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 80));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 144));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 208));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 272));
  VIDMM_RECYCLE_HEAP::ReportBlockStates((VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 336));
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v6, v7, v8);
}
