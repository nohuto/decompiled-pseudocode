/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800469D0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x180089A38 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x18014E5A0 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ @ 0x1801528E0 (-MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ @ 0x18001B380 (-MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CBitmapRealization::MarkFullDirty(CBitmapRealization *this)
{
  __int64 v1; // rax
  void (__fastcall *v2)(CD2DBitmapCache *); // rdi

  **((_DWORD **)this + 42) = 0;
  v1 = *((_QWORD *)this + 2);
  *((_BYTE *)this + 328) = 1;
  v2 = *(void (__fastcall **)(CD2DBitmapCache *))(v1 + 48);
  if ( v2 == CD2DBitmapCache::MarkFullInvalid )
    CD2DBitmapCache::MarkFullInvalid((CBitmapRealization *)((char *)this + 16));
  else
    v2((CBitmapRealization *)((char *)this + 16));
}
