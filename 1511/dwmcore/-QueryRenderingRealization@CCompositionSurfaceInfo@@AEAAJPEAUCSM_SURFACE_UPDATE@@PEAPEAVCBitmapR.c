/*
 * XREFs of ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F0E4
 * Callers:
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18000BC80 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 * Callees:
 *     ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F158 (-FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CompositionSurfaceRenderingRealization, 0x1CBu);
  }
  else if ( *((_DWORD *)a2 + 46) )
  {
    Realization = CCompositionSurfaceInfo::FindRealization(this, a2, a3);
    v7 = Realization;
    if ( Realization < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Realization, 0x1DAu);
  }
  return v7;
}
