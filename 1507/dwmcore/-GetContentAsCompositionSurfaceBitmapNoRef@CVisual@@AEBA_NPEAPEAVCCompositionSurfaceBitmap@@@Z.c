/*
 * XREFs of ?GetContentAsCompositionSurfaceBitmapNoRef@CVisual@@AEBA_NPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180035F28
 * Callers:
 *     ?HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ @ 0x180036470 (-HasSingleD2DBitmapOrPrimitiveGroupInternal@CVisual@@AEAA_NXZ.c)
 * Callees:
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18004F290 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CVisual::GetContentAsCompositionSurfaceBitmapNoRef(
        CVisual *this,
        struct CCompositionSurfaceBitmap **a2)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 (__fastcall *v6)(__int64, __int64); // rbp
  char v7; // al

  v2 = *((_QWORD *)this + 47);
  v3 = 0;
  if ( v2 )
  {
    v6 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 48LL);
    if ( v6 == CRenderData::IsOfType )
      v7 = CRenderData::IsOfType(v2, 79LL);
    else
      v7 = v6(v2, 79LL);
    if ( v7 )
    {
      v3 = 1;
      *a2 = (struct CCompositionSurfaceBitmap *)*((_QWORD *)this + 47);
    }
  }
  return v3;
}
