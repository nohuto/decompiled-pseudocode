/*
 * XREFs of ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1800075B0
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800863B0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x180086984 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ForceUpdateRenderingRealization(CCompositionSurfaceInfo *this)
{
  int v2; // eax
  unsigned int v3; // esi
  struct CBitmapRealization *v5; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v6[16]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v7[256]; // [rsp+50h] [rbp-118h] BYREF

  v5 = 0LL;
  v2 = CCompositionSurfaceInfo::QueryRenderingRealization(this, (struct CSM_SURFACE_UPDATE *)v6, &v5);
  v3 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x2F4u);
  else
    CCompositionSurfaceInfo::UpdateRenderingRealization(this, v5, (const struct CSM_BUFFER_ATTRIBUTES *)v7, 0LL, 0LL, 1);
  if ( v5 )
    (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v5 + 16LL))(v5);
  return v3;
}
