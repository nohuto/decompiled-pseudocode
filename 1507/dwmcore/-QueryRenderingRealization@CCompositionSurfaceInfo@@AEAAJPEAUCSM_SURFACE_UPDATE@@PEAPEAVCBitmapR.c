/*
 * XREFs of ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180086984
 * Callers:
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1800075B0 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x180086E58 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800869F8 (-FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::QueryRenderingRealization(
        CCompositionSurfaceInfo *this,
        struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  int CompositionSurfaceRenderingRealization; // eax
  unsigned int v7; // ebx
  int Realization; // eax

  *a3 = 0LL;
  CompositionSurfaceRenderingRealization = QueryCompositionSurfaceRenderingRealization(*((_QWORD *)this + 4));
  v7 = CompositionSurfaceRenderingRealization;
  if ( CompositionSurfaceRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionSurfaceRenderingRealization, 0x1DDu);
  }
  else if ( *((_DWORD *)a2 + 46) )
  {
    Realization = CCompositionSurfaceInfo::FindRealization(this, a2, a3);
    v7 = Realization;
    if ( Realization < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Realization, 0x1EDu);
  }
  return v7;
}
