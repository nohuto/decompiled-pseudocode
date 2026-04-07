/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x180069564
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180030B1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18000831C (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18001281C (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180025024 (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180025244 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x1800681CC (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180068604 (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x180069CE0 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006AAB4 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006AC00 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006ADD4 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006B8F8 (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x180076204 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 */

__int64 __fastcall CLivePreview::_FadeOutToGlass(CLivePreview *this, const struct CWindowData *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CVisual *RootVisualForDesktop; // rax
  struct CVisual *v7; // r8
  VisualCollection *v8; // rdi
  int inserted; // eax
  struct CVisual *v10; // r8
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // r14
  __int64 v17; // r15
  CTopLevelWindow *v18; // rcx
  int v19; // eax
  bool v20; // zf
  CTopLevelWindow *v21; // r15
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  CWindowList *v25; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *v27; // r9
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Flink; // rcx
  char v30; // r13
  unsigned int v31; // r12d
  CTopLevelWindow *v32; // rcx
  int v33; // eax
  CTopLevelWindow *v34; // r15
  CTopLevelWindow *v35; // rcx
  int v36; // eax
  char v37; // bl
  _QWORD *v38; // rcx
  __int64 v39; // rax
  unsigned int v40; // edx
  int v41; // eax
  __int64 v42; // rbx
  struct _LIST_ENTRY v43; // xmm0
  int v44; // eax
  int updated; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  __int128 v52; // [rsp+30h] [rbp-30h] BYREF
  __int128 v53; // [rsp+40h] [rbp-20h] BYREF
  int v54; // [rsp+50h] [rbp-10h]
  unsigned int v55; // [rsp+54h] [rbp-Ch]
  unsigned int v56; // [rsp+58h] [rbp-8h]
  CTopLevelWindow *v57; // [rsp+B0h] [rbp+50h] BYREF
  struct _LIST_ENTRY *v58; // [rsp+B8h] [rbp+58h]

  v4 = CLivePreview::_HideExistingVisuals(this, 1);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v4, 0x5A0u);
    return v5;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 62) + 72LL) )
    goto LABEL_75;
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           *((_QWORD *)this + 34));
  v7 = (struct CVisual *)*((_QWORD *)this + 66);
  if ( v7 )
    v7 = (struct CVisual *)*((_QWORD *)v7 + 46);
  v8 = (struct CVisual *)((char *)RootVisualForDesktop + 32);
  inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)RootVisualForDesktop + 32), this, v7, 0, 1);
  v5 = inserted;
  if ( inserted >= 0 )
  {
    v10 = this;
    v11 = *(_QWORD *)(*((_QWORD *)this + 67) + 48LL);
    if ( v11 )
      v10 = *(struct CVisual **)(v11 + 368);
    v12 = VisualCollection::InsertRelative(v8, *((struct CVisual **)this + 61), v10, 1, 1);
    v5 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x5ABu);
      return v5;
    }
    v14 = *((_DWORD *)this + 78) - 1;
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = 40LL * v14;
      do
      {
        v17 = *(_QWORD *)(v16 + *((_QWORD *)this + 36));
        if ( *(char *)(v17 + 554) >= 0 && (!a2 || *(_QWORD *)(v17 + 40) != *((_QWORD *)a2 + 5)) )
        {
          v18 = *(CTopLevelWindow **)(v17 + 368);
          v57 = 0LL;
          v19 = CTopLevelWindow::CloneVisualTreeForLivePreview(v18, 0, 1, v13, &v57);
          v5 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x5B6u);
            return v5;
          }
          v20 = *(_DWORD *)(v17 + 112) == 1;
          v21 = v57;
          if ( v20 )
          {
            v22 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 62) + 32LL), v57, 0LL, 0, 1);
            v5 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v22, 0x5BAu);
              return v5;
            }
          }
          else
          {
            v23 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 63) + 32LL), v57, 0LL, 0, 1);
            v5 = v23;
            if ( v23 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v23, 0x5BEu);
              return v5;
            }
          }
          *(_QWORD *)(*((_QWORD *)this + 36) + v16 + 8) = v21;
        }
        v16 -= 40LL;
        --v15;
      }
      while ( v15 >= 0 );
    }
    v54 = 0;
    v55 = 0;
    v24 = *((_QWORD *)this + 34);
    v25 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 167);
    v53 = 0LL;
    v56 = 0;
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(v25, v24);
    v58 = WindowListForDesktop;
    for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
    {
      Flink = (CTopLevelWindow *)i[23].Flink;
      if ( Flink && LODWORD(i[7].Flink) == 12 )
      {
        v30 = 0;
        v31 = CAccent::s_clrCurrentAccentBackground;
        if ( LODWORD(i[10].Flink) != CAccent::s_clrCurrentAccentBackground )
        {
          v31 = (unsigned int)i[10].Flink;
          LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
          CTopLevelWindow::OnAccentPolicyUpdated(Flink);
          v30 = 1;
        }
        v32 = (CTopLevelWindow *)i[23].Flink;
        v57 = 0LL;
        v33 = CTopLevelWindow::CloneVisualTreeForLivePreview(v32, 0, 1, (__int64)v27, &v57);
        v5 = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v33, 0x5DBu);
          goto LABEL_63;
        }
        v34 = v57;
        if ( v57 && !*((_QWORD *)v57 + 93) )
          *((_QWORD *)v57 + 93) = i;
        if ( v30 )
        {
          v35 = (CTopLevelWindow *)i[23].Flink;
          LODWORD(i[10].Flink) = v31;
          CTopLevelWindow::OnAccentPolicyUpdated(v35);
        }
        v36 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), v34, 0LL, 0, 1);
        v5 = v36;
        if ( v36 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v36, 0x5E8u);
          goto LABEL_63;
        }
        if ( (BYTE4(i[34].Blink) & 1) != 0 )
        {
          v37 = 0;
          CTopLevelWindow::SetLivePreviewAlpha(v34, 0.0);
        }
        else
        {
          v37 = 1;
        }
        v38 = (_QWORD *)((char *)this + 384);
        *(_QWORD *)&v52 = v34;
        v39 = *((unsigned int *)this + 102);
        BYTE8(v52) = v37;
        v40 = v39 + 1;
        if ( (int)v39 + 1 >= (unsigned int)v39 )
        {
          if ( v40 > *((_DWORD *)this + 101) )
          {
            v41 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v38, 0x10u, 1, &v52);
            if ( v41 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, 0xC0u);
          }
          else
          {
            *(_OWORD *)(*v38 + 16 * v39) = v52;
            *((_DWORD *)this + 102) = v40;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        v42 = v56;
        v27 = i + 3;
        if ( v56 + 1 >= v56 )
        {
          if ( v56 + 1 > v55 )
          {
            v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v53, 0x10u, 1, v27);
            if ( v44 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v44, 0xC0u);
          }
          else
          {
            v43 = *v27;
            ++v56;
            *(struct _LIST_ENTRY *)(v53 + 16 * v42) = v43;
          }
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
        }
        if ( v34 )
          CBaseObject::Release(v34);
        WindowListForDesktop = v58;
      }
    }
    CLivePreview::_AddImmersiveBackground((__int64)this, (__int64)&v53);
    VisualCollection::InsertRelative(
      (VisualCollection *)(*((_QWORD *)this + 61) + 32LL),
      *((struct CVisual **)this + 63),
      0LL,
      0,
      1);
    updated = CLivePreview::_UpdateGlassVisual(this);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x5FAu);
LABEL_63:
      DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v53);
      return v5;
    }
    v46 = CLivePreview::_UpdateResources((LPARAM)this);
    v5 = v46;
    if ( v46 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v46, 0x5FBu);
      goto LABEL_63;
    }
    v47 = CLivePreview::_UpdateInstructions(this);
    v5 = v47;
    if ( v47 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v47, 0x5FCu);
      goto LABEL_63;
    }
    v48 = CVisual::RenderRecursive(*((CVisual **)this + 64));
    v5 = v48;
    if ( v48 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v48, 0x5FEu);
      goto LABEL_63;
    }
    v49 = CVisual::RenderRecursive(*((CVisual **)this + 63));
    v5 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v49, 0x5FFu);
      goto LABEL_63;
    }
    v50 = CVisual::RenderRecursive(*((CVisual **)this + 62));
    v5 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v50, 0x600u);
      goto LABEL_63;
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v53);
LABEL_75:
    *((_DWORD *)this + 142) = 3;
    CLivePreview::GetAnimationDuration(0);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 56));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
    return v5;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, inserted, 0x5A5u);
  return v5;
}
