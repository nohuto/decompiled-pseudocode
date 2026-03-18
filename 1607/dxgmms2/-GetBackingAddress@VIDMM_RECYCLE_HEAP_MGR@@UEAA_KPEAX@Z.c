/*
 * XREFs of ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C0095990
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ @ 0x1C00959DC (-GetBackingAddress@VIDMM_RECYCLE_MULTIRANGE@@QEAA_KXZ.c)
 */

unsigned __int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::GetBackingAddress(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  unsigned __int64 BackingAddress; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11, v3, v4, v5);
  BackingAddress = VIDMM_RECYCLE_MULTIRANGE::GetBackingAddress(a2);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6, v8, v9);
  return BackingAddress;
}
