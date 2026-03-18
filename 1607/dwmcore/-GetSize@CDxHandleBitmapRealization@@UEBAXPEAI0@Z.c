/*
 * XREFs of ?GetSize@CDxHandleBitmapRealization@@UEBAXPEAI0@Z @ 0x1800549E0
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180054B70 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z @ 0x1800989C8 (-DirtyRenderingRealization@CCompositionSurfaceInfo@@AEAA_N_NPEAUHRGN__@@PEAVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDxHandleBitmapRealization::GetSize(
        CDxHandleBitmapRealization *this,
        unsigned int *a2,
        unsigned int *a3)
{
  __int64 v3; // rcx
  CD2DBitmap *v4; // rcx
  void (__fastcall *v5)(CD2DBitmap *__hidden, unsigned int *, unsigned int *); // rax

  v3 = *((_QWORD *)this + 38);
  if ( v3 )
  {
    v4 = (CD2DBitmap *)(v3 + 104);
    v5 = *(void (__fastcall **)(CD2DBitmap *__hidden, unsigned int *, unsigned int *))(*(_QWORD *)v4 + 48LL);
    if ( v5 == CD2DBitmap::GetSize )
      CD2DBitmap::GetSize(v4, a2, a3);
    else
      v5(v4, a2, a3);
  }
  else
  {
    *a2 = 0;
    *a3 = 0;
  }
}
