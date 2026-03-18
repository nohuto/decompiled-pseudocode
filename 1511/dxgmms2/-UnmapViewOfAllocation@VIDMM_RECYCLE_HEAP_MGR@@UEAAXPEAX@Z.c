/*
 * XREFs of ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0082D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0012004 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061C68 (-Unmap@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::UnmapViewOfAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
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
  VIDMM_RECYCLE_MULTIRANGE::Unmap(a2);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v8, v9, v10);
}
