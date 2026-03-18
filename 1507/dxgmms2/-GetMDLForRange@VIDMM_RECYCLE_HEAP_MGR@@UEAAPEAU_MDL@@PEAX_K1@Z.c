/*
 * XREFs of ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C0066B20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z @ 0x1C0066B88 (-GetMDLForRange@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAU_MDL@@_K0@Z.c)
 */

struct _MDL *__fastcall VIDMM_RECYCLE_HEAP_MGR::GetMDLForRange(
        VIDMM_RECYCLE_HEAP_MGR *this,
        VIDMM_RECYCLE_MULTIRANGE *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct _MDL *MDLForRange; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 416), a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13, v7);
  MDLForRange = VIDMM_RECYCLE_MULTIRANGE::GetMDLForRange(a2, a3, a4);
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13, v8, v10, v11);
  return MDLForRange;
}
