/*
 * XREFs of ?MarkFullDirty@CBitmapRealization@@UEAAXXZ @ 0x1800834C0
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18002EAA0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x18006C384 (-CreateNewRealization@CBindInfo@CCompositionSurfaceInfo@@IEAAJ_NAEBUCSM_BUFFER_ATTRIBUTES@@AEBUC.c)
 *     ?MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ @ 0x18015D0A0 (-MarkFullDirty@CDxHandleStereoBitmapRealization@@UEAAXXZ.c)
 *     ?MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ @ 0x18015FE10 (-MarkFullDirty@CDxHandleDecodeBitmapRealization@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ @ 0x1800302E0 (-MarkFullInvalid@CD2DBitmapCache@@UEAAXXZ.c)
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
