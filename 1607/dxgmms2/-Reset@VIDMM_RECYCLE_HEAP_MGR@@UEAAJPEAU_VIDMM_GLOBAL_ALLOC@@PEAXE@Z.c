/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C005FD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005EC14 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        char a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 896));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16, v7, v8, v9);
  LOBYTE(v10) = a4;
  v12 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, v10);
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v11, v13, v14);
  return v12;
}
