/*
 * XREFs of ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C0067E30
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0067E7C (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 */

void *__fastcall VIDMM_RECYCLE_HEAP_MGR::MapLocked(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  void *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11, v5);
  v7 = VIDMM_RECYCLE_MULTIRANGE::MapLocked(a2);
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v6, v8, v9);
  return v7;
}
