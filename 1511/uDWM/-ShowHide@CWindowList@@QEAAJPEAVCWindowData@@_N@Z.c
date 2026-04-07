/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x180007ED8 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002DD80 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031780 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031C44 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032600 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x18000E924 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001E5E8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001E670 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180022540 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800240F0 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180029F44 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z @ 0x18002A3AC (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x18002CE68 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002D7A8 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindow@CWindowList@@AEAAPEAVCTopLevelWindow@@PEAU_LIST_ENTRY@@@Z @ 0x18002D89C (-FindPrecedingVisibleWindow@CWindowList@@AEAAPEAVCTopLevelWindow@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800300D0 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x1800302A4 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180033010 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180035D7C (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180039D68 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18003C544 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003C580 (-Create@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x18003E710 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x18003EB28 (-Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x18003EBD4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18007E8B4 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x180082758 (-IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x1800829A8 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // al
  __int64 v5; // rdx
  char v6; // al
  int IsMagnifier; // eax
  int v10; // ebx
  CTopLevelWindow3D *v11; // rcx
  bool v12; // r14
  struct _LIST_ENTRY *PrecedingVisibleWindow; // rbx
  __int64 Element; // rax
  __int64 v15; // rcx
  CVisual *v16; // rbx
  CVisual *v17; // rcx
  CWindowList *v18; // rcx
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  int v23; // eax
  CTopLevelWindow *v24; // r14
  HWND v25; // rdx
  CDesktopManager *v26; // rax
  bool v27; // dl
  CTopLevelWindow *v28; // rax
  bool v29; // zf
  CDwmWinSqm *v30; // rcx
  CDwmWinSqm *v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-60h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v34; // [rsp+40h] [rbp-40h]
  __int128 v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+60h] [rbp-20h]
  char v37; // [rsp+68h] [rbp-18h]
  bool v38; // [rsp+C8h] [rbp+48h] BYREF
  CTopLevelWindow *v39; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *((_BYTE *)a2 + 568);
  v38 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = v3 & 1;
  if ( v5 && v5 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 191) )
    v6 = 0;
  if ( v6 )
  {
    v12 = 0;
    if ( !*((_QWORD *)a2 + 48) )
    {
      v23 = CTopLevelWindow::Create(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              &v39);
      v24 = v39;
      v10 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x114u);
      }
      else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
      {
        v25 = (HWND)*((_QWORD *)a2 + 5);
        if ( v25 )
        {
          if ( (*((_BYTE *)a2 + 572) & 0x20) == 0 )
            CTopLevelWindow::SendTopLevelWindowCommand(v24, v25);
        }
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v10, 0x84Eu);
        return (unsigned int)v10;
      }
      v26 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)v24 + 93) = a2;
      IsMagnifier = CTopLevelWindow3D::Create(*((struct MIL_CHANNEL__ *const *)v26 + 4), &v39);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v32 = 2130;
        goto LABEL_61;
      }
      v28 = v39;
      *((_QWORD *)v39 + 39) = a2;
      *(_OWORD *)((char *)v28 + 292) = *((_OWORD *)a2 + 3);
      v29 = (*((_BYTE *)a2 + 571) & 1) == 0;
      *((_QWORD *)a2 + 48) = v24;
      *((_QWORD *)a2 + 49) = v28;
      if ( !v29 )
      {
        IsMagnifier = CVisual::SetIsMagnifier(v24, v27);
        v10 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v32 = 2138;
          goto LABEL_61;
        }
        *((_BYTE *)a2 + 571) &= ~1u;
      }
      if ( (*((_BYTE *)a2 + 572) & 2) != 0 )
      {
        IsMagnifier = CVisual::SetIsCursor(v24, 1u);
        v10 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v32 = 2144;
          goto LABEL_61;
        }
      }
      if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)a2 + 571) & 2) != 0 && CDwmWinSqm::IsTopLevelAppWindow(v30, a2) )
      {
        CDwmWinSqm::WindowCreated(v31, a2);
        *((_BYTE *)a2 + 570) |= 0x10u;
      }
      v12 = 1;
    }
    PrecedingVisibleWindow = CWindowList::FindPrecedingVisibleWindow(this, (struct _LIST_ENTRY *)a2);
    Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
                (char *)this + 8,
                *((_QWORD *)a2 + 15));
    if ( Element )
      v15 = *(_QWORD *)(Element + 24);
    else
      v15 = 0LL;
    IsMagnifier = VisualCollection::InsertRelative(
                    (VisualCollection *)(v15 + 32),
                    *((struct CVisual **)a2 + 48),
                    (struct CVisual *)PrecedingVisibleWindow,
                    1,
                    1);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v32 = 2160;
      goto LABEL_61;
    }
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x400000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x8000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x10000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x20000);
    CVisual::SetOpacity(
      *((CVisual **)a2 + 48),
      (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 48) + 744LL) + 332LL) / 255.0);
    v16 = (CVisual *)*((_QWORD *)a2 + 48);
    CVisual::SetDirtyFlags(v16, 0x40000);
    CVisual::SetDirtyFlags(v16, 0x4000000);
    CWindowData::OnColorizationUpdated(a2);
    CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 48));
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x4000);
    CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 48));
    CWindowList::OnPositionChange(this, a2, 0);
    IsMagnifier = CWindowList::OnSizeChange(this, (struct tagPOINT *)a2);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v32 = 2181;
      goto LABEL_61;
    }
    v17 = (CVisual *)*((_QWORD *)a2 + 48);
    if ( v17 )
      CVisual::SetDirtyFlags(v17, 0x4000000);
    CWindowList::OnGDISurfaceChange(v17, a2);
    IsMagnifier = CWindowList::UpdateThumbnailsForNewWindow(v18, a2);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v32 = 2185;
      goto LABEL_61;
    }
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170),
                    a2,
                    &v38,
                    0);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v32 = 2189;
      goto LABEL_61;
    }
    if ( !v38 )
    {
      IsMagnifier = CTopLevelWindow3D::ShowWindow(*((CTopLevelWindow3D **)a2 + 49), 1, v12);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v32 = 2196;
        goto LABEL_61;
      }
    }
  }
  else
  {
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170),
                    a2,
                    &v38,
                    0);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v32 = 2203;
      goto LABEL_61;
    }
    if ( !v38 )
    {
      v11 = (CTopLevelWindow3D *)*((_QWORD *)a2 + 49);
      if ( v11 )
      {
        IsMagnifier = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        v10 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v32 = 2209;
          goto LABEL_61;
        }
      }
    }
  }
  IsMagnifier = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v32 = 2214;
    goto LABEL_61;
  }
  if ( a3 )
  {
    v19 = *((_QWORD *)a2 + 15);
    v36 = -1LL;
    Buffer[0] = v19;
    v34 = 0LL;
    v35 = 0LL;
    Buffer[1] = 0LL;
    v37 = 0;
    v20 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v21 = v20 ? v20[6] : 0LL;
    if ( *((_QWORD *)a2 + 5) == v21 )
    {
      IsMagnifier = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v32 = 2226;
LABEL_61:
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, IsMagnifier, v32);
      }
    }
  }
  return (unsigned int)v10;
}
