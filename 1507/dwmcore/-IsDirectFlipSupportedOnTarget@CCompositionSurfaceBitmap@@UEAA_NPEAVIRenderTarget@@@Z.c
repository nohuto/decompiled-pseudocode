/*
 * XREFs of ?IsDirectFlipSupportedOnTarget@CCompositionSurfaceBitmap@@UEAA_NPEAVIRenderTarget@@@Z @ 0x180008F10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18000523C (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsDirectFlipSupportedOnTarget(
        CCompositionSurfaceBitmap *this,
        struct IRenderTarget *a2)
{
  __int64 v2; // rcx
  char result; // al

  v2 = *((_QWORD *)this + 49);
  result = 0;
  if ( v2 )
    return CCompositionSurfaceInfo::CBindInfo::IsDirectFlipSupportedOnTarget(
             (CCompositionSurfaceInfo::CBindInfo *)(v2 + 48),
             a2);
  return result;
}
