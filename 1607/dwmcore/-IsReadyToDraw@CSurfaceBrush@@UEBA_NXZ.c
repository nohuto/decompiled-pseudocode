/*
 * XREFs of ?IsReadyToDraw@CSurfaceBrush@@UEBA_NXZ @ 0x18013ABE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 */

char __fastcall CSurfaceBrush::IsReadyToDraw(CSurfaceBrush *this)
{
  __int64 v1; // rax
  char v2; // bl
  CCompositionSurfaceInfo *v3; // rcx

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(CCompositionSurfaceInfo **)(v1 + 520);
    if ( v3 )
      return CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v3) != 0LL;
  }
  return v2;
}
