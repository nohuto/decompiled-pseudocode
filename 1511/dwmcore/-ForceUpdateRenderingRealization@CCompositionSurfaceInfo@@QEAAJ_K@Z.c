/*
 * XREFs of ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18000BC80
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18002EB80 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapRealization@@@Z @ 0x18002F0E4 (-QueryRenderingRealization@CCompositionSurfaceInfo@@AEAAJPEAUCSM_SURFACE_UPDATE@@PEAPEAVCBitmapR.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::ForceUpdateRenderingRealization(CCompositionSurfaceInfo *this, __int64 a2)
{
  unsigned int v2; // edi
  int v4; // eax
  struct CBitmapRealization *v6; // [rsp+30h] [rbp-138h] BYREF
  _BYTE v7[16]; // [rsp+40h] [rbp-128h] BYREF
  _BYTE v8[256]; // [rsp+50h] [rbp-118h] BYREF

  v2 = 0;
  v6 = 0LL;
  if ( *((_QWORD *)this + 7) == a2 && *((_DWORD *)this + 26) )
  {
    v4 = CCompositionSurfaceInfo::QueryRenderingRealization(this, (struct CSM_SURFACE_UPDATE *)v7, &v6);
    v2 = v4;
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x31Eu);
    else
      CCompositionSurfaceInfo::UpdateRenderingRealization(
        this,
        v6,
        (const struct CSM_BUFFER_ATTRIBUTES *)v8,
        0LL,
        0LL,
        1);
    if ( v6 )
      (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return v2;
}
