/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x18000D470
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000D994 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180018D24 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180001590 (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x180001608 (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x1800016EC (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x180001C40 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180003CF8 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18000D430 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x18000EE18 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000EE7C (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000FEB8 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x180010110 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x180010260 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x1800152A0 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180029AE8 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 *     Template_pp @ 0x18008D6C4 (Template_pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // r15d
  _BYTE *v4; // r13
  unsigned int i; // edx
  __int64 v6; // rax
  unsigned int v7; // ebp
  _BYTE *v8; // rax
  __int64 v9; // r12
  int v10; // edi
  int v11; // eax
  __int64 v12; // rcx
  struct _LIST_ENTRY *Blink; // rbx
  __int64 v14; // r14
  __int64 v15; // rax
  CTransitionVisualController *v16; // rcx
  char v17; // bp
  __int64 v18; // rdi
  int v19; // r15d
  unsigned int Flink; // eax
  unsigned int Clone; // eax
  CTransitionVisualController *v22; // rcx
  __int64 v23; // r9
  char v24; // r8
  __int64 v25; // rbp
  __int64 v26; // rax
  struct CVisual *v27; // rdi
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // rdx
  __int64 v35; // r9
  __int64 v36; // [rsp+50h] [rbp-58h]
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+58h] [rbp-50h]
  int v38; // [rsp+B0h] [rbp+8h]
  unsigned int v39; // [rsp+B8h] [rbp+10h]
  CImmersiveState *v40; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v41; // [rsp+C8h] [rbp+20h]

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v4 = 0LL;
  v40 = 0LL;
  if ( v2 )
    goto LABEL_53;
  for ( i = 0; i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 24 * v6 + 17) = 0 )
    v6 = i++;
  v7 = *((_DWORD *)this + 34);
  v8 = (_BYTE *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                  WPF::g_pProcessHeap,
                  (int)v7);
  v4 = v8;
  if ( !v8 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2LL,
      -2147024882,
      0x77Fu);
    goto LABEL_53;
  }
  memset_0(v8, 0, (int)v7);
  v9 = v7 - 1;
  v10 = v7 - 1;
  v38 = v7 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           *((_QWORD *)this + 12));
  if ( !WindowListForDesktop )
    goto LABEL_47;
  v11 = CImmersiveState::Create(&v40, *((_QWORD *)this + 12));
  v39 = v11;
  v3 = v11;
  if ( v11 >= 0 )
  {
    Blink = WindowListForDesktop->Blink;
    if ( (int)v9 >= 0 )
    {
      v14 = (int)v9;
      v15 = v7;
      v36 = v7;
      v41 = (int)v9;
      while ( Blink != WindowListForDesktop )
      {
        if ( v14 >= 0 )
        {
          do
          {
            if ( CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v14)
                                                                      + 16LL))
              && CTransitionVisualController::_IsAnimationComponentVisible(
                   v16,
                   *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v14)) )
            {
              break;
            }
            CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v14) + 16LL));
            --v10;
            v4[v14--] = 1;
          }
          while ( v14 >= 0 );
          v15 = v36;
          v38 = v10;
        }
        if ( v10 < 0 )
          break;
        v17 = 0;
        v18 = v15 - 1;
        if ( v15 - 1 < 0 )
          goto LABEL_74;
        v19 = v38;
        do
        {
          if ( CTransitionVisualController::_IsAnimationComponentVisible(
                 (CTransitionVisualController *)v12,
                 *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8 * v18)) )
          {
            v12 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v18);
            if ( *(struct _LIST_ENTRY **)(v12 + 16) == Blink[2].Blink )
            {
              v17 = 1;
              --v19;
              v4[v18] = 1;
              --v14;
            }
          }
          --v18;
        }
        while ( v18 >= 0 );
        v38 = v19;
        v3 = v39;
        if ( !v17 )
        {
LABEL_74:
          if ( Blink[1].Blink )
          {
            if ( Blink[23].Flink )
            {
              if ( ((__int64)Blink[34].Blink & 1) != 0
                && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0
                && (BYTE4(Blink[34].Blink) & 1) == 0 )
              {
                Flink = (unsigned int)Blink[7].Flink;
                if ( Flink > 0xC || (v12 = 4162LL, !_bittest((const int *)&v12, Flink)) )
                {
                  if ( CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
                    && !CImmersiveState::IsLauncherShownAboveWindow(v40, (const struct tagRECT *)Blink)
                    && !CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
                  {
                    Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
                    v23 = Clone;
                    if ( Clone < *((_DWORD *)this + 12) )
                    {
                      v22 = (CTransitionVisualController *)*((_QWORD *)this + 3);
                      v24 = 1;
                      *((_BYTE *)v22 + 24 * Clone + 17) = 1;
                    }
                    else
                    {
                      v24 = 0;
                    }
                    v25 = v41;
                    if ( v41 >= 0 )
                    {
                      do
                      {
                        if ( !v4[v25] )
                          break;
                        v9 = (unsigned int)(v9 - 1);
                        --v25;
                      }
                      while ( v25 >= 0 );
                      v41 = v25;
                    }
                    if ( (int)v9 < 0 )
                    {
                      v26 = 0LL;
                    }
                    else
                    {
                      _mm_lfence();
                      v22 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8 * v9);
                      v26 = *((_QWORD *)v22 + 5);
                    }
                    if ( v26 )
                      v27 = (struct CVisual *)(v26 + 8);
                    else
                      v27 = 0LL;
                    if ( v24 )
                    {
                      VisualCollection::InsertRelative(
                        (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
                        *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v23 + 8),
                        v27,
                        1,
                        1);
                    }
                    else
                    {
                      ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                                    v22,
                                                                    (struct CWindowData *)Blink);
                      v29 = CTransitionVisualController::_StageCloneRelative(
                              this,
                              (struct CTopLevelWindow *)Blink[23].Flink,
                              *((struct CVisual **)this + 2),
                              1,
                              v27,
                              1,
                              0,
                              ShouldMoveOriginalWindowOffscreenForClone,
                              0LL);
                      v39 = v29;
                      v3 = v29;
                      if ( v29 < 0 )
                      {
                        MilInstrumentationCheckHR(
                          0x14u,
                          &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                          2LL,
                          v29,
                          0x7F7u);
                        goto LABEL_51;
                      }
                    }
                    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                    {
                      if ( (int)v9 < 0 )
                      {
                        v35 = 0LL;
                      }
                      else
                      {
                        _mm_lfence();
                        v12 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v9);
                        v35 = *(_QWORD *)(v12 + 16);
                      }
                      Template_pp(v12, v30, Blink[2].Blink, v35);
                    }
                  }
                }
              }
            }
          }
        }
        v10 = v38;
        Blink = Blink->Blink;
        if ( v38 < 0 )
          break;
        v15 = v36;
      }
    }
LABEL_47:
    v31 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v31 >= 0 )
    {
      v32 = 24LL * (int)v31;
      do
      {
        v33 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v33 + v32 + 16) && !*(_BYTE *)(v33 + v32 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(this, (struct CTopLevelWindow **)(v33 + 24 * v31));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v31);
        }
        v32 -= 24LL;
        v31 = (unsigned int)(v31 - 1);
      }
      while ( (int)v31 >= 0 );
    }
    goto LABEL_51;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v11, 0x788u);
LABEL_51:
  if ( v40 )
    CBaseObject::Release(v40);
LABEL_53:
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _BYTE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    v4);
  return v3;
}
