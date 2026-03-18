/*
 * XREFs of ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C006A7C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00108DC (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C0068AE4 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 *     ?Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z @ 0x1C006A630 (-Unlock@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0E@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnlockAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        __int64 a4,
        char a5)
{
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  VIDMM_RECYCLE_HEAP_MGR *v12; // rcx
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v8);
  VIDMM_RECYCLE_MULTIRANGE::Unlock(a2, a3, a4, a5);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v9, v10, v11);
  if ( VIDMM_RECYCLE_HEAP_MGR::IsOverLimits() )
    VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(v12, 1);
}
