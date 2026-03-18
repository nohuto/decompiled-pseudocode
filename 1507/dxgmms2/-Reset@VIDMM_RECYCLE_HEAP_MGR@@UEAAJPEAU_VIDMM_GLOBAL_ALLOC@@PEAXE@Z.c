/*
 * XREFs of ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C00690F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0069158 (-Reset@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_MGR::Reset(
        VIDMM_RECYCLE_HEAP_MGR *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        VIDMM_RECYCLE_MULTIRANGE *a3,
        __int64 a4)
{
  unsigned __int8 v5; // di
  __int64 v7; // rdx
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v5 = a4;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), (__int64)a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v7);
  v9 = VIDMM_RECYCLE_MULTIRANGE::Reset(a3, a2, v5);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v8, v10, v11);
  return v9;
}
