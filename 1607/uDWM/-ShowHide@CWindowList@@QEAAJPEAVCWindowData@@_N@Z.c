/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180031C38
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000BF28 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C4E0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002C790 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002F140 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180032490 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001B188 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x18001B210 (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001F7E4 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetIsCursor@CVisual@@QEAAJ_N@Z @ 0x180020AE4 (-SetIsCursor@CVisual@@QEAAJ_N@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180021124 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180026F64 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z @ 0x18002735C (-SendTopLevelWindowCommand@CTopLevelWindow@@QEAAJPEAUHWND__@@_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x18002A460 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x1800305C0 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180030BA8 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z @ 0x180030C94 (-FindPrecedingVisibleWindowVisual@CWindowList@@AEAAPEAVCVisual@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031834 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z @ 0x180031890 (-UpdateWindowScale@CWindowList@@QEAAJPEAVCWindowData@@H@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180032E10 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x1800336E4 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800357B8 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x1800397A0 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800397DC (-Create@CTopLevelWindow@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180041030 (-Create@CTopLevelWindow3D@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x1800411C4 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?SetIsMagnifier@CVisual@@QEAAJ_N@Z @ 0x18007F3A8 (-SetIsMagnifier@CVisual@@QEAAJ_N@Z.c)
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800822D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x180082F44 (-IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x180083180 (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // al
  __int64 v5; // rdx
  char v6; // al
  int IsMagnifier; // eax
  int v10; // ebx
  const struct CWindowData **v11; // rcx
  char v12; // r12
  struct _LIST_ENTRY *PrecedingVisibleWindowVisual; // rbx
  __int64 Element; // rax
  __int64 v15; // rcx
  struct CVisual *v16; // r14
  CVisual *v17; // rbx
  CVisual *v18; // rcx
  CWindowList *v19; // rcx
  bool v20; // r8
  int v21; // eax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax
  int v26; // eax
  CVisual *v27; // r14
  HWND v28; // rdx
  CDesktopManager *v29; // rax
  bool v30; // dl
  CVisual *v31; // rax
  bool v32; // zf
  CDwmWinSqm *v33; // rcx
  CDwmWinSqm *v34; // rcx
  struct CVisual *v35; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  unsigned int v37; // [rsp+20h] [rbp-60h]
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v39; // [rsp+40h] [rbp-40h]
  __int128 v40; // [rsp+50h] [rbp-30h]
  __int64 v41; // [rsp+60h] [rbp-20h]
  char v42; // [rsp+68h] [rbp-18h]
  bool v43; // [rsp+C8h] [rbp+48h] BYREF
  CVisual *v44; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *((_BYTE *)a2 + 576);
  v43 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = v3 & 1;
  if ( v5 && v5 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 189) )
    v6 = 0;
  if ( !v6 )
  {
    IsMagnifier = CLivePreview::OnWindowShowHide(
                    *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168),
                    a2,
                    &v43,
                    0);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v37 = 1977;
      goto LABEL_72;
    }
    if ( !v43 )
    {
      v11 = (const struct CWindowData **)*((_QWORD *)a2 + 49);
      if ( v11 )
      {
        IsMagnifier = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        v10 = IsMagnifier;
        if ( IsMagnifier < 0 )
        {
          v37 = 1983;
          goto LABEL_72;
        }
      }
    }
    goto LABEL_24;
  }
  v12 = 0;
  if ( !*((_QWORD *)a2 + 48) )
  {
    v26 = CTopLevelWindow::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v44);
    v27 = v44;
    v10 = v26;
    if ( v26 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xE4u);
    }
    else if ( !CDesktopManager::IsLogonDesktop(*((_QWORD *)a2 + 15)) )
    {
      v28 = (HWND)*((_QWORD *)a2 + 5);
      if ( v28 )
      {
        if ( (*((_BYTE *)a2 + 580) & 0x20) == 0 )
          CTopLevelWindow::SendTopLevelWindowCommand(v27, v28);
      }
    }
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x74Fu);
      return (unsigned int)v10;
    }
    v29 = CDesktopManager::s_pDesktopManagerInstance;
    *((_QWORD *)v27 + 93) = a2;
    IsMagnifier = CTopLevelWindow3D::Create(*((struct IDwmChannel **)v29 + 4), &v44);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v37 = 1875;
      goto LABEL_72;
    }
    v31 = v44;
    *((_QWORD *)v44 + 39) = a2;
    *(_OWORD *)((char *)v31 + 292) = *((_OWORD *)a2 + 3);
    v32 = (*((_BYTE *)a2 + 579) & 1) == 0;
    *((_QWORD *)a2 + 48) = v27;
    *((_QWORD *)a2 + 49) = v31;
    if ( !v32 )
    {
      IsMagnifier = CVisual::SetIsMagnifier(v27, v30);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v37 = 1883;
        goto LABEL_72;
      }
      *((_BYTE *)a2 + 579) &= ~1u;
    }
    if ( (*((_BYTE *)a2 + 580) & 2) != 0 )
    {
      IsMagnifier = CVisual::SetIsCursor(v27, 1u);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v37 = 1889;
        goto LABEL_72;
      }
    }
    if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)a2 + 579) & 2) != 0 && CDwmWinSqm::IsTopLevelAppWindow(v33, a2) )
    {
      CDwmWinSqm::WindowCreated(v34, a2);
      *((_BYTE *)a2 + 578) |= 0x10u;
    }
    v12 = 1;
  }
  PrecedingVisibleWindowVisual = CWindowList::FindPrecedingVisibleWindowVisual(this, (struct _LIST_ENTRY *)a2);
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
                  (struct CVisual *)PrecedingVisibleWindowVisual,
                  1,
                  1);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v37 = 1905;
    goto LABEL_72;
  }
  v16 = (struct CVisual *)*((_QWORD *)a2 + 50);
  if ( v16 )
  {
    if ( *((_QWORD *)v16 + 3) )
    {
      v35 = (struct CVisual *)*((_QWORD *)a2 + 48);
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
      IsMagnifier = VisualCollection::InsertRelative(
                      (struct CVisual *)((char *)RootVisualForDesktop + 32),
                      v16,
                      v35,
                      1,
                      1);
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v37 = 1908;
        goto LABEL_72;
      }
    }
  }
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x400000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x8000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x10000);
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x20000);
  CVisual::SetOpacity(
    *((CVisual **)a2 + 48),
    (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 48) + 744LL) + 332LL) / 255.0);
  v17 = (CVisual *)*((_QWORD *)a2 + 48);
  CVisual::SetDirtyFlags(v17, 0x40000);
  CVisual::SetDirtyFlags(v17, 0x4000000);
  CWindowData::OnColorizationUpdated(a2);
  CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 48));
  CVisual::SetDirtyFlags(*((CVisual **)a2 + 48), 0x4000);
  CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 48));
  CWindowList::OnPositionChange(this, a2, 0);
  IsMagnifier = CWindowList::UpdateWindowScale(this, (struct tagPOINT *)a2, 0);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v37 = 1926;
    goto LABEL_72;
  }
  v18 = (CVisual *)*((_QWORD *)a2 + 48);
  if ( v18 )
    CVisual::SetDirtyFlags(v18, 0x4000000);
  CWindowList::OnGDISurfaceChange(v18, a2);
  IsMagnifier = CWindowList::UpdateThumbnailsForNewWindow(v19, a2);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v37 = 1930;
    goto LABEL_72;
  }
  IsMagnifier = CLivePreview::OnWindowShowHide(
                  *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 168),
                  a2,
                  &v43,
                  0);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v37 = 1934;
    goto LABEL_72;
  }
  v21 = dword_1800B7D98;
  if ( !dword_1800B7D98 )
  {
    LODWORD(v44) = 0;
    if ( (*(int (__fastcall **)(_QWORD, const wchar_t *, CVisual **))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                       + 7)
                                                                    + 8LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 7),
           L"ProjectionBordersUniversal",
           &v44) >= 0
      && (_DWORD)v44 == 1 )
    {
      dword_1800B7D98 = 2;
      goto LABEL_66;
    }
    v21 = 1;
    dword_1800B7D98 = 1;
  }
  if ( v21 == 2 )
LABEL_66:
    CWindowList::ShowProjectionBorder(this, a2, v20);
  if ( !v43 )
  {
    IsMagnifier = CTopLevelWindow3D::ShowWindow(*((const struct CWindowData ***)a2 + 49), 1, v12);
    v10 = IsMagnifier;
    if ( IsMagnifier < 0 )
    {
      v37 = 1970;
      goto LABEL_72;
    }
  }
LABEL_24:
  IsMagnifier = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  v10 = IsMagnifier;
  if ( IsMagnifier < 0 )
  {
    v37 = 1988;
    goto LABEL_72;
  }
  if ( a3 )
  {
    v22 = *((_QWORD *)a2 + 15);
    v41 = -1LL;
    Buffer[0] = v22;
    v39 = 0LL;
    v40 = 0LL;
    Buffer[1] = 0LL;
    v42 = 0;
    v23 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    v24 = v23 ? v23[6] : 0LL;
    if ( *((_QWORD *)a2 + 5) == v24 )
    {
      IsMagnifier = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v10 = IsMagnifier;
      if ( IsMagnifier < 0 )
      {
        v37 = 1998;
LABEL_72:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, IsMagnifier, v37);
      }
    }
  }
  return (unsigned int)v10;
}
