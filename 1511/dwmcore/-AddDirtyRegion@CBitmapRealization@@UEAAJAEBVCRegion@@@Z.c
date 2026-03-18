/*
 * XREFs of ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180083520
 * Callers:
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x18002EAA0 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 *     ?AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x18015CBD0 (-AddDirtyRegion@CDxHandleStereoBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x1800306B0 (-AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18006DCA4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CBitmapRealization::AddDirtyRegion(CBitmapRealization *this, const struct CRegion *a2)
{
  unsigned int v2; // esi
  __int64 (__fastcall *v5)(CD2DBitmapCache *, const struct CRegion *); // rbp
  int v7; // eax

  v2 = 0;
  if ( *((_BYTE *)this + 328)
    || (v7 = FastRegion::CRegion::Union(
               (const struct FastRegion::Internal::CRgnData **)this + 42,
               (const struct FastRegion::Internal::CRgnData **)a2),
        v2 = v7,
        v7 >= 0) )
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
