/*
 * XREFs of ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000808C (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800087F4 (-AddAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180008A30 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A480 (-_EnsureStagingVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ @ 0x18000A574 (-_EnsureTransitionVisualRoot@CTransitionVisualController@@IEAAJXZ.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000A73C (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@H_NW4StagedBackgroundPolicy@1@@Z @ 0x18000AA64 (-_StageCloneWithOwnedWindows@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18000C5A8 (-_EnsureDCompResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z @ 0x18000D6E8 (-StealStagedVisual@CAnimatedTransitionVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ?UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z @ 0x18000EB48 (-UpdateAccentBlurBehind@CAccentBlurBehind@@QEAAJAEBUtagRECT@@_KPEAUHWND__@@@Z.c)
 *     ?_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z @ 0x180010C90 (-_EnsureBackgroundVisual@CAccent@@IEAAJPEBUACCENT_POLICY@@PEAPEAVCVisual@@PEAV3@@Z.c)
 *     ?ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z @ 0x180012518 (-ProcessFreezeSnapshotAndRelease@CWindowSnapshot@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateAccentBlurBehind@CAccent@@IEAAXXZ @ 0x180014140 (-_UpdateAccentBlurBehind@CAccent@@IEAAXXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180014318 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x180017048 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180017904 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180019280 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?MoveToFront@CVisual@@QEAAJ_N@Z @ 0x180021FC8 (-MoveToFront@CVisual@@QEAAJ_N@Z.c)
 *     ?CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z @ 0x1800228F0 (-CloneVisualTree@CVisual@@UEAAJPEAPEAV1@@Z.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180024570 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800269A0 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x180026C90 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z @ 0x180027130 (-UpdateAccent@CTopLevelWindow@@QEAAJ_N@Z.c)
 *     ?EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z @ 0x180028688 (-EnsureNonClientAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180028AC0 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x180029888 (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z @ 0x18002A440 (-Initialize@CTopLevelWindow@@MEAAJQEAUMIL_CHANNEL__@@_N@Z.c)
 *     ?GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z @ 0x18002C4B4 (-GetOverlayRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K_N@Z.c)
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002F300 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x1800305E0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x180035BAC (-OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180039DEC (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x18003B778 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18003BE9C (-CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18004055C (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180041108 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z @ 0x18004630C (-DesktopCreate@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_NOTIFYDESKTOPCREATE@@@Z.c)
 *     ?CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z @ 0x180046664 (-CreateRootVisualForDesktop@CWindowList@@AEAAJPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@1@@Z.c)
 *     ?Initialize@CMagnifierControl@@AEAAJXZ @ 0x1800469A8 (-Initialize@CMagnifierControl@@AEAAJXZ.c)
 *     ?Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180047050 (-Initialize@CDirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAX_K@Z @ 0x180047320 (-ForceAtlasInitialize@CContactManager@@QEAAX_K@Z.c)
 *     ?AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z @ 0x180047564 (-AddToTouchNode@CContactManager@@AEAAJ_KPEAVCVisual@@@Z.c)
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E044 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006EA08 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE8C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x180072A64 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x180079784 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z @ 0x18007C020 (-UpdateOutputDuplication@CProjectionBorderManager@@UEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180081CD0 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z @ 0x180083F40 (-Initialize@CRippleEffect@@IEAAJQEAUMIL_CHANNEL__@@PEAPEAVCBitmapSource@@@Z.c)
 *     ?OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOTIFICATION@@@Z @ 0x180084670 (-OnWindowArrangementStart@CWindowArrangementTransition@@QEAAJPEBUMILCMD_DWM_WINDOWARRANGEMENTNOT.c)
 *     ?Initialize@CContactStationaryVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x1800880C0 (-Initialize@CContactStationaryVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180088E90 (-Initialize@CTextTetherVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B080 (-Initialize@CPenBarrelKeyVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CFlickVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008B630 (-Initialize@CFlickVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPenPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008BD70 (-Initialize@CPenPressHoldVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x18008C1B0 (-Initialize@CPressTapVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?Capture@CScreenRotation@@QEAAJXZ @ 0x180091438 (-Capture@CScreenRotation@@QEAAJXZ.c)
 *     ?CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ @ 0x1800918CC (-CreateLiveDesktopVisual@CScreenRotation@@AEAAJXZ.c)
 *     ?Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z @ 0x180092B00 (-Initialize@CIndirectTouchVisual@@MEAAJQEAUMIL_CHANNEL__@@@Z.c)
 *     ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x18009A760 (-RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18009AE88 (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Send@CResource@@QEAAJPEAXI@Z @ 0x18001D2DC (-Send@CResource@@QEAAJPEAXI@Z.c)
 *     ?SetDirtyChildren@CVisual@@UEAAXXZ @ 0x180023690 (-SetDirtyChildren@CVisual@@UEAAXXZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002B0D0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z @ 0x180033A60 (-SetParent@CTopLevelWindow3D@@UEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAt@?$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z @ 0x18003D0B8 (-RemoveAt@-$DynArray@PEAVCVisual@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall VisualCollection::InsertRelative(
        VisualCollection *this,
        struct CVisual *a2,
        struct CVisual *a3,
        char a4,
        bool a5)
{
  unsigned int v5; // r10d
  int v6; // r14d
  struct CVisual *v8; // r9
  int v9; // r15d
  char v10; // di
  int v13; // esi
  bool v14; // r11
  unsigned int v15; // ecx
  struct CVisual **v16; // rax
  struct CVisual *v17; // rdx
  int (*v18)(CVisual *__hidden, struct CVisual *); // rdi
  CVisual *v19; // rdi
  __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  struct CVisual **v24; // rdx
  struct CVisual **v25; // r8
  __int32 v26; // eax
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // eax
  void (__fastcall *v31)(CVisual *__hidden); // rbx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // eax
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  bool v38; // [rsp+30h] [rbp-41h]
  struct CVisual *v39; // [rsp+38h] [rbp-39h] BYREF
  struct CVisual **v40; // [rsp+40h] [rbp-31h] BYREF
  unsigned int v41; // [rsp+48h] [rbp-29h]
  int v42; // [rsp+4Ch] [rbp-25h]
  int v43; // [rsp+50h] [rbp-21h] BYREF
  __int64 v44; // [rsp+54h] [rbp-1Dh]
  __m128i si128; // [rsp+60h] [rbp-11h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-1h] BYREF
  __int32 v47; // [rsp+78h] [rbp+7h]
  int v48; // [rsp+7Ch] [rbp+Bh]

  v5 = *((_DWORD *)this + 10);
  v6 = 0;
  v39 = a2;
  v8 = (struct CVisual *)*((_QWORD *)this + 1);
  v9 = -1;
  v10 = 0;
  v41 = -1;
  v13 = 0;
  v40 = (struct CVisual **)v8;
  v14 = *((_QWORD *)a2 + 3) == (_QWORD)v8;
  v38 = v14;
  v42 = 1;
  if ( a3 )
  {
    if ( ((*((_BYTE *)a2 + 84) & 0x10) != 0) == ((*((_BYTE *)a3 + 84) & 0x10) != 0) )
    {
LABEL_50:
      v8 = (struct CVisual *)v40;
      goto LABEL_2;
    }
    if ( a4 )
    {
      if ( (*((_BYTE *)a2 + 84) & 0x10) == 0 )
        goto LABEL_50;
    }
    else if ( (*((_BYTE *)a3 + 84) & 0x10) == 0 )
    {
      goto LABEL_50;
    }
    v13 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147467259, 0x7Bu);
    return (unsigned int)v13;
  }
LABEL_2:
  v15 = 0;
  if ( v5 )
  {
    v16 = (struct CVisual **)*((_QWORD *)this + 2);
    while ( 1 )
    {
      v17 = *v16;
      if ( *v16 == a2 )
      {
        if ( v9 == -1 && a3 )
          v10 = v42;
        v41 = v15;
      }
      if ( !a3 && v9 == -1 )
        break;
      if ( v17 == a3 )
        goto LABEL_36;
LABEL_7:
      ++v15;
      ++v16;
      if ( v15 >= v5 )
        goto LABEL_8;
    }
    if ( a4 )
    {
      if ( (*((_BYTE *)v17 + 84) & 0x10) != 0 || (*((_BYTE *)a2 + 84) & 0x10) == 0 )
        goto LABEL_7;
    }
    else if ( (*((_BYTE *)a2 + 84) & 0x10) != 0 || (*((_BYTE *)v17 + 84) & 0x10) == 0 )
    {
      goto LABEL_7;
    }
LABEL_36:
    v9 = v15;
    goto LABEL_7;
  }
LABEL_8:
  if ( a3 )
  {
    if ( v9 == -1 )
    {
      v13 = -2147024890;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024890, 0xB5u);
      return (unsigned int)v13;
    }
  }
  else if ( a4 )
  {
    v10 = 0;
  }
  else
  {
    if ( v9 == -1 )
      v9 = v5;
    v10 = 1;
  }
  if ( v14 )
  {
    DynArray<CVisual *,0>::RemoveAt((char *)this + 16, v41, a3, v8);
    if ( v10 )
      --v9;
    *((_BYTE *)v39 + 84) &= ~4u;
  }
  else
  {
    v18 = *(int (**)(CVisual *__hidden, struct CVisual *))(*(_QWORD *)a2 + 64LL);
    if ( v18 == CVisual::SetParent )
    {
      *((_QWORD *)a2 + 3) = v8;
      v19 = v8;
      if ( !v8 )
        *((_BYTE *)a2 + 84) &= ~4u;
      if ( *((_DWORD *)a2 + 20) && v8 )
      {
        do
        {
          if ( (*((_BYTE *)v19 + 80) & 1) != 0 )
            break;
          v31 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v19 + 32LL);
          if ( v31 == CVisual::SetDirtyChildren )
            CVisual::SetDirtyChildren(v19);
          else
            v31(v19);
          v19 = (CVisual *)*((_QWORD *)v19 + 3);
        }
        while ( v19 );
      }
      v13 = 0;
    }
    else
    {
      if ( (char *)v18 == (char *)CTopLevelWindow3D::SetParent )
        v35 = CTopLevelWindow3D::SetParent(a2, v8);
      else
        v35 = ((__int64 (__fastcall *)(struct CVisual *, struct CVisual **, struct CVisual *, struct CVisual *))v18)(
                a2,
                v40,
                a3,
                v8);
      v13 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v35, 0xE1u);
        return (unsigned int)v13;
      }
    }
    _InterlockedIncrement((volatile signed __int32 *)v39 + 2);
  }
  LOBYTE(v6) = a4 != 0;
  v20 = (unsigned int)(v6 + v9);
  if ( (unsigned int)v20 > *((_DWORD *)this + 10) )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024809, 0x1C3u);
  }
  else
  {
    v40 = &v39;
    v21 = DynArrayImpl<0>::Grow((int)this + 16, 8, 1, 0, (__int64)&v40);
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x1CDu);
    }
    else
    {
      ++*((_DWORD *)this + 10);
      v22 = *((_QWORD *)this + 2);
      v23 = (unsigned int)(*((_DWORD *)this + 10) - 1);
      if ( (unsigned int)v23 > (unsigned int)v20 )
      {
        v32 = v22 + 8 * v23;
        do
        {
          v23 = (unsigned int)(v23 - 1);
          v32 -= 8LL;
          *(_QWORD *)(v32 + 8) = *(_QWORD *)(v22 + 8 * v23);
        }
        while ( (unsigned int)v23 > (unsigned int)v20 );
      }
      v24 = v40;
      v25 = (struct CVisual **)(v22 + 8 * v20);
      if ( v40 >= v25 && (unsigned __int64)v40 < v22 + 8 * ((unsigned __int64)*((unsigned int *)this + 10) - 1) )
        v24 = v40 + 1;
      *v25 = *v24;
    }
  }
  if ( a5 )
  {
    v26 = *(_DWORD *)(*((_QWORD *)v39 + 2) + 24LL);
    if ( v38 )
    {
      v33 = *((_QWORD *)this + 1);
      v46 = _mm_load_si128((const __m128i *)&_xmm).m128i_u64[0];
      v47 = v26;
      v48 = v6 + v9;
      v34 = CResource::Send(*(CResource **)(v33 + 16), &v46, 0x10u);
      v13 = v34;
      if ( v34 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x4Du);
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xF4u);
        return (unsigned int)v13;
      }
    }
    else
    {
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      si128.m128i_i32[2] = v26;
      v27 = *((_QWORD *)this + 1);
      si128.m128i_i32[3] = v6 + v9;
      v28 = *(_QWORD *)(v27 + 16);
      si128.m128i_i32[1] = *(_DWORD *)(v28 + 24);
      v29 = MilResource_SendCommand(&si128, 0x10u, *(struct MIL_CHANNEL__ **)(v28 + 16));
      v13 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v29, 0x86u);
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x3Bu);
      }
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0x101u);
        return (unsigned int)v13;
      }
    }
    *((_BYTE *)v39 + 84) |= 4u;
  }
  else if ( v38 )
  {
    v43 = 54;
    v44 = 0LL;
    v36 = *((_QWORD *)this + 1);
    HIDWORD(v44) = *(_DWORD *)(*((_QWORD *)v39 + 2) + 24LL);
    v37 = CResource::Send(*(CResource **)(v36 + 16), &v43, 0xCu);
    v13 = v37;
    if ( v37 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v37, 0x29u);
    if ( v13 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xF9u);
  }
  return (unsigned int)v13;
}
