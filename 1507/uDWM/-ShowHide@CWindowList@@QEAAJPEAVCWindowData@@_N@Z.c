/*
 * XREFs of ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC
 * Callers:
 *     ?RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z @ 0x18000C9C4 (-RestoreWindow@CTransitionVisualController@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18002AA70 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E440 (-ShowHide@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z @ 0x1800083A4 (-Create@CTopLevelWindow3D@@SAJQEAUMIL_CHANNEL__@@PEAPEAV1@@Z.c)
 *     ?WinSqmIsOptedIn_CachedInDwm@@YA_NXZ @ 0x180008598 (-WinSqmIsOptedIn_CachedInDwm@@YA_NXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180018D24 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180018DAC (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x18001D130 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001D980 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ @ 0x1800246F0 (-OnBlurBehindUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180025244 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180027A30 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180029D28 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002A474 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?FindPrecedingVisibleWindow@CWindowList@@AEAAPEAVCTopLevelWindow@@PEAU_LIST_ENTRY@@@Z @ 0x18002A568 (-FindPrecedingVisibleWindow@CWindowList@@AEAAPEAVCTopLevelWindow@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CF60 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z @ 0x18002D238 (-OnSizeChange@CWindowList@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z @ 0x180030510 (-OnPositionChange@CWindowList@@QEAAXPEAVCWindowData@@_N@Z.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180030A98 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?CreateWindowWithNotify@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAVCWindowData@@PEAPEAV1@@Z @ 0x180039E24 (-CreateWindowWithNotify@CTopLevelWindow@@SAJQEAUMIL_CHANNEL__@@PEAVCWindowData@@PEAPEAV1@@Z.c)
 *     ?OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z @ 0x1800760DC (-OnParametrizedRenderingChange@CTopLevelWindow@@QEAAJ_N0N@Z.c)
 *     ?ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z @ 0x18007669C (-ApplyContextualizedOpacityParameter@CVisual@@QEAAJN@Z.c)
 *     ?SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z @ 0x180076A44 (-SetHasContextualizedOpacity@CVisual@@QEAAJ_N@Z.c)
 *     ?IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z @ 0x18007AD2C (-IsTopLevelAppWindow@CDwmWinSqm@@QEAA_NPEAVCWindowData@@@Z.c)
 *     ?WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z @ 0x18007AF7C (-WindowCreated@CDwmWinSqm@@QEAAXPEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CWindowList::ShowHide(CWindowList *this, struct CWindowData *a2, char a3)
{
  char v3; // al
  __int64 v5; // rdx
  char v6; // al
  int v9; // eax
  unsigned int v10; // ebx
  const struct CWindowData **v11; // rcx
  int v12; // eax
  char v13; // r15
  int v14; // eax
  CVisual *v15; // rdi
  CDesktopManager *v16; // rax
  int v17; // eax
  CVisual *v18; // rax
  bool v19; // zf
  CDwmWinSqm *v20; // rcx
  struct _LIST_ENTRY *PrecedingVisibleWindow; // rax
  struct CVisual *v22; // rdi
  struct CVisual *v23; // rbx
  struct CVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  CVisual *v26; // rbx
  int v27; // eax
  CVisual *v28; // rcx
  CWindowList *v29; // rcx
  int updated; // eax
  int v31; // eax
  int v32; // eax
  char v33; // dl
  int v34; // eax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rax
  int v39; // eax
  int HasContextualizedOpacity; // eax
  int v41; // eax
  CDwmWinSqm *v42; // rcx
  int v43; // eax
  _QWORD Buffer[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v45; // [rsp+40h] [rbp-40h]
  __int128 v46; // [rsp+50h] [rbp-30h]
  __int64 v47; // [rsp+60h] [rbp-20h]
  char v48; // [rsp+68h] [rbp-18h]
  bool v49; // [rsp+C8h] [rbp+48h] BYREF
  CVisual *v50; // [rsp+D8h] [rbp+58h] BYREF

  v3 = *((_BYTE *)a2 + 552);
  v49 = 0;
  v5 = *((_QWORD *)a2 + 5);
  v6 = v3 & 1;
  if ( v5 && v5 == *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 191) )
    v6 = 0;
  if ( v6 )
  {
    v13 = 0;
    if ( !*((_QWORD *)a2 + 46) )
    {
      v14 = CTopLevelWindow::CreateWindowWithNotify(
              *((struct MIL_CHANNEL__ *const *)CDesktopManager::s_pDesktopManagerInstance + 4),
              a2,
              &v50);
      v10 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v14, 0x856u);
        return v10;
      }
      v15 = v50;
      v16 = CDesktopManager::s_pDesktopManagerInstance;
      *((_QWORD *)v50 + 93) = a2;
      v17 = CTopLevelWindow3D::Create(*((struct MIL_CHANNEL__ *const *)v16 + 4), &v50);
      v10 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x85Au);
        return v10;
      }
      v18 = v50;
      *((_QWORD *)v50 + 39) = a2;
      *(_OWORD *)((char *)v18 + 292) = *((_OWORD *)a2 + 3);
      v19 = (*((_BYTE *)a2 + 555) & 1) == 0;
      *((_QWORD *)a2 + 46) = v15;
      *((_QWORD *)a2 + 47) = v18;
      if ( !v19 )
      {
        HasContextualizedOpacity = CVisual::SetHasContextualizedOpacity(v15, 1);
        v10 = HasContextualizedOpacity;
        if ( HasContextualizedOpacity < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, HasContextualizedOpacity, 0x862u);
          return v10;
        }
        v41 = CVisual::ApplyContextualizedOpacityParameter(v15, 0.0);
        v10 = v41;
        if ( v41 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0x863u);
          return v10;
        }
        *((_BYTE *)a2 + 555) &= ~1u;
      }
      if ( WinSqmIsOptedIn_CachedInDwm() && (*((_BYTE *)a2 + 555) & 2) != 0 && CDwmWinSqm::IsTopLevelAppWindow(v20, a2) )
      {
        CDwmWinSqm::WindowCreated(v42, a2);
        *((_BYTE *)a2 + 554) |= 0x10u;
      }
      v13 = 1;
    }
    PrecedingVisibleWindow = CWindowList::FindPrecedingVisibleWindow(this, (struct _LIST_ENTRY *)a2);
    v22 = (struct CVisual *)*((_QWORD *)a2 + 46);
    v23 = (struct CVisual *)PrecedingVisibleWindow;
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)RootVisualForDesktop + 32), v22, v23, 1, 1);
    v10 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x875u);
      return v10;
    }
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 46), 0x400000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 46), 0x8000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 46), 0x10000);
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 46), 0x20000);
    CVisual::SetOpacity(
      *((CVisual **)a2 + 46),
      (double)*(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)a2 + 46) + 744LL) + 316LL) / 255.0);
    v26 = (CVisual *)*((_QWORD *)a2 + 46);
    CVisual::SetDirtyFlags(v26, 0x40000);
    CVisual::SetDirtyFlags(v26, 0x4000000);
    CWindowData::OnColorizationUpdated(a2);
    CTopLevelWindow::OnBlurBehindUpdated(*((CTopLevelWindow **)a2 + 46));
    CVisual::SetDirtyFlags(*((CVisual **)a2 + 46), 0x4000);
    CTopLevelWindow::OnAccentPolicyUpdated(*((CTopLevelWindow **)a2 + 46));
    CWindowList::OnPositionChange(this, a2, 0);
    v27 = CWindowList::OnSizeChange(this, (struct tagPOINT *)a2);
    v10 = v27;
    if ( v27 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v27, 0x88Au);
      return v10;
    }
    v28 = (CVisual *)*((_QWORD *)a2 + 46);
    if ( v28 )
      CVisual::SetDirtyFlags(v28, 0x4000000);
    CWindowList::OnGDISurfaceChange(v28, a2);
    updated = CWindowList::UpdateThumbnailsForNewWindow(v29, a2);
    v10 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x88Eu);
      return v10;
    }
    v31 = CLivePreview::OnWindowShowHide(
            *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170),
            a2,
            &v49,
            0);
    v10 = v31;
    if ( v31 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v31, 0x892u);
      return v10;
    }
    if ( !v49 )
    {
      v32 = CTopLevelWindow3D::ShowWindow(*((const struct CWindowData ***)a2 + 47), 1, v13);
      v10 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v32, 0x899u);
        return v10;
      }
    }
    v33 = *((_BYTE *)a2 + 556);
    if ( (v33 & 2) != 0 )
    {
      v43 = CTopLevelWindow::OnParametrizedRenderingChange(
              *((CTopLevelWindow **)a2 + 46),
              (v33 & 4) != 0,
              (v33 & 8) != 0,
              *((double *)a2 + 70));
      v10 = v43;
      if ( v43 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v43, 0x8A0u);
        return v10;
      }
    }
  }
  else
  {
    v9 = CLivePreview::OnWindowShowHide(
           *((CLivePreview **)CDesktopManager::s_pDesktopManagerInstance + 170),
           a2,
           &v49,
           0);
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x8A7u);
      return v10;
    }
    if ( !v49 )
    {
      v11 = (const struct CWindowData **)*((_QWORD *)a2 + 47);
      if ( v11 )
      {
        v12 = CTopLevelWindow3D::ShowWindow(v11, 0, 0);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x8ADu);
          return v10;
        }
      }
    }
  }
  v34 = CWindowData::OnVisibilityUpdated((CWindowData **)a2);
  v10 = v34;
  if ( v34 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v34, 0x8B2u);
  }
  else if ( a3 )
  {
    v35 = *((_QWORD *)a2 + 15);
    v47 = -1LL;
    Buffer[0] = v35;
    v45 = 0LL;
    v46 = 0LL;
    Buffer[1] = 0LL;
    v48 = 0;
    v36 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v36 )
      v37 = v36[6];
    else
      v37 = 0LL;
    if ( *((_QWORD *)a2 + 5) == v37 )
    {
      v39 = CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
      v10 = v39;
      if ( v39 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v39, 0x8BEu);
    }
  }
  return v10;
}
