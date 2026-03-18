/*
 * XREFs of ?FindRealization@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800869F8
 * Callers:
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180086984 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x18008981C (-FindRealizationNoRef@CBindInfo@CCompositionSurfaceInfo@@QEBAPEAVCBitmapRealization@@AEBUCSM_REA.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180089DB4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::FindRealization(
        CCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2,
        struct CBitmapRealization **a3)
{
  unsigned __int64 v3; // r14
  unsigned int v4; // esi
  int v8; // eax
  struct CBitmapRealization *RealizationNoRef; // rdi

  v3 = *((_QWORD *)a2 + 1);
  v4 = 0;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 7) == v3 )
  {
    RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                         (CCompositionSurfaceInfo *)((char *)this + 48),
                         (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 184));
    if ( RealizationNoRef )
      goto LABEL_4;
  }
  v8 = CCompositionSurfaceInfo::CBindInfo::Initialize((CCompositionSurfaceInfo *)((char *)this + 48), v3);
  v4 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1BDu);
    return v4;
  }
  RealizationNoRef = CCompositionSurfaceInfo::CBindInfo::FindRealizationNoRef(
                       (CCompositionSurfaceInfo *)((char *)this + 48),
                       (const struct CSM_SURFACE_UPDATE *)((char *)a2 + 184));
  if ( RealizationNoRef )
  {
LABEL_4:
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)RealizationNoRef + 8LL))(RealizationNoRef);
    *a3 = RealizationNoRef;
  }
  return v4;
}
