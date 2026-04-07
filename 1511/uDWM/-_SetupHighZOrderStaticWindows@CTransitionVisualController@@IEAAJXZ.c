/*
 * XREFs of ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180008A30
 * Callers:
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x18000908C (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001E5E8 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 * Callees:
 *     ?_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z @ 0x180007D28 (-_FindClone@CTransitionVisualController@@IEAAIPEAVCWindowData@@_N@Z.c)
 *     ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180007DEC (-_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z.c)
 *     ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x18000894C (-_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@.c)
 *     ?_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z @ 0x180008E70 (-_CleanupHighZOrderClone@CTransitionVisualController@@IEAAXAEAUTlwPair@1@@Z.c)
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x18000AB78 (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 *     ?RemoveAt@?$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z @ 0x18000B040 (-RemoveAt@-$DynArray@UTlwPair@CTransitionVisualController@@$0A@@@QEAAJI@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B8E4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x18000BCB0 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18001108C (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800136E4 (-HasVisibleStyle@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001CDE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180020020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x18002B450 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     ?Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x18002B4D0 (-Alloc@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x18002CC78 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180070450 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     Template_pp @ 0x180090C3C (Template_pp.c)
 */

__int64 __fastcall CTransitionVisualController::_SetupHighZOrderStaticWindows(CTransitionVisualController *this)
{
  bool v2; // zf
  unsigned int v3; // r13d
  _BYTE *v4; // r15
  unsigned int i; // edx
  __int64 v6; // rax
  __int64 v7; // r14
  void *(__fastcall *v8)(WPF::ProcessHeapImpl *__hidden, unsigned __int64); // rsi
  _BYTE *v9; // rax
  int v10; // esi
  int v11; // r12d
  int v12; // eax
  struct _LIST_ENTRY *Blink; // rdi
  __int64 v14; // rbp
  CImmersiveState *v15; // r14
  HWND v16; // rcx
  CTransitionVisualController *v17; // rcx
  char v18; // bp
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int Flink; // eax
  int v23; // ecx
  unsigned int Clone; // eax
  char v25; // r8
  __int64 v26; // r9
  CTransitionVisualController *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  struct CVisual *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rdx
  void (__fastcall *v36)(WPF::ProcessHeapImpl *__hidden, void *); // rdi
  bool ShouldMoveOriginalWindowOffscreenForClone; // al
  int v39; // eax
  __int64 v40; // r9
  struct _LIST_ENTRY *WindowListForDesktop; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  int v43; // [rsp+B0h] [rbp+8h]
  __int64 v44; // [rsp+B8h] [rbp+10h]
  CImmersiveState *v45; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v46; // [rsp+C8h] [rbp+20h]

  v2 = *((_QWORD *)this + 12) == -1LL;
  v3 = 0;
  v4 = 0LL;
  v45 = 0LL;
  if ( v2 )
    goto LABEL_57;
  for ( i = 0; i < *((_DWORD *)this + 12); *(_BYTE *)(*((_QWORD *)this + 3) + 24 * v6 + 17) = 0 )
    v6 = i++;
  v7 = *((unsigned int *)this + 34);
  v8 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *__hidden, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL);
  if ( v8 == WPF::ProcessHeapImpl::Alloc )
    v9 = WPF::ProcessHeapImpl::Alloc(WPF::g_pProcessHeap, (int)v7);
  else
    v9 = (_BYTE *)v8(WPF::g_pProcessHeap, (int)v7);
  v4 = v9;
  if ( !v9 )
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR(
      0x14u,
      &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
      2u,
      -2147024882,
      0x7DFu);
    goto LABEL_57;
  }
  memset_0(v9, 0, (int)v7);
  v10 = v7 - 1;
  v11 = v7 - 1;
  v43 = v7 - 1;
  WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 167),
                           *((_QWORD *)this + 12));
  if ( !WindowListForDesktop )
    goto LABEL_51;
  v12 = CImmersiveState::Create(&v45, *((_QWORD *)this + 12));
  v3 = v12;
  if ( v12 >= 0 )
  {
    Blink = WindowListForDesktop->Blink;
    if ( v10 >= 0 )
    {
      v14 = v10;
      v42 = v7;
      v15 = v45;
      v44 = v10;
      v46 = v10;
LABEL_11:
      if ( Blink != WindowListForDesktop )
      {
        while ( v11 >= 0 )
        {
          v16 = *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11) + 16LL);
          if ( v16 != HWND_MESSAGE|0x2LL )
          {
            if ( (GetWindowLongPtrW(v16, -16) & 0x10000000) != 0
              || CTransitionVisualController::_IsAnimationComponentVisible(
                   v17,
                   *(struct CAnimationComponent **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v11)) )
            {
              v18 = 0;
              v19 = v42 - 1;
              if ( v42 - 1 < 0 )
                goto LABEL_82;
              v20 = v44;
              do
              {
                v21 = *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v19);
                if ( !*(_BYTE *)(v21 + 65)
                  && *(_DWORD *)(*(_QWORD *)(v21 + 128) + 24LL) != 4
                  && (*(_BYTE *)(v21 + 67) || (GetWindowLongPtrW(*(HWND *)(v21 + 16), -16) & 0x10000000) != 0)
                  && *(struct _LIST_ENTRY **)(*(_QWORD *)(*((_QWORD *)this + 14) + 8 * v19) + 16LL) == Blink[2].Blink )
                {
                  v18 = 1;
                  --v11;
                  v4[v19] = 1;
                  --v20;
                }
                --v19;
              }
              while ( v19 >= 0 );
              v44 = v20;
              v15 = v45;
              if ( !v18 )
              {
LABEL_82:
                if ( Blink[1].Blink )
                {
                  if ( Blink[24].Flink )
                  {
                    if ( ((__int64)Blink[35].Blink & 1) != 0
                      && (HIDWORD(Blink[6].Flink) & 0x20000000) == 0
                      && (BYTE4(Blink[35].Blink) & 1) == 0 )
                    {
                      Flink = (unsigned int)Blink[7].Flink;
                      if ( Flink > 0xC || (v23 = 4162, !_bittest(&v23, Flink)) )
                      {
                        if ( CTransitionVisualController::ShouldCloneWindow((HWND)Blink[2].Blink)
                          && !CImmersiveState::IsLauncherShownAboveWindow(v15, (const struct CWindowData *)Blink)
                          && !CTransitionVisualController::_IsOwnedByVisibleAC(this, (const struct CWindowData *)Blink) )
                        {
                          Clone = CTransitionVisualController::_FindClone(this, (struct CWindowData *)Blink, 1);
                          v26 = Clone;
                          if ( Clone >= *((_DWORD *)this + 12) )
                            v25 = 0;
                          else
                            *(_BYTE *)(*((_QWORD *)this + 3) + 24LL * Clone + 17) = v25;
                          v27 = (CTransitionVisualController *)v46;
                          if ( v46 >= 0 )
                          {
                            v28 = v43;
                            do
                            {
                              if ( !v4[(_QWORD)v27] )
                                break;
                              --v28;
                              v27 = (CTransitionVisualController *)((char *)v27 - 1);
                            }
                            while ( (__int64)v27 >= 0 );
                            v46 = (__int64)v27;
                            v43 = v28;
                          }
                          if ( v43 < 0 )
                          {
                            v29 = 0LL;
                          }
                          else
                          {
                            v27 = *(CTransitionVisualController **)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v43);
                            v29 = *((_QWORD *)v27 + 5);
                          }
                          if ( v29 )
                            v30 = (struct CVisual *)(v29 + 8);
                          else
                            v30 = 0LL;
                          if ( v25 )
                          {
                            VisualCollection::InsertRelative(
                              (VisualCollection *)(*((_QWORD *)this + 2) + 32LL),
                              *(struct CVisual **)(*((_QWORD *)this + 3) + 24 * v26 + 8),
                              v30,
                              1,
                              1);
                          }
                          else
                          {
                            ShouldMoveOriginalWindowOffscreenForClone = CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
                                                                          v27,
                                                                          (struct CWindowData *)Blink);
                            v39 = CTransitionVisualController::_StageCloneRelative(
                                    this,
                                    (struct CTopLevelWindow *)Blink[24].Flink,
                                    *((struct CVisual **)this + 2),
                                    1,
                                    v30,
                                    1,
                                    0,
                                    ShouldMoveOriginalWindowOffscreenForClone,
                                    0LL);
                            v3 = v39;
                            if ( v39 < 0 )
                            {
                              MilInstrumentationCheckHR(
                                0x14u,
                                &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                                2u,
                                v39,
                                0x869u);
                              goto LABEL_55;
                            }
                          }
                          if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
                          {
                            if ( v43 < 0 )
                            {
                              v40 = 0LL;
                            }
                            else
                            {
                              v32 = *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * (unsigned int)v43);
                              v40 = *(_QWORD *)(v32 + 16);
                            }
                            Template_pp(v32, v31, Blink[2].Blink, v40);
                          }
                        }
                      }
                    }
                  }
                }
              }
              Blink = Blink->Blink;
              if ( v11 < 0 )
                break;
              v14 = v44;
              goto LABEL_11;
            }
            CTransitionVisualController::HasVisibleStyle(*(HWND *)(*(_QWORD *)(*((_QWORD *)this + 14)
                                                                             + 8LL * (unsigned int)v11)
                                                                 + 16LL));
          }
          --v11;
          v4[v14--] = 1;
          v44 = v14;
        }
      }
    }
LABEL_51:
    v33 = (unsigned int)(*((_DWORD *)this + 12) - 1);
    if ( (int)v33 >= 0 )
    {
      v34 = 24LL * (int)v33;
      do
      {
        v35 = *((_QWORD *)this + 3);
        if ( *(_BYTE *)(v35 + v34 + 16) && !*(_BYTE *)(v35 + v34 + 17) )
        {
          CTransitionVisualController::_CleanupHighZOrderClone(
            this,
            (struct CTransitionVisualController::TlwPair *)(v35 + 24 * v33));
          DynArray<CTransitionVisualController::TlwPair,0>::RemoveAt((char *)this + 24, (unsigned int)v33);
        }
        v34 -= 24LL;
        v33 = (unsigned int)(v33 - 1);
      }
      while ( (int)v33 >= 0 );
    }
    goto LABEL_55;
  }
  MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2u, v12, 0x7E8u);
LABEL_55:
  if ( v45 )
    CBaseObject::Release(v45);
LABEL_57:
  v36 = *(void (__fastcall **)(WPF::ProcessHeapImpl *__hidden, void *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
  if ( v36 == WPF::ProcessHeapImpl::Free )
    WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
  else
    v36(WPF::g_pProcessHeap, v4);
  return v3;
}
