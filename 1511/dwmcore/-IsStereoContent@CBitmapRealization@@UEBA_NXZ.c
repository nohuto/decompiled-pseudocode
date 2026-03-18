/*
 * XREFs of ?IsStereoContent@CBitmapRealization@@UEBA_NXZ @ 0x18000DBF0
 * Callers:
 *     ?CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z @ 0x180006C10 (-CheckIndependentFlipSupport@CDirectFlipInfo@@IEAAJPEA_N@Z.c)
 *     ?IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C3C0 (-IsStereoContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z @ 0x18001BC5C (-IsDirectFlipSupportedOnTarget@CBindInfo@CCompositionSurfaceInfo@@QEAA_NPEAVIRenderTarget@@@Z.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@AEBW4StereoContext@@@Z @ 0x18007AA50 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DDeviceLevel1@@AEBU_LUID@@AEBVDisplayId@@A.c)
 * Callees:
 *     <none>
 */

bool __fastcall CBitmapRealization::IsStereoContent(CBitmapRealization *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_DWORD *)this + 46) == 2 )
    return *((_DWORD *)this + 52) != 0;
  return v1;
}
