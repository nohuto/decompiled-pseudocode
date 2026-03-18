/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180046A20
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18014E050 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x18001B550 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x180087F0C (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(CBitmapRealization *this, const struct CRegion *a2)
{
  unsigned int v2; // esi
  __int64 (__fastcall *v5)(CD2DBitmapCache *, const struct CRegion *); // rbp
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 328)
    || (v7 = FastRegion::CRegion::Union((CBitmapRealization *)((char *)this + 336), a2), v2 = v7, v7 >= 0) )
  {
    v5 = *(__int64 (__fastcall **)(CD2DBitmapCache *, const struct CRegion *))(*((_QWORD *)this + 2) + 40LL);
    if ( v5 == CD2DBitmapCache::AddInvalidRegion )
      CD2DBitmapCache::AddInvalidRegion((CBitmapRealization *)((char *)this + 16), a2);
    else
      v5((CBitmapRealization *)((char *)this + 16), a2);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x7Fu);
    (*(void (__fastcall **)(CBitmapRealization *))(*(_QWORD *)this + 72LL))(this);
  }
  return v2;
}
