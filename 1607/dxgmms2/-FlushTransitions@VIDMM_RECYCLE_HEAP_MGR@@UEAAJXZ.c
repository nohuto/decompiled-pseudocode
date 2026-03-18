/*
 * XREFs of ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C005FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::FlushTransitions(VIDMM_RECYCLE_HEAP_MGR *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9, v2, v3, v4);
  VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(this, 0, 0);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v5, v6, v7);
  return 0LL;
}
