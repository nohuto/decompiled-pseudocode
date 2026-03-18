/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007D60
 * Callers:
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x180006CF8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EB00 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x18007F750 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180111B38 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1800072F0 (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180007398 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x18000BB08 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z @ 0x18000BB90 (-RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18000BC80 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x18002F37C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x180111410 (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3,
        char a4)
{
  unsigned int v4; // ebx
  char v5; // r12
  char v7; // bp
  unsigned int v10; // r14d
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  CCompositionSurfaceInfo *v14; // rcx
  bool v15; // zf
  CCompositionSurfaceInfo *v16; // rcx
  int v17; // eax
  unsigned int v18[4]; // [rsp+40h] [rbp-38h] BYREF
  bool v19; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v18[0] = 0;
  v7 = a3;
  if ( a3 )
  {
    if ( !*((_BYTE *)a2 + 162)
      || !*((_BYTE *)this + 845)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 106) + 32LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( a4
        || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 2))
        || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 106) + 32LL))
        || *((_BYTE *)a2 + 185) && *(_DWORD *)(*((_QWORD *)a2 + 2) + 72LL) == *((_DWORD *)a2 + 54) )
      {
        v5 = 1;
      }
      v10 = *((_DWORD *)CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)a2 + 2)) + 60);
      if ( v10 )
      {
        if ( COverlayContext::IsFullscreenSingleMonitor(this) )
        {
          if ( v10 == *((_DWORD *)a2 + 48) )
          {
            v18[0] = *((_DWORD *)a2 + 49);
          }
          else
          {
            v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 400LL))(
                    *((_QWORD *)this + 2),
                    v10,
                    v18);
            v4 = v17;
            if ( v17 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xA24u);
              return v4;
            }
            *((_DWORD *)a2 + 49) = v18[0];
            *((_DWORD *)a2 + 48) = v10;
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 184) != v7 || *((_BYTE *)a2 + 185) != v5 || *((_DWORD *)a2 + 47) != v18[0] )
  {
    v12 = *((_DWORD *)a2 + 51);
    v13 = *((_QWORD *)a2 + 3);
    v14 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
    v19 = 0;
    if ( (int)CCompositionSurfaceInfo::RecordIndependentFlipInfo(v14, v13, v12, v7, v5, v18[0], &v19) < 0 )
    {
      v7 = 0;
    }
    else
    {
      if ( !v7 && v19 )
        *((_BYTE *)this + 834) = 1;
      if ( v5 || !v7 )
      {
        v15 = *((_BYTE *)a2 + 184) == 0;
        v16 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
        *((_DWORD *)a2 + 54) = *((_DWORD *)v16 + 18);
        if ( !v15 && !*((_BYTE *)a2 + 185) )
          CCompositionSurfaceInfo::ForceUpdateRenderingRealization(v16, *((_QWORD *)a2 + 3));
      }
    }
    *((_DWORD *)a2 + 47) = v18[0];
    *((_BYTE *)a2 + 184) = v7;
    *((_BYTE *)a2 + 185) = v5;
  }
  return v4;
}
