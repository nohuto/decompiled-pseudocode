/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x180007184
 * Callers:
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18000632C (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x1800126A4 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x1800F7838 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x180007434 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z @ 0x1800074D8 (-RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1800075B0 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180007664 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x1800077A4 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x1800F6B9C (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x1800F7080 (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
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
  int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  CCompositionSurfaceInfo *v14; // rcx
  int v15; // eax
  bool v16; // zf
  CCompositionSurfaceInfo *v17; // rcx
  unsigned int v19[4]; // [rsp+40h] [rbp-38h] BYREF
  bool v20; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v19[0] = 0;
  v7 = a3;
  if ( a3 )
  {
    if ( !*((_BYTE *)a2 + 154)
      || !*((_BYTE *)this + 829)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 104) + 32LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( a4
        || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 2))
        || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 104) + 32LL))
        || *((_BYTE *)a2 + 177) && *(_QWORD *)(*((_QWORD *)a2 + 2) + 72LL) == *((_QWORD *)a2 + 23) )
      {
        v5 = 1;
      }
      v10 = *((_DWORD *)CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)a2 + 2)) + 60);
      if ( v10 )
      {
        if ( COverlayContext::IsFullscreenSingleMonitor(this) )
        {
          if ( v10 == *((_DWORD *)a2 + 49) )
          {
            v19[0] = *((_DWORD *)a2 + 50);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 392LL))(
                    *((_QWORD *)this + 2),
                    v10,
                    v19);
            v4 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xA52u);
              return v4;
            }
            *((_DWORD *)a2 + 50) = v19[0];
            *((_DWORD *)a2 + 49) = v10;
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 176) != v7 || *((_BYTE *)a2 + 177) != v5 || *((_DWORD *)a2 + 48) != v19[0] )
  {
    v12 = *((_DWORD *)a2 + 52);
    v13 = *((_QWORD *)a2 + 3);
    v14 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
    v20 = 0;
    v15 = CCompositionSurfaceInfo::RecordIndependentFlipInfo(v14, v13, v12, v7, v5, v19[0], &v20);
    v4 = v15;
    if ( v15 >= 0 )
    {
      if ( !v7 && v20 )
        *((_BYTE *)this + 818) = 1;
      if ( v5 || !v7 )
      {
        v16 = *((_BYTE *)a2 + 176) == 0;
        v17 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 2);
        *((_QWORD *)a2 + 23) = *((_QWORD *)v17 + 9);
        if ( !v16 && !*((_BYTE *)a2 + 177) )
          CCompositionSurfaceInfo::ForceUpdateRenderingRealization(v17);
      }
      *((_DWORD *)a2 + 48) = v19[0];
      *((_BYTE *)a2 + 176) = v7;
      *((_BYTE *)a2 + 177) = v5;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xA6Cu);
    }
  }
  return v4;
}
