/*
 * XREFs of zzzComposeDesktop @ 0x140201D04
 * Callers:
 *     xxxCreateDesktopEx @ 0x14018BC74 (xxxCreateDesktopEx.c)
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 * Callees:
 *     IsWindowContentProtected @ 0x14001475C (IsWindowContentProtected.c)
 *     ??$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z @ 0x1400197C8 (--$GetProp@VCVisRgnTrackerProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCVisRgnTrackerProp@@@Z.c)
 *     GreZorderSprite @ 0x14001DFD4 (GreZorderSprite.c)
 *     GreUpdateSpriteVisRgn @ 0x1400384E0 (GreUpdateSpriteVisRgn.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     MapDesktop @ 0x140059FC0 (MapDesktop.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1400932CC (-PostEventMessageEx@@YAHPEAUtagTHREADINFO@@PEAUtagQ@@KPEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOUR.c)
 *     zzzEnableDwmPointerSupport @ 0x1400F8118 (zzzEnableDwmPointerSupport.c)
 *     ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1400F82DC (-BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z.c)
 *     GreRemoveDisplayDriverRealizations @ 0x1400F8354 (GreRemoveDisplayDriverRealizations.c)
 *     ?IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z @ 0x1400F86BC (-IsWindowComposedOnDesktop@@YAHQEAUtagWND@@QEAUtagDESKTOP@@@Z.c)
 *     ComposeWindow @ 0x14012CB68 (ComposeWindow.c)
 *     ?ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z @ 0x14012CD74 (-ComposeWindowIfNeeded@@YAJPEAUtagWND@@H@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012E364 (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x14012E9F0 (IsDesktopWindow.c)
 *     IsWindowBeingDestroyed @ 0x14014D20C (IsWindowBeingDestroyed.c)
 *     ?MarkDirty@CVisRgnTrackerProp@@QEAAXXZ @ 0x1401D1884 (-MarkDirty@CVisRgnTrackerProp@@QEAAXXZ.c)
 *     ?FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ @ 0x1401D24F8 (-FreeTrackedRegions@CVisRgnTrackerProp@@AEAAXXZ.c)
 *     ?ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z @ 0x1402022A4 (-ReNotifyDwm@CHwndBitmapProp@@SAXPEAUtagWND@@@Z.c)
 *     ?ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z @ 0x140202384 (-ReNotifyDwm@CHwndTargetProp@@SAXPEAUtagWND@@@Z.c)
 *     ??$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z @ 0x1402026DC (--$GetProp@VCSwapChainProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCSwapChainProp@@@Z.c)
 *     ?NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z @ 0x14020272C (-NotifyDwm@CSwapChainProp@@QEAAHQEAUtagWND@@@Z.c)
 *     DwmAsyncShellWindowChange @ 0x14020292C (DwmAsyncShellWindowChange.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 *     MagpComposeDesktop @ 0x140203264 (MagpComposeDesktop.c)
 *     ?ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z @ 0x1402417DC (-ChangeWindowTreeProtection@@YAHPEAUtagWND@@K@Z.c)
 *     GreTransferDwmStateToSpriteState @ 0x14028A2CC (GreTransferDwmStateToSpriteState.c)
 */

__int64 __fastcall zzzComposeDesktop(struct tagDESKTOP *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rdi
  int v6; // ecx
  int v7; // r15d
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  struct tagWND *v21; // rcx
  struct tagWND *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  void *v29; // rax
  struct tagWND *NextLayeredWindow; // rsi
  int v31; // eax
  HWND v32; // rdi
  int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // r12d
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // rdi
  __int64 v44; // rdx
  __int64 v45; // rcx
  struct tagWND *v46; // r9
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rbx
  struct tagDESKTOP *v55; // rax
  struct tagDESKTOP *v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rdx
  char v62; // r9
  int v63; // eax
  int v64; // eax
  struct tagWND *v65; // rcx
  void *v66; // rax
  _QWORD v67[5]; // [rsp+40h] [rbp-30h] BYREF
  int v68; // [rsp+68h] [rbp-8h]
  int v69; // [rsp+6Ch] [rbp-4h]
  int v70; // [rsp+B0h] [rbp+40h]
  CVisRgnTrackerProp *v71; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v72; // [rsp+C0h] [rbp+50h]

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *((_QWORD *)a1 + 1);
  v5 = UserSessionState;
  v72 = UserSessionState;
  v6 = *(_DWORD *)(*(_QWORD *)v4 + 64LL);
  if ( (v6 & 1) != 0 )
    return 0;
  *(_DWORD *)(*(_QWORD *)v4 + 64LL) = v6 | 1;
  v9 = ReferenceDwmProcess();
  v10 = v9;
  if ( v9 )
  {
    v67[0] = 0LL;
    v67[1] = 0LL;
    v67[2] = 1LL;
    v67[3] = v9;
    v67[4] = a1;
    v68 = 0;
    v69 = 1;
    if ( (int)MapDesktop((__int64)v67) < 0 )
    {
      SetLastNtError(-1073741790);
      *(_DWORD *)(**((_QWORD **)a1 + 1) + 64LL) &= ~1u;
      DereferenceDwmProcess(v10);
      return 3221225473LL;
    }
    DereferenceDwmProcess(v10);
  }
  v11 = DCompositionDwmInitialize();
  v13 = (__int64 *)*((_QWORD *)a1 + 1);
  v7 = v11;
  v70 = v11;
  v14 = *v13;
  if ( v11 < 0 )
  {
    *(_DWORD *)(v14 + 64) &= ~1u;
    return 3221225473LL;
  }
  v15 = *(_QWORD *)v14;
  v16 = W32GetUserSessionState(v13, v12);
  if ( !(unsigned int)GreTransferSpriteStateToDwmState(*(HDEV *)(*(_QWORD *)(v16 + 56968) + 40LL), v15) )
  {
    v7 = -1073741823;
LABEL_8:
    v20 = (_QWORD *)*((_QWORD *)a1 + 1);
    if ( v7 < 0 )
    {
      *(_DWORD *)(*v20 + 64LL) &= ~1u;
    }
    else
    {
      v21 = (struct tagWND *)v20[3];
      v22 = (struct tagWND *)*((_QWORD *)v21 + 14);
      if ( v22 )
      {
        do
        {
          NextLayeredWindow = v22;
          v22 = (struct tagWND *)*((_QWORD *)v22 + 14);
        }
        while ( v22 );
        if ( NextLayeredWindow != v21 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)NextLayeredWindow + 5) + 26LL) & 8) == 0 )
            goto LABEL_21;
          do
          {
            v31 = IsWindowDesktopComposed(NextLayeredWindow);
            v32 = *(HWND *)NextLayeredWindow;
            v33 = v31;
            v36 = W32GetUserSessionState(v35, v34);
            GreZorderSprite(*(Gre::Base **)(*(_QWORD *)(v36 + 56968) + 40LL), v32, 0LL, v33);
LABEL_21:
            NextLayeredWindow = GetNextLayeredWindow(NextLayeredWindow);
          }
          while ( NextLayeredWindow );
        }
      }
      v23 = W32GetUserSessionState(v21, v17);
      MagpComposeDesktop(v23 + 66032, a1);
      BroadcastCompositionChange(a1);
    }
    GreLockVisRgn(v18, v17, v19);
    v26 = W32GetUserSessionState(v25, v24);
    GreUpdateSpriteVisRgn(*(Gre::Base **)(*(_QWORD *)(v26 + 56968) + 40LL), 0);
    GreUnlockVisRgn(v27);
    if ( v7 >= 0 )
    {
      v29 = (void *)ReferenceDwmApiPort(*((_QWORD *)a1 + 1), v28);
      DwmAsyncShellWindowChange(v29);
    }
    return (unsigned int)v7;
  }
  if ( *(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) )
  {
    v37 = 0;
    W32GetUserSessionState(v18, v17);
    while ( 1 )
    {
      v38 = *(_QWORD *)(v5 + 19920);
      v18 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19864);
      if ( *(_BYTE *)(32LL * v37 + v38 + 24) == 1 )
      {
        v54 = *(_QWORD *)(v18 + 40LL * v37);
        v55 = *(struct tagDESKTOP **)(v54 + 24);
        if ( v55 )
        {
          if ( v55 == a1
            && !(unsigned int)IsWindowBeingDestroyed(v54)
            && (*(_BYTE *)(*(_QWORD *)(v54 + 40) + 31LL) & 0x10) != 0 )
          {
            if ( IsTopLevelWindow(v54) || (LOBYTE(v63) = IsDesktopWindow(v54), v63) )
            {
              if ( (v62 & 1) != 0 )
                PostEventMessageEx(
                  *(struct tagTHREADINFO **)(v54 + 16),
                  *(struct tagQ **)(*(_QWORD *)(v54 + 16) + 464LL),
                  0x10u,
                  (struct tagWND *)v54,
                  0,
                  0LL,
                  0LL,
                  0LL);
              LOBYTE(v64) = IsDesktopWindow(v54);
              v70 = ComposeWindow(v65, v64 != 0 ? 5 : 1);
              v7 = v70;
              if ( v70 < 0 )
                break;
            }
          }
        }
        if ( (unsigned int)IsWindowContentProtected(v54, v17) )
        {
          if ( (*(_BYTE *)(*(_QWORD *)(v54 + 40) + 27LL) & 0x20) == 0 )
            ComposeWindowIfNeeded((struct tagWND *)v54, 1);
          ChangeWindowTreeProtection((struct tagWND *)v54, 1u);
        }
        v56 = *(struct tagDESKTOP **)(v54 + 24);
        if ( v56 && v56 == a1 && !(unsigned int)IsWindowBeingDestroyed(v54) )
        {
          CHwndTargetProp::ReNotifyDwm((struct tagWND *)v54);
          CHwndBitmapProp::ReNotifyDwm((struct tagWND *)v54);
          if ( !(unsigned int)UserIsRemoteAndNotDisconnectConnection(v58, v57)
            || (unsigned int)UserIsRemoteAndNotDisconnectConnection(v60, v59) )
          {
            v71 = 0LL;
            if ( (unsigned int)CWindowProp::GetProp<CSwapChainProp>(v54, &v71) )
              CSwapChainProp::NotifyDwm(v71, (struct tagWND *const)v54);
          }
          v71 = 0LL;
          if ( (unsigned int)CWindowProp::GetProp<CVisRgnTrackerProp>(v54, (__int64 *)&v71) )
          {
            CVisRgnTrackerProp::FreeTrackedRegions(v71);
            CVisRgnTrackerProp::MarkDirty(v71, v61);
          }
        }
        if ( v7 < 0 )
          break;
      }
      ++v37;
      v39 = W32GetUserSessionState(v18, v17);
      v5 = v72;
      if ( v37 > *(_DWORD *)(v39 + 19848) )
      {
        if ( v7 >= 0 )
          goto LABEL_8;
        break;
      }
    }
    if ( v37 <= *(_DWORD *)(W32GetUserSessionState(v18, v17) + 19848) )
    {
      v42 = v72;
      do
      {
        v43 = *(_QWORD *)(v42 + 19920);
        v45 = *(_QWORD *)(W32GetUserSessionState(v41, v40) + 19864);
        if ( *(_BYTE *)(32LL * v37 + v43 + 24) == 1
          && IsWindowComposedOnDesktop(*(struct tagWND *const *)(v45 + 40LL * v37), a1) )
        {
          ComposeWindow(v46, 2);
        }
        --v37;
      }
      while ( v37 <= *(_DWORD *)(W32GetUserSessionState(v45, v44) + 19848) );
      v7 = v70;
    }
    v47 = W32GetUserSessionState(v41, v40);
    GreRemoveDisplayDriverRealizations(*(_QWORD *)(*(_QWORD *)(v47 + 56968) + 40LL), v48, v49);
    zzzEnableDwmPointerSupport(0LL, 0LL);
    W32GetUserSessionState(v51, v50);
    v53 = W32GetUserSessionState(**((_QWORD **)a1 + 1), v52);
    GreTransferDwmStateToSpriteState(*(HDEV *)(*(_QWORD *)(v53 + 56968) + 40LL));
    goto LABEL_8;
  }
  v66 = (void *)ReferenceDwmApiPort(v18, v17);
  DwmAsyncShellWindowChange(v66);
  return 0LL;
}
