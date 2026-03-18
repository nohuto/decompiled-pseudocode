/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAUOverlayPlaneInfo@1@_N1@Z @ 0x1801284A0
 * Callers:
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800788D8 (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ @ 0x180078B34 (-SetMultiplaneOverlayPresentInfo@COverlayContext@@AEAAJXZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z @ 0x180129BD4 (-SetIndependentFlipNotifyMode@COverlayContext@@QEAAJU_LUID@@@Z.c)
 *     ?EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z @ 0x18012CDE8 (-EnsureIndependentFlipState@CDirectFlipInfo@@IEAAJ_N0@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x180005F0C (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     ?UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z @ 0x18001E8B4 (-UpdateSwapChainStat@CBindInfo@CCompositionSurfaceInfo@@QEAAXW4SwapChainStat@2@_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ @ 0x180126598 (-AlwaysNeedsRenderPass@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?HasDWMClones@CRenderTargetManager@@QEAA_NXZ @ 0x18012890C (-HasDWMClones@CRenderTargetManager@@QEAA_NXZ.c)
 *     ?IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ @ 0x18012905C (-IsFullscreenSingleMonitor@COverlayContext@@AEAA_NXZ.c)
 *     ?ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180151F10 (-ForceUpdateRenderingRealization@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ @ 0x180151FD0 (-HasSecondaryRepresentations@CCompositionSurfaceInfo@@QEBA_NXZ.c)
 *     ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z @ 0x1801526C8 (-RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IPEA_N@Z.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3,
        char a4)
{
  unsigned int v4; // r15d
  char v5; // r14
  char v7; // di
  unsigned int v10; // esi
  int v11; // eax
  unsigned int v12; // r8d
  unsigned __int64 v13; // rdx
  CCompositionSurfaceInfo *v14; // rcx
  bool v15; // zf
  CCompositionSurfaceInfo *v16; // rcx
  unsigned int v18[4]; // [rsp+40h] [rbp-28h] BYREF
  bool v19; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v18[0] = 0;
  v7 = a3;
  if ( a3 )
  {
    if ( !*((_BYTE *)a2 + 170)
      || !*((_BYTE *)this + 1093)
      || CRenderTargetManager::HasDWMClones(*(CRenderTargetManager **)(*((_QWORD *)this + 138) + 32LL)) )
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( a4
        || CCompositionSurfaceInfo::HasSecondaryRepresentations(*((CCompositionSurfaceInfo **)a2 + 3))
        || CRenderTargetManager::AlwaysNeedsRenderPass(*(CRenderTargetManager **)(*((_QWORD *)this + 138) + 32LL))
        || *((_BYTE *)a2 + 193) && *(_DWORD *)(*((_QWORD *)a2 + 3) + 72LL) == *((_DWORD *)a2 + 56) )
      {
        v5 = 1;
      }
      v10 = *((_DWORD *)CCompositionSurfaceInfo::GetRenderingRealizationNoRef(*((CCompositionSurfaceInfo **)a2 + 3)) + 41);
      if ( v10 )
      {
        if ( COverlayContext::IsFullscreenSingleMonitor(this) )
        {
          if ( v10 == *((_DWORD *)a2 + 50) )
          {
            v18[0] = *((_DWORD *)a2 + 51);
          }
          else
          {
            v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 416LL))(
                    *((_QWORD *)this + 2),
                    v10,
                    v18);
            v4 = v11;
            if ( v11 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xACAu);
              return v4;
            }
            *((_DWORD *)a2 + 51) = v18[0];
            *((_DWORD *)a2 + 50) = v10;
          }
        }
      }
    }
  }
  if ( *((_BYTE *)a2 + 192) != v7 || *((_BYTE *)a2 + 193) != v5 || *((_DWORD *)a2 + 49) != v18[0] )
  {
    v12 = *((_DWORD *)a2 + 53);
    v13 = *((_QWORD *)a2 + 4);
    v14 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 3);
    v19 = 0;
    if ( (int)CCompositionSurfaceInfo::RecordIndependentFlipInfo(v14, v13, v12, v7, v5, v18[0], &v19) < 0 )
    {
      v7 = 0;
    }
    else
    {
      if ( *((_BYTE *)a2 + 192) != v7 )
        CCompositionSurfaceInfo::CBindInfo::UpdateSwapChainStat((_QWORD *)(*((_QWORD *)a2 + 3) + 48LL), 3, v7);
      if ( !v7 && v19 )
        *((_BYTE *)this + 1082) = 1;
      if ( v5 || !v7 )
      {
        v15 = *((_BYTE *)a2 + 192) == 0;
        v16 = (CCompositionSurfaceInfo *)*((_QWORD *)a2 + 3);
        *((_DWORD *)a2 + 56) = *((_DWORD *)v16 + 18);
        if ( !v15 && !*((_BYTE *)a2 + 193) )
          CCompositionSurfaceInfo::ForceUpdateRenderingRealization(v16, *((_QWORD *)a2 + 4));
      }
    }
    *((_DWORD *)a2 + 49) = v18[0];
    *((_BYTE *)a2 + 192) = v7;
    *((_BYTE *)a2 + 193) = v5;
  }
  return v4;
}
