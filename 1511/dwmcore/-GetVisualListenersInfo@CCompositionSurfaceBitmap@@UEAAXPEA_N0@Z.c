/*
 * XREFs of ?GetVisualListenersInfo@CCompositionSurfaceBitmap@@UEAAXPEA_N0@Z @ 0x18000C0B0
 * Callers:
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x18000BB08 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::GetVisualListenersInfo(CCompositionSurfaceBitmap *this, bool *a2, bool *a3)
{
  GetVisualListenersInfoImpl(
    (CRenderTarget *)lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_,
    (__int64 *)this - 4,
    (char *)a2,
    (char *)a3);
}
