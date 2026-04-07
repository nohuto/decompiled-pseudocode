/*
 * XREFs of ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18004E8FC
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180021124 (-OnAccentPolicyUpdated@CTopLevelWindow@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z @ 0x18003DC64 (-UnregisterForGlobalTimeChangeNotification@CDesktopManager@@SA_NPEAVCVisual@@@Z.c)
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x180041880 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z @ 0x18006E27C (-RestartTimeline@CLivePreviewTimeline@@QEAAJW4Enum@LivePreviewAnimation@@N@Z.c)
 *     ?_UpdateGlassVisual@CLivePreview@@AEAAJXZ @ 0x18006E9E8 (-_UpdateGlassVisual@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateResources@CLivePreview@@AEAAJXZ @ 0x18006EB34 (-_UpdateResources@CLivePreview@@AEAAJXZ.c)
 *     ?_UpdateInstructions@CLivePreview@@AEAAJXZ @ 0x18006EC00 (-_UpdateInstructions@CLivePreview@@AEAAJXZ.c)
 *     ?_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z @ 0x18006EDD4 (-_HideExistingVisuals@CLivePreview@@AEAAJ_N@Z.c)
 *     ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x18006EE6C (-_AddImmersiveBackground@CLivePreview@@AEAAJAEAV-$DynArray@UtagRECT@@$0A@@@@Z.c)
 *     ?SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z @ 0x18006F170 (-SetLivePreviewAlpha@CTopLevelWindow@@QEAAJN@Z.c)
 *     ?GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z @ 0x180073020 (-GetAnimationDuration@CLivePreview@@SAMW4Enum@LivePreviewAnimationDuration@@@Z.c)
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
  __int64 v16; // rdx
  CWindowList *v17; // rcx
  struct _LIST_ENTRY *WindowListForDesktop; // rax
  struct _LIST_ENTRY *v19; // r9
  struct _LIST_ENTRY *i; // r14
  CTopLevelWindow *Flink; // rcx
  char v22; // r13
  unsigned int v23; // r12d
  CTopLevelWindow *v24; // rcx
  int v25; // eax
  CTopLevelWindow *v26; // r15
  CTopLevelWindow *v27; // rcx
  int v28; // eax
  char v29; // bl
  _QWORD *v30; // rcx
  __int64 v31; // rax
  unsigned int v32; // edx
  __int64 v33; // rbx
  int v34; // eax
  int updated; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  __int64 v40; // r14
  __int64 v41; // r15
  CTopLevelWindow *v42; // rcx
  int v43; // eax
  bool v44; // zf
  CTopLevelWindow *v45; // r15
  int v46; // eax
  int v48; // eax
  int v49; // eax
  struct _LIST_ENTRY v50; // xmm0
  int v51; // eax
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5C1u);
  }
  else
  {
    if ( !*(_DWORD *)(*((_QWORD *)this + 62) + 72LL) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                               *((_QWORD *)this + 34));
      v7 = (struct CVisual *)*((_QWORD *)this + 66);
      if ( v7 )
        v7 = (struct CVisual *)*((_QWORD *)v7 + 48);
      v8 = (struct CVisual *)((char *)RootVisualForDesktop + 32);
      inserted = VisualCollection::InsertRelative((struct CVisual *)((char *)RootVisualForDesktop + 32), this, v7, 0, 1);
      v5 = inserted;
      if ( inserted < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x5C6u);
        return v5;
      }
      v10 = this;
      v11 = *(_QWORD *)(*((_QWORD *)this + 67) + 48LL);
      if ( v11 )
        v10 = *(struct CVisual **)(v11 + 384);
      v12 = VisualCollection::InsertRelative(v8, *((struct CVisual **)this + 61), v10, 1, 1);
      v5 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x5CCu);
        return v5;
      }
      v14 = *((_DWORD *)this + 78) - 1;
      v15 = v14;
      if ( v14 >= 0 )
      {
        v40 = 40LL * v14;
        do
        {
          v41 = *(_QWORD *)(v40 + *((_QWORD *)this + 36));
          if ( *(char *)(v41 + 578) >= 0 && (!a2 || *(_QWORD *)(v41 + 40) != *((_QWORD *)a2 + 5)) )
          {
            v42 = *(CTopLevelWindow **)(v41 + 384);
            v57 = 0LL;
            v43 = CTopLevelWindow::CloneVisualTreeForLivePreview(v42, 0, 1, v13, &v57);
            v5 = v43;
            if ( v43 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v43, 0x5D7u);
              return v5;
            }
            v44 = *(_DWORD *)(v41 + 112) == 1;
            v45 = v57;
            if ( v44 )
            {
              v46 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)this + 62) + 32LL),
                      v57,
                      0LL,
                      0,
                      1);
              v5 = v46;
              if ( v46 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v46, 0x5DBu);
                return v5;
              }
            }
            else
            {
              v48 = VisualCollection::InsertRelative(
                      (VisualCollection *)(*((_QWORD *)this + 63) + 32LL),
                      v57,
                      0LL,
                      0,
                      1);
              v5 = v48;
              if ( v48 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x5DFu);
                return v5;
              }
            }
            *(_QWORD *)(*((_QWORD *)this + 36) + v40 + 8) = v45;
          }
          v40 -= 40LL;
          --v15;
        }
        while ( v15 >= 0 );
      }
      v54 = 0;
      v55 = 0;
      v16 = *((_QWORD *)this + 34);
      v17 = (CWindowList *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
      v53 = 0LL;
      v56 = 0;
      WindowListForDesktop = CWindowList::GetWindowListForDesktop(v17, v16);
      v58 = WindowListForDesktop;
      for ( i = WindowListForDesktop->Blink; i != WindowListForDesktop; i = i->Blink )
      {
        Flink = (CTopLevelWindow *)i[24].Flink;
        if ( Flink && LODWORD(i[7].Flink) == 12 )
        {
          v22 = 0;
          v23 = CAccent::s_clrCurrentAccentBackground;
          if ( LODWORD(i[10].Flink) != CAccent::s_clrCurrentAccentBackground )
          {
            v23 = (unsigned int)i[10].Flink;
            LODWORD(i[10].Flink) = CAccent::s_clrCurrentAccentBackground;
            CTopLevelWindow::OnAccentPolicyUpdated(Flink);
            v22 = 1;
          }
          v24 = (CTopLevelWindow *)i[24].Flink;
          v57 = 0LL;
          v25 = CTopLevelWindow::CloneVisualTreeForLivePreview(v24, 0, 1, (__int64)v19, &v57);
          v5 = v25;
          if ( v25 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x5FCu);
            goto LABEL_73;
          }
          v26 = v57;
          if ( v57 && !*((_QWORD *)v57 + 93) )
            *((_QWORD *)v57 + 93) = i;
          if ( v22 )
          {
            v27 = (CTopLevelWindow *)i[24].Flink;
            LODWORD(i[10].Flink) = v23;
            CTopLevelWindow::OnAccentPolicyUpdated(v27);
          }
          v28 = VisualCollection::InsertRelative((VisualCollection *)(*((_QWORD *)this + 61) + 32LL), v26, 0LL, 0, 1);
          v5 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, 0x609u);
LABEL_73:
            DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v53);
            return v5;
          }
          if ( (BYTE4(i[36].Flink) & 1) != 0 )
          {
            v29 = 0;
            CTopLevelWindow::SetLivePreviewAlpha(v26, 0.0);
          }
          else
          {
            v29 = 1;
          }
          v30 = (_QWORD *)((char *)this + 384);
          *(_QWORD *)&v52 = v26;
          v31 = *((unsigned int *)this + 102);
          BYTE8(v52) = v29;
          v32 = v31 + 1;
          if ( (int)v31 + 1 >= (unsigned int)v31 )
          {
            if ( v32 > *((_DWORD *)this + 101) )
            {
              v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v30, 0x10u, 1, &v52);
              if ( v49 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v49, 0xC0u);
            }
            else
            {
              *(_OWORD *)(*v30 + 16 * v31) = v52;
              *((_DWORD *)this + 102) = v32;
            }
          }
          else
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          v33 = v56;
          v19 = i + 3;
          if ( v56 + 1 < v56 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
          }
          else if ( v56 + 1 <= v55 )
          {
            v50 = *v19;
            ++v56;
            *(struct _LIST_ENTRY *)(v53 + 16 * v33) = v50;
          }
          else
          {
            v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v53, 0x10u, 1, v19);
            if ( v34 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
          }
          if ( v26 )
            CBaseObject::Release(v26);
          WindowListForDesktop = v58;
        }
      }
      CLivePreview::_AddImmersiveBackground(this, &v53);
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0x61Bu);
        goto LABEL_73;
      }
      v36 = CLivePreview::_UpdateResources((LPARAM)this);
      v5 = v36;
      if ( v36 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v36, 0x61Cu);
        goto LABEL_73;
      }
      v37 = CLivePreview::_UpdateInstructions(this);
      v5 = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v37, 0x61Du);
        goto LABEL_73;
      }
      v38 = CVisual::RenderRecursive(*((CVisual **)this + 64));
      v5 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x61Fu);
        goto LABEL_73;
      }
      v39 = CVisual::RenderRecursive(*((CVisual **)this + 63));
      v5 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x620u);
        goto LABEL_73;
      }
      v51 = CVisual::RenderRecursive(*((CVisual **)this + 62));
      v5 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x621u);
        goto LABEL_73;
      }
      DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v53);
    }
    *((_DWORD *)this + 142) = 3;
    CLivePreview::GetAnimationDuration(0LL);
    CLivePreviewTimeline::RestartTimeline(*((_QWORD *)this + 56));
    CDesktopManager::UnregisterForGlobalTimeChangeNotification(this);
    CDesktopManager::RegisterForGlobalTimeChangeNotification(this);
  }
  return v5;
}
