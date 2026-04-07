/*
 * XREFs of ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001FCE0
 * Callers:
 *     ?_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSnapshot@@@Z @ 0x180008450 (-_RemoveSnapshotFromVisualTreeIfExists@CTransitionVisualController@@IEAAXPEAVCTransitionWindowSn.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x180008718 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180008E70 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?CleanupTransition@CTransitionVisualController@@QEAAJXZ @ 0x18000A8F0 (-CleanupTransition@CTransitionVisualController@@QEAAJXZ.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z @ 0x18000AE24 (-RemoveTLWClone@CTransitionVisualController@@QEAAXPEBVCTopLevelWindow@@_N1@Z.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C5A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x18000D6E8 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000DB30 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ @ 0x18000FD38 (-ForceDisconnectClientArea@CTopLevelWindow@@QEAAXXZ.c)
 *     ?EndTransition@CAccent@@QEAAJXZ @ 0x180010B8C (-EndTransition@CAccent@@QEAAJXZ.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x180013244 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x1800142E4 (-_RemoveBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180028688 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z @ 0x18002D8F8 (-UnregisterThumbnail@CWindowList@@AEAAJPEAVCThumbnailData@@@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031848 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z @ 0x18003F124 (-DestroyDesktopWindowReplacement@CDesktopManager@@SAX_K@Z.c)
 *     ?_CleanupAnimation@CLoginTransition@@AEAAXXZ @ 0x180040338 (-_CleanupAnimation@CLoginTransition@@AEAAXXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047510 (-RemoveFromTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006EA08 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180071AB0 (-_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ.c)
 *     ?_RemoveLauncherClones@CLivePreview@@AEAAJXZ @ 0x1800728E0 (-_RemoveLauncherClones@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z @ 0x18007C684 (-_RemoveVisualByIndex@CProjectionBorderManager@@AEAAXH@Z.c)
 *     ?DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z @ 0x18007FAC0 (-DesktopFree@CWindowList@@AEAAXPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPFREE@@@Z.c)
 *     ?DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z @ 0x18007FB70 (-DesktopThumbnailChange@CWindowList@@UEAAJPEAUIDwmWindow@@UtagRECT@@1EK@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084670 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?Stop@CScreenRotation@@QEAAX_N@Z @ 0x180092438 (-Stop@CScreenRotation@@QEAAX_N@Z.c)
 *     ?NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z @ 0x18009A670 (-NotifyWindowDestruction@CDesktopThumbnailBase@@UEAAXPEAVCWindowData@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009A760 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180033A60 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall VisualCollection::Remove(VisualCollection *this, struct CVisual *a2)
{
  unsigned int v2; // ebp
  unsigned int v5; // eax
  unsigned int v6; // edi
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // eax
  int v11; // r14d
  unsigned int v12; // eax
  __int64 v13; // r8
  __int64 v14; // rcx
  int (*v15)(CVisual *__hidden, struct CVisual *); // rdi
  int v16; // eax
  int v17; // [rsp+38h] [rbp-30h] BYREF
  __int64 v18; // [rsp+3Ch] [rbp-2Ch]

  v2 = 0;
  if ( !*((_QWORD *)a2 + 3) )
    return 0LL;
  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  if ( !v5 )
    return 0LL;
  while ( *(struct CVisual **)(*((_QWORD *)this + 2) + 8LL * v6) != a2 )
  {
    if ( ++v6 >= v5 )
      return 0LL;
  }
  if ( v6 == -1 )
    return 0LL;
  if ( (*((_BYTE *)a2 + 84) & 4) == 0 )
    goto LABEL_11;
  v17 = 54;
  v18 = 0LL;
  v8 = *((_QWORD *)this + 1);
  HIDWORD(v18) = *(_DWORD *)(*((_QWORD *)a2 + 2) + 24LL);
  v9 = *(_QWORD *)(v8 + 16);
  LODWORD(v18) = *(_DWORD *)(v9 + 24);
  v10 = MilResource_SendCommand(&v17, 0xCu, *(struct MIL_CHANNEL__ **)(v9 + 16));
  v11 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x86u);
  if ( v11 >= 0 )
  {
LABEL_11:
    v12 = *((_DWORD *)this + 10);
    if ( v6 >= v12 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x194u);
    }
    else
    {
      v13 = *((_QWORD *)this + 2);
      if ( v6 < v12 - 1 )
      {
        do
        {
          v14 = v6++;
          *(_QWORD *)(v13 + 8 * v14) = *(_QWORD *)(v13 + 8LL * v6);
        }
        while ( v6 < *((_DWORD *)this + 10) - 1 );
      }
      --*((_DWORD *)this + 10);
    }
    v15 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)a2 + 64LL);
    if ( v15 == CVisual::SetParent )
    {
      *((_BYTE *)a2 + 84) &= ~4u;
      *((_QWORD *)a2 + 3) = 0LL;
    }
    else
    {
      if ( (char *)v15 == (char *)CTopLevelWindow3D::SetParent )
        v16 = CTopLevelWindow3D::SetParent(a2, 0LL);
      else
        v16 = ((__int64 (__fastcall *)(struct CVisual *, _QWORD, __int64))v15)(a2, 0LL, v13);
      v2 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v16, 0x13Bu);
        return v2;
      }
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
      (**(void (__fastcall ***)(struct CVisual *, __int64, __int64))a2)(a2, 1LL, v13);
    return v2;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x136u);
  return (unsigned int)v11;
}
