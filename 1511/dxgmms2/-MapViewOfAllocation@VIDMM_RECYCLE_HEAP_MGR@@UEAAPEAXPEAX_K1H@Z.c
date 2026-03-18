/*
 * XREFs of ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00827D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0012004 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0061BB8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapViewOfAllocation(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned __int8 a5)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  void *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16, v8, v9, v10);
  v12 = VIDMM_RECYCLE_MULTIRANGE::Map(a2, a3, a4, a5);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v11, v13, v14);
  return v12;
}
