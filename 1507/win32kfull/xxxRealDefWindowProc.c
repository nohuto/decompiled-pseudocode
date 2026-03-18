/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0063E28
 * Callers:
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0063CC0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0004758 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     _IsDescendant @ 0x1C0012B34 (_IsDescendant.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     _GetKeyState @ 0x1C0041BD0 (_GetKeyState.c)
 *     xxxSetForegroundWindow @ 0x1C00450B0 (xxxSetForegroundWindow.c)
 *     xxxSetFocus @ 0x1C0046624 (xxxSetFocus.c)
 *     xxxRedrawTitle @ 0x1C0047C70 (xxxRedrawTitle.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     xxxSendNotifyMessage @ 0x1C004DCF0 (xxxSendNotifyMessage.c)
 *     xxxDWP_DoNCActivate @ 0x1C004EB68 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00518B8 (GreSetBkColor.c)
 *     DefSetText @ 0x1C0054B90 (DefSetText.c)
 *     xxxDrawWindowFrame @ 0x1C0057540 (xxxDrawWindowFrame.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     xxxAdjustSize @ 0x1C005CB5C (xxxAdjustSize.c)
 *     xxxLoadUserApiHook @ 0x1C0061D40 (xxxLoadUserApiHook.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     _GetTopLevelWindow @ 0x1C0062200 (_GetTopLevelWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C0062240 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C00625D0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0062640 (BuildHwndList.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0064790 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0064FB4 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C006B230 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C0070F10 (xxxWindowEvent.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C007750C (xxxDWP_ProcessVirtKey.c)
 *     GetMouseKeyFlags @ 0x1C00779CC (GetMouseKeyFlags.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00798F0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C007AFD0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C007B0C0 (_PostMessage.c)
 *     GetThreadDesktopWindow @ 0x1C007BD60 (GetThreadDesktopWindow.c)
 *     xxxInternalGetMessage @ 0x1C007C720 (xxxInternalGetMessage.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C007E934 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0080E4C (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00815D0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     PostShellHookMessagesEx @ 0x1C0085F90 (PostShellHookMessagesEx.c)
 *     _InitPwSB @ 0x1C0087CBC (_InitPwSB.c)
 *     DWP_SetHotKey @ 0x1C0087ED8 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0087F6C (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     _GetProcessWindowStation @ 0x1C00DD080 (_GetProcessWindowStation.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00E247C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00E274C (MSGSQMAddMessage.c)
 *     TextCopy @ 0x1C00E38A8 (TextCopy.c)
 *     xxxHandleWindowPosChanged @ 0x1C00E56F4 (xxxHandleWindowPosChanged.c)
 *     _SetMenuDefaultItem @ 0x1C00EDA84 (_SetMenuDefaultItem.c)
 *     xxxDWP_UpdateUIState @ 0x1C00EF9E4 (xxxDWP_UpdateUIState.c)
 *     DWP_GetIcon @ 0x1C00F27F0 (DWP_GetIcon.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00F7390 (xxxDWP_EraseBkgnd.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00F8334 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetCapture @ 0x1C00F8EC0 (xxxSetCapture.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FABEC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     FindNCHit @ 0x1C00FAEF8 (FindNCHit.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00FB378 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1C0107D14 (xxxGetSysMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C011E5EC (xxxGetTitleBarInfoEx.c)
 *     xxxClientShutdown @ 0x1C012CF00 (xxxClientShutdown.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     xxxSimulateShiftF10 @ 0x1C01D69A4 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     xxxActivateKeyboardLayout @ 0x1C01DD7BC (xxxActivateKeyboardLayout.c)
 *     xxxMessageBeep @ 0x1C01FEAE0 (xxxMessageBeep.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E100 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022615C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxDefPointerProc @ 0x1C023139C (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C023352C (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C023D5FC (xxxSendHelpMessage.c)
 *     WCSToMBEx @ 0x1C0249F04 (WCSToMBEx.c)
 *     ClientFrame @ 0x1C0249FCC (ClientFrame.c)
 *     GetContextHelpId @ 0x1C024CF74 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r12
  unsigned int v6; // r10d
  struct tagWND *v7; // rsi
  __int64 result; // rax
  _DWORD *v9; // rax
  _BYTE *v10; // rdx
  __int64 v11; // r8
  HDC v12; // rax
  HDC v13; // rbx
  __int16 v14; // di
  int v15; // eax
  __int64 v16; // r14
  unsigned int v17; // eax
  struct tagWND *v18; // rcx
  __int64 v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int FocusDirection; // eax
  struct tagWND *v23; // rcx
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  struct tagWND *v28; // rcx
  int v29; // ecx
  struct tagHOTKEYSTRUCT **v30; // rax
  int v31; // edi
  ULONG v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  int v35; // r8d
  bool v36; // sf
  _BYTE *v37; // rax
  char v38; // cl
  __int64 v39; // r10
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v44; // eax
  int v45; // edi
  int ContextHelpId; // eax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct tagBWL *v51; // rax
  __int64 v52; // rdx
  struct tagBWL *v53; // r13
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 ProcessWindowStation; // rax
  int v64; // r8d
  __int64 v65; // r8
  unsigned int v66; // edx
  int v67; // r8d
  struct tagWND *Host; // rax
  struct tagWND *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  HDC DCEx; // rbx
  int NCHit; // eax
  int v74; // r12d
  int v75; // eax
  unsigned int v76; // r12d
  unsigned __int64 v77; // r8
  __int64 v78; // r9
  __int64 *v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rax
  struct tagWND *v83; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  unsigned int v86; // edx
  __int64 NonChildAncestor; // rbx
  __int64 v88; // r8
  __int64 v89; // rdx
  __int64 v90; // rcx
  unsigned __int16 v91; // r9
  unsigned __int64 v92; // rdx
  __int16 v93; // dx
  int v94; // eax
  int v95; // eax
  int v96; // r8d
  __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r13
  struct tagPROCESSINFO *v102; // rax
  unsigned int v103; // r13d
  int v104; // edx
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // rax
  __int64 v108; // r8
  int v109; // eax
  unsigned __int16 v110; // ax
  int v111; // r15d
  int v112; // eax
  __int64 v113; // rbx
  __int16 v114; // bx
  __int64 v115; // rdx
  struct tagWND *v116; // rcx
  struct tagPROCESSINFO *SysMenu; // rax
  struct tagPROCESSINFO *v118; // r13
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v124; // rcx
  int v125; // ecx
  __int64 v126; // rdx
  unsigned int v127; // ecx
  int v128; // edx
  __int64 v129; // rcx
  __int64 v130; // rcx
  struct tagPROCESSINFO *v131; // [rsp+50h] [rbp-128h] BYREF
  ULONG BytesInMultiByteString; // [rsp+58h] [rbp-120h] BYREF
  struct tagPROCESSINFO *v133; // [rsp+60h] [rbp-118h]
  __int64 v134; // [rsp+68h] [rbp-110h] BYREF
  __int64 v135; // [rsp+70h] [rbp-108h]
  __int64 v136; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v137; // [rsp+88h] [rbp-F0h]
  _QWORD v138[3]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v139[4]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v140[3]; // [rsp+D0h] [rbp-A8h] BYREF
  _DWORD v141[12]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v142; // [rsp+118h] [rbp-60h] BYREF
  __int64 v143; // [rsp+120h] [rbp-58h]
  int v144; // [rsp+128h] [rbp-50h]

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a2;
  v7 = a1;
  v131 = a1;
  if ( a1 == (struct tagWND *)-1LL || (unsigned int)a2 > 0x400 )
    return 0LL;
  if ( (unsigned int)a2 > 0xA3 )
  {
    if ( (unsigned int)a2 <= 0x136 )
    {
      if ( (_DWORD)a2 != 310 )
      {
        if ( (unsigned int)a2 <= 0x112 )
        {
          if ( (_DWORD)a2 == 274 )
          {
            xxxSysCommand(a1);
            return 0LL;
          }
          if ( (unsigned int)a2 > 0x101 )
          {
            if ( (_DWORD)a2 != 260 )
            {
              if ( (_DWORD)a2 == 261 )
              {
LABEL_73:
                if ( a3 == 18
                  && (v29 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL), (v29 & 0x80u) == 0)
                  && (v29 & 0xC) == 8
                  || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) & 0x10) != 0 )
                {
                  NonChildAncestor = GetNonChildAncestor(v7);
                  if ( gspwndFullScreen != (struct tagWND *)NonChildAncestor )
                  {
                    v136 = *(_QWORD *)(gptiCurrent + 376LL);
                    *(_QWORD *)(gptiCurrent + 376LL) = &v136;
                    v137 = NonChildAncestor;
                    if ( NonChildAncestor )
                      ++*(_DWORD *)(NonChildAncestor + 8);
                    if ( v88 == 121 )
                      xxxDrawMenuBarUnderlines(v7, 1LL);
                    _InterlockedAdd(&glSendMessage, 1u);
                    xxxSendTransformableMessageTimeout(
                      (struct tagWND *)NonChildAncestor,
                      0x112u,
                      0xF100uLL,
                      0LL,
                      0,
                      0,
                      0LL,
                      1,
                      0);
                    ThreadUnlock1(v90, v89);
                  }
                }
                if ( v5 == (HDC)18 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x80u;
                  xxxDrawMenuBarUnderlines(v7, 0LL);
                }
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= 0xFFFFFFE3;
                return 0LL;
              }
              if ( (_DWORD)a2 == 262 )
              {
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= 0xFFFFFFF3;
                if ( a3 != 13 || (*((_BYTE *)a1 + 55) & 0x20) == 0 )
                {
                  if ( (a4 & 0x20000000) == 0 || !a3 )
                  {
                    if ( a3 != 27 )
                      xxxMessageBeep(0LL);
                    return 0LL;
                  }
                  if ( a3 == 9 || a3 == 27 )
                    return 0LL;
                  if ( a3 != 32 )
                    goto LABEL_477;
                  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
                  {
                    v62 = *((_QWORD *)a1 + 11);
                    v134 = *(_QWORD *)(gptiCurrent + 376LL);
                    *(_QWORD *)(gptiCurrent + 376LL) = &v134;
                    v135 = v62;
                    ++*(_DWORD *)(v62 + 8);
                    v60 = 262LL;
                    a3 = 32LL;
                    v61 = *((_QWORD *)v7 + 11);
LABEL_246:
                    xxxSendMessage(v61, v60, a3);
                    goto LABEL_157;
                  }
                  v79 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL);
                  if ( v79 && (unsigned int)(*((_DWORD *)v79 + 76) - 8) <= 3 )
                  {
                    v80 = gptiCurrent;
                    v81 = *v79;
                  }
                  else
                  {
LABEL_477:
                    if ( a3 != 32
                      || (v82 = *(_QWORD *)(gptiCurrent + 392LL), (v83 = *(struct tagWND **)(v82 + 80)) == 0LL)
                      || !(unsigned int)IsCompositionInputWindow(*(struct tagWND **)(v82 + 80)) )
                    {
                      _InterlockedAdd(&glSendMessage, 1u);
                      v78 = (unsigned int)v5;
                      v86 = 274;
                      v77 = 61696LL;
LABEL_397:
                      xxxSendTransformableMessageTimeout(v7, v86, v77, v78, 0, 0, 0LL, 1, 0);
                      return 0LL;
                    }
                    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v83);
                    if ( !CompositionInputWindowUIOwner )
                      return 0LL;
                    TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                    if ( !TopLevelWindow )
                      return 0LL;
                    v80 = gptiCurrent;
                    v81 = *TopLevelWindow;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(v80 + 416), 33LL, v81);
                  return 0LL;
                }
                v70 = 274LL;
              }
              else
              {
                if ( (_DWORD)a2 != 265 || a3 == 0xFFFF )
                  return 0LL;
                v70 = 258LL;
              }
LABEL_298:
              PostMessage(a1, v70);
              return 0LL;
            }
            if ( (a4 & 0x20000000) != 0 )
            {
              if ( (a4 & 0x40000000) == 0 )
              {
                if ( a3 != 18 || (v24 = *(_QWORD *)(gptiCurrent + 392LL), v25 = *(_DWORD *)(v24 + 332), (v25 & 8) != 0) )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v24 + 332) = v25 | 8;
                  xxxDrawMenuBarUnderlines(v7, 1LL);
                }
              }
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 332LL) &= ~0x10u;
              xxxDWP_ProcessVirtKey((unsigned int)v5);
              return 0LL;
            }
            if ( a3 != 121 )
              return 0LL;
            v71 = *(_QWORD *)(gptiCurrent + 392LL);
            goto LABEL_327;
          }
          if ( (_DWORD)a2 == 257 )
            goto LABEL_73;
          if ( (_DWORD)a2 == 164 )
          {
            memset(v141, 0, sizeof(v141));
            NCHit = FindNCHit(v7, (unsigned int)v4);
            if ( (unsigned int)(NCHit - 6) <= 1 )
            {
              if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL), (__int64)v7) )
                return 0LL;
            }
            else if ( (unsigned int)(NCHit - 2) > 1
                   || v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL) )
            {
              return 0LL;
            }
            xxxSetCapture(v7);
            while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v141, 0, 512, 526, 1, 0) || v141[2] != 517 )
            {
              if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL)
                || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
              {
                return 0LL;
              }
            }
            xxxReleaseCapture();
            v74 = LOWORD(v141[9]) | (LOWORD(v141[10]) << 16);
            v75 = FindNCHit(v7, (unsigned int)v74);
            if ( ((v75 - 2) & 0xFFFFFFFA) != 0 )
              return 0LL;
            if ( (*((_BYTE *)v7 + 290) & 0x40) != 0 )
            {
              if ( v75 == 2 )
                goto LABEL_431;
              if ( v75 == 3 )
              {
LABEL_288:
                v76 = 61536;
                goto LABEL_432;
              }
            }
            v77 = *(_QWORD *)v7;
            _InterlockedAdd(&glSendMessage, 1u);
            v78 = v74;
            goto LABEL_396;
          }
          if ( (_DWORD)a2 != 172 )
          {
            if ( (_DWORD)a2 == 174 )
            {
              DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
              xxxDrawCaptionBar((__int64)v7, DCEx, (int)v5);
              _ReleaseDC(DCEx);
              return 0LL;
            }
            if ( (_DWORD)a2 == 175 )
            {
              xxxDrawWindowFrame((__int64)a1, (HDC)a3, a4);
              return 0LL;
            }
            if ( (_DWORD)a2 != 256 )
              return 0LL;
            if ( a3 == 27 )
            {
              if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
                return 0LL;
              Host = CoreWindowProp::GetHost(v28);
              if ( !Host )
                return 0LL;
              v69 = (struct tagWND *)GetTopLevelWindow((__int64)Host);
              if ( !v69 )
                return 0LL;
              v70 = 256LL;
              a1 = v69;
              goto LABEL_298;
            }
            if ( a3 != 121 )
              return 0LL;
            v71 = *(_QWORD *)(gptiCurrent + 392LL);
LABEL_327:
            *(_DWORD *)(v71 + 332) |= 0x10u;
            if ( (GetKeyState(0x10u) & 0x8000u) == 0LL || (*((_BYTE *)v7 + 45) & 2) == 0 )
              return 0LL;
            v77 = *(_QWORD *)v7;
            _InterlockedAdd(&glSendMessage, 1u);
            v78 = -1LL;
            goto LABEL_396;
          }
LABEL_409:
          v114 = 0;
          if ( WORD1(a3) == 1 )
          {
            v114 = 1;
          }
          else if ( WORD1(a3) == 2 )
          {
            goto LABEL_414;
          }
          if ( !v114 )
            return 0LL;
LABEL_414:
          if ( (_DWORD)a2 != 524 )
            GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 392LL));
          xxxSendMessage(v7, 793LL, *(_QWORD *)v7);
          return 0LL;
        }
        if ( (unsigned int)a2 <= 0x128 )
        {
          switch ( (_DWORD)a2 )
          {
            case 0x128:
              return xxxDWP_UpdateUIState(a1, a3, a4);
            case 0x119:
              if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
                return 0LL;
              v100 = *((_QWORD *)a1 + 11);
              v101 = *(_QWORD *)(*(_QWORD *)(v100 + 16) + 384LL);
              v133 = (struct tagPROCESSINFO *)v101;
              v102 = *(struct tagPROCESSINFO **)(gptiCurrent + 384LL);
              v131 = v102;
              if ( (struct tagPROCESSINFO *)v101 != v102
                && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                    v102,
                                    (struct tagPROCESSINFO *)v101,
                                    (struct tagWND *)v100,
                                    0x119u,
                                    (unsigned __int64)v5,
                                    a4,
                                    1) )
              {
                if ( *(_QWORD *)v101 == gpepCSRSS )
                {
                  v103 = 0x2000;
                  v104 = 0;
                }
                else
                {
                  v103 = *(_DWORD *)(v101 + 832);
                  v104 = *((_DWORD *)v133 + 209);
                }
                v105 = *((_QWORD *)v131 + 104);
                if ( gbEnforceUIPI )
                {
                  if ( (unsigned int)v105 <= v103 )
                  {
                    if ( (_DWORD)v105 != v103
                      || (v106 = HIDWORD(v105), (_DWORD)v106 != v104) && (_DWORD)v106 != -1 && v104 != -1 )
                    {
                      EtwTraceUIPIMsgError(v131, v133, 281LL, v5, v4);
                      UserSetLastError(5);
                      MSGSQMAddMessage(v131, v133, v4, 1, 0);
                      return 0LL;
                    }
                  }
                }
                MSGSQMAddMessage(v131, v133, v4, 1, gbEnforceUIPI != 0 ? 5 : 1);
              }
              v108 = *((_QWORD *)v7 + 11);
              v134 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v134;
              v135 = v108;
              ++*(_DWORD *)(v108 + 8);
              a3 = (unsigned __int64)v5;
              v98 = 281LL;
              break;
            case 0x11A:
              if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
                return 0LL;
              v99 = *((_QWORD *)a1 + 11);
              v134 = *(_QWORD *)(gptiCurrent + 376LL);
              *(_QWORD *)(gptiCurrent + 376LL) = &v134;
              v135 = v99;
              ++*(_DWORD *)(v99 + 8);
              v98 = 282LL;
              break;
            case 0x127:
              v91 = a3;
              BytesInMultiByteString = (unsigned __int16)a3;
              v92 = a3 >> 16;
              v131 = (struct tagPROCESSINFO *)(a3 >> 16);
              LODWORD(v133) = 0;
              if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || v4 )
                return 0LL;
              if ( (_WORD)a3 == 3 )
              {
                v93 = 0;
                v131 = 0LL;
                if ( (*gpsi & 0x80u) != 0 )
                  goto LABEL_352;
                v94 = *(_DWORD *)(gpsi + 7292LL);
                if ( (v94 & 0x20) != 0 || v94 >= 0 )
                  goto LABEL_352;
                if ( (GetAppCompatFlags2(1024LL, 0LL, gpsi, (unsigned __int16)a3) & 2) == 0 )
                {
                  if ( (*gpsi & 0x40) != 0 )
                    v91 = 2;
                  else
                    v91 = 1;
                  v93 = 3;
                  v5 = (HDC)(v91 | 0x30000LL);
LABEL_352:
                  if ( !v93 )
                    return 0LL;
                  if ( (v93 & 1) != 0 )
                    v96 = (*((unsigned __int8 *)v7 + 51) >> 7) ^ (v91 == 1);
                  else
                    v96 = (int)v133;
                  if ( (v93 & 2) != 0 )
                    v96 |= (*((unsigned __int8 *)v7 + 51) >> 6) & 1 ^ (v91 == 1);
                  if ( (v93 & 4) != 0 )
                    v96 |= (*((unsigned __int8 *)v7 + 51) >> 2) & 1 ^ (v91 == 1);
                  if ( !v96 )
                    return 0LL;
                  a3 = (unsigned __int64)v5;
                  if ( (*((_BYTE *)v7 + 55) & 0xC0) != 0x40 )
                    return xxxSendMessage(v7, 296LL, v5);
                  v97 = *((_QWORD *)v7 + 11);
                  v134 = *(_QWORD *)(gptiCurrent + 376LL);
                  *(_QWORD *)(gptiCurrent + 376LL) = &v134;
                  v135 = v97;
                  ++*(_DWORD *)(v97 + 8);
                  v98 = 295LL;
                  break;
                }
LABEL_350:
                v91 = BytesInMultiByteString;
                v93 = (__int16)v131;
                goto LABEL_352;
              }
              if ( (*gpsi & 0x80u) == 0 )
              {
                v95 = *(_DWORD *)(gpsi + 7292LL);
                if ( (v95 & 0x20) == 0 && v95 < 0 )
                {
                  if ( (GetAppCompatFlags2(1024LL, v92, a3, (unsigned __int16)a3) & 2) == 0 )
                    goto LABEL_350;
                  LOWORD(v92) = (_WORD)v131;
                  v91 = BytesInMultiByteString;
                }
              }
              v93 = v92 & 0xFFFC;
              goto LABEL_352;
            default:
              return 0LL;
          }
LABEL_462:
          v48 = xxxSendMessage(*((_QWORD *)v7 + 11), v98, a3);
LABEL_463:
          v40 = v48;
          ThreadUnlock1(v50, v49);
          return v40;
        }
        if ( (_DWORD)a2 == 297 )
          return (*((unsigned __int8 *)a1 + 51) >> 7) | (*((unsigned __int8 *)a1 + 51) >> 5) & 2 | (unsigned __int64)(*((_BYTE *)a1 + 51) & 4);
        if ( (_DWORD)a2 != 306 )
        {
          if ( (unsigned int)a2 <= 0x132 )
            return 0LL;
          if ( (unsigned int)a2 > 0x134 && (*((_BYTE *)a1 + 45) & 2) != 0 )
          {
            v109 = 15;
LABEL_406:
            v111 = 18;
            goto LABEL_407;
          }
LABEL_400:
          v109 = 5;
          goto LABEL_401;
        }
      }
LABEL_398:
      if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
      {
        v109 = 15;
LABEL_401:
        v111 = 8;
LABEL_407:
        v113 = v109;
        GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4LL * v109 + 3568));
        GreSetTextColor(v5, *(_DWORD *)(gpsi + 4LL * v111 + 3568));
        return *(_QWORD *)(gpsi + 8 * v113 + 3696);
      }
      goto LABEL_400;
    }
    if ( (unsigned int)a2 > 0x240 )
    {
      if ( (unsigned int)a2 <= 0x317 )
      {
        if ( (_DWORD)a2 == 791 )
        {
          LODWORD(result) = xxxDWPPrint(a1, (HDC)a3, a4);
          return (int)result;
        }
        if ( (unsigned int)a2 <= 0x243 )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (unsigned int)a2 <= 0x244 )
          return 0LL;
        if ( (unsigned int)a2 <= 0x247 )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (unsigned int)a2 <= 0x24D )
          return 0LL;
        if ( (unsigned int)a2 <= 0x24F )
          return xxxDefPointerProc(a1, a2, a3, 0LL);
        if ( (_DWORD)a2 != 787
          || (*((_BYTE *)a1 + 55) & 8) != 0
          || *(_QWORD *)(*((_QWORD *)a1 + 2) + 392LL) != gpqForeground
          && !(unsigned int)xxxSetForegroundWindow(a1, 0LL, a3, a4) )
        {
          return 0LL;
        }
        goto LABEL_431;
      }
      if ( (_DWORD)a2 != 793 )
      {
        if ( (_DWORD)a2 == 795 )
        {
          if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 448LL) & 1) != 0 )
            return 0LL;
          LODWORD(result) = xxxLoadUserApiHook();
        }
        else
        {
          if ( (_DWORD)a2 != 831 )
          {
            if ( (_DWORD)a2 == 841 && a3 )
            {
              v20 = *((_QWORD *)a1 + 11);
              v21 = v20 ? *(_QWORD *)(v20 + 16) : 0LL;
              if ( v21 && *(struct tagWND **)(v21 + 1240) == a1 )
              {
                FocusDirection = CoreWindowProp::GetFocusDirection();
                xxxSetFocus(v23, FocusDirection);
              }
            }
            return 0LL;
          }
          LODWORD(result) = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
        }
        return (int)result;
      }
      if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
      {
        if ( a1 != (struct tagWND *)GetDesktopWindow(a1)
          && (((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x800) == 0
           || !(unsigned int)xxxCallHook(12, (int)v5, v4, 0xAu)) )
        {
          v127 = *(_DWORD *)(gptiCurrent + 1080LL);
          v128 = (v127 >> 11) & 1;
          v131 = *(struct tagPROCESSINFO **)(gptiCurrent + 1084LL);
          if ( (v127 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1232LL) == v7 )
          {
            v129 = *(_QWORD *)(gptiCurrent + 472LL);
            if ( v129 )
            {
              v130 = *(_QWORD *)(v129 + 32);
              if ( v130 )
              {
                if ( (*(_DWORD *)(v130 + 1080) & 0x800) != 0 )
                {
                  v128 = 1;
                  v131 = *(struct tagPROCESSINFO **)(v130 + 1084);
                }
              }
            }
          }
          PostShellHookMessagesEx(
            0xCuLL,
            v4,
            (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v131 & -(__int64)(v128 != 0)));
        }
        return 0LL;
      }
      v126 = *((_QWORD *)a1 + 11);
      v134 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v134;
      v135 = v126;
      ++*(_DWORD *)(v126 + 8);
      v98 = 793LL;
      goto LABEL_462;
    }
    if ( (_DWORD)a2 == 576 )
    {
      if ( *(_QWORD *)(gptiCurrent + 952LL) == a4 )
        *(_QWORD *)(gptiCurrent + 952LL) = 0LL;
      FreeTouchInputInfo(a4, 1LL);
      return 0LL;
    }
    if ( (unsigned int)a2 > 0x20C )
    {
      if ( (_DWORD)a2 != 526 )
      {
        if ( (unsigned int)a2 <= 0x217 )
          return 0LL;
        if ( (unsigned int)a2 <= 0x219 )
          return 1LL;
        if ( (_DWORD)a2 != 554 )
        {
          if ( (_DWORD)a2 != 555 )
            return 0LL;
          LODWORD(result) = (*((unsigned __int8 *)a1 + 48) >> 4) & 1;
          return (int)result;
        }
        return 1162627398LL;
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case 0x20C:
          goto LABEL_409;
        case 0x137:
          if ( *(_WORD *)(gpsi + 7284LL) < 8u
            || (v112 = *(_DWORD *)(gpsi + 3648LL), v112 != *(_DWORD *)(gpsi + 3568LL))
            || v112 == *(_DWORD *)(gpsi + 3588LL) )
          {
            GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 3648LL));
            GreSetTextColor(v5, *(_DWORD *)(gpsi + 3628LL));
            return *(_QWORD *)(gpsi + 3944LL);
          }
          v109 = 20;
          goto LABEL_406;
        case 0x138:
          goto LABEL_398;
        case 0x205:
          v110 = *((_WORD *)a1 + 66) + WORD1(a4);
          if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
            v78 = (unsigned __int16)(*((_WORD *)a1 + 68) - a4) | (unsigned __int64)(v110 << 16);
          else
            v78 = (unsigned __int16)(a4 + *((_WORD *)a1 + 64)) | (v110 << 16);
          v77 = *(_QWORD *)a1;
          _InterlockedAdd(&glSendMessage, 1u);
LABEL_396:
          v86 = 123;
          goto LABEL_397;
      }
      if ( (_DWORD)a2 != 522 )
        return 0LL;
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
      return 0LL;
    v115 = *((_QWORD *)a1 + 11);
    v134 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v134;
    v135 = v115;
    ++*(_DWORD *)(v115 + 8);
    v66 = v6;
    goto LABEL_424;
  }
  if ( (unsigned int)a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3, a4);
    return 0LL;
  }
  if ( (unsigned int)a2 <= 0x33 )
  {
    if ( (_DWORD)a2 == 51 )
    {
      v30 = HotKeyHelper(a1);
      v31 = 0;
      if ( *v30 )
        return *((int *)*v30 + 2);
      return v31;
    }
    if ( (unsigned int)a2 <= 0x18 )
    {
      if ( (_DWORD)a2 == 24 )
      {
        if ( !(_WORD)a4 )
          return 0LL;
        v38 = *((_BYTE *)a1 + 55);
        if ( (((v38 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)v7 + 13) )
          return 0LL;
        if ( a3 )
        {
          if ( (v38 & 0x10) != 0 || (*((_BYTE *)v7 + 41) & 0x40) == 0 )
            return 0LL;
        }
        else if ( (v38 & 0x10) == 0 )
        {
          return 0LL;
        }
        SetOrClrWF(0, v7, 0x140u, 1);
        if ( !v5 )
          SetOrClrWF(1, v7, 0x140u, 1);
        xxxShowWindow(v7);
        return 0LL;
      }
      if ( (unsigned int)a2 <= 0xF )
      {
        if ( (_DWORD)a2 != 15 )
        {
          if ( (_DWORD)a2 != 6 )
          {
            switch ( (_DWORD)a2 )
            {
              case 0xB:
                xxxDWP_SetRedraw(a1, a3 != 0);
                return 0LL;
              case 0xC:
                v15 = DefSetText((__int64)a1, (const CHAR **)a4, a3);
                v16 = v15;
                if ( v15 )
                {
                  xxxRedrawTitle(v7, 8u);
                  xxxWindowEvent(32780, (_DWORD)v7, 0, 0, 0);
                }
                return v16;
              case 0xD:
                if ( !a3 )
                  return 0LL;
                v33 = (_DWORD *)((char *)a1 + 216);
                v34 = *(_DWORD *)(a4 + 4);
                if ( !*v33 )
                {
                  v36 = v34 < 0;
                  v37 = *(_BYTE **)(a4 + 8);
                  if ( v36 )
                    *v37 = 0;
                  else
                    *(_WORD *)v37 = 0;
                  return 0LL;
                }
                if ( v34 >= 0 )
                {
                  v35 = TextCopy(v33, *(_QWORD *)(a4 + 8), (unsigned int)a3);
                  *(_DWORD *)v4 = 2 * v35;
                }
                else
                {
                  v35 = WCSToMBEx(0LL, *((_QWORD *)v7 + 28), *v33 >> 1, a4 + 8, (v34 & 0x7FFFFFFFu) - 1);
                  *(_BYTE *)(v35 + *(_QWORD *)(v4 + 8)) = 0;
                  *(_DWORD *)v4 = v35;
                }
                return v35;
              case 0xE:
                v32 = *((_DWORD *)a1 + 54);
                if ( !v32 )
                  return 0LL;
                if ( a4 )
                {
                  RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 28), v32);
                  return BytesInMultiByteString;
                }
                else
                {
                  return v32 >> 1;
                }
              default:
                return 0LL;
            }
          }
          if ( a3 )
          {
            v17 = CoreWindowProp::GetFocusDirection();
            xxxSetFocus(v18, v17);
          }
          if ( *((char *)v7 + 290) >= 0 )
            return 0LL;
          v19 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1240LL);
          if ( !v19 )
            return 0LL;
          v138[0] = *(_QWORD *)(gptiCurrent + 376LL);
          *(_QWORD *)(gptiCurrent + 376LL) = v138;
          v138[1] = v19;
          ++*(_DWORD *)(v19 + 8);
          xxxSendNotifyMessage((struct tagWND *)v19, 0x349u, (unsigned __int64)v5, 0LL, 0);
LABEL_157:
          ThreadUnlock1(v27, v26);
          return 0LL;
        }
        goto LABEL_88;
      }
      if ( (_DWORD)a2 == 16 )
      {
        xxxDestroyWindow(a1);
        return 0LL;
      }
      if ( (_DWORD)a2 == 17 || (_DWORD)a2 == 19 )
        return 1LL;
      if ( (_DWORD)a2 != 20 )
        return 0LL;
    }
    else
    {
      if ( (unsigned int)a2 <= 0x26 )
      {
        if ( (_DWORD)a2 != 38 )
        {
          if ( (_DWORD)a2 != 25 )
          {
            if ( (_DWORD)a2 == 31 )
            {
              xxxDWP_DoCancelMode(a1);
              return 0LL;
            }
            if ( (_DWORD)a2 == 32 )
            {
              LODWORD(result) = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
              return (int)result;
            }
            if ( (_DWORD)a2 != 33 )
              return 0LL;
            if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
              v39 = *((_QWORD *)a1 + 11);
            else
              v39 = 0LL;
            if ( !v39
              || (v136 = *(_QWORD *)(gptiCurrent + 376LL),
                  *(_QWORD *)(gptiCurrent + 376LL) = &v136,
                  v137 = v39,
                  ++*(_DWORD *)(v39 + 8),
                  v40 = xxxSendMessage(v39, 33LL, a3),
                  ThreadUnlock1(v42, v41),
                  !v40) )
            {
              if ( (_DWORD)v4 == 33619970 )
                return 3;
              else
                return 1;
            }
            return v40;
          }
          goto LABEL_400;
        }
LABEL_88:
        xxxDWP_Paint(a1);
        return 0LL;
      }
      if ( (_DWORD)a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v44 = *(_DWORD *)(a4 + 12);
          if ( v44 == 4 || v44 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
            ClientFrame(*(HDC *)(a4 + 32));
        }
        return 0LL;
      }
      if ( (_DWORD)a2 != 39 )
      {
        if ( (unsigned int)a2 <= 0x2D )
          return 0LL;
        if ( (unsigned int)a2 > 0x2F )
        {
          if ( (_DWORD)a2 != 50 )
            return 0LL;
          LODWORD(result) = DWP_SetHotKey(a1);
          return (int)result;
        }
        return -1LL;
      }
    }
    LODWORD(result) = xxxDWP_EraseBkgnd();
    return (int)result;
  }
  if ( (unsigned int)a2 <= 0x55 )
  {
    if ( (_DWORD)a2 == 85 )
    {
      if ( a4 != 3 )
        return 0LL;
      LODWORD(result) = 2 - ((*((_BYTE *)a1 + 43) & 0x20) != 0);
      return (int)result;
    }
    if ( (unsigned int)a2 <= 0x4D )
    {
      switch ( (_DWORD)a2 )
      {
        case 'M':
          if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
            v45 = *((unsigned __int16 *)a1 + 96);
          else
            v45 = 0;
          ContextHelpId = GetContextHelpId();
          xxxSendHelpMessage((_DWORD)v7, 1, v45, *(_QWORD *)v7, ContextHelpId);
          return 0LL;
        case '5':
          return ((unsigned __int64)*((unsigned __int8 *)a1 + 40) >> 6) & 1;
        case ';':
          LODWORD(result) = xxxClientShutdown(a1, a3);
          return (int)result;
        case 'F':
          if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
            xxxAdjustSize((__int64)a1, (int *)(a4 + 24), (int *)(a4 + 28));
          return 0LL;
        case 'G':
          xxxHandleWindowPosChanged(a1, a4);
          return 0LL;
        case 'I':
          return SfnCOPYGLOBALDATA(0LL, 0LL);
      }
      return 0LL;
    }
    if ( (_DWORD)a2 == 79 )
      return ValidateHwnd(a3) != 0;
    if ( (_DWORD)a2 != 80 )
    {
      if ( (_DWORD)a2 == 81 )
      {
        v51 = BuildHwndList(*((_QWORD *)a1 + 12), 2, 0LL);
        v53 = v51;
        if ( v51 )
        {
          v54 = (_QWORD *)((char *)v51 + 32);
          v55 = *((_QWORD *)v51 + 4);
          if ( v55 != 1 )
          {
            do
            {
              LOBYTE(v52) = 1;
              v56 = HMValidateHandleNoSecure(v55, v52);
              if ( v56 )
              {
                v139[0] = *(_QWORD *)(gptiCurrent + 376LL);
                *(_QWORD *)(gptiCurrent + 376LL) = v139;
                v139[1] = v56;
                ++*(_DWORD *)(v56 + 8);
                xxxSendMessage(v56, 81LL, v5);
                ThreadUnlock1(v58, v57);
              }
              v55 = *++v54;
            }
            while ( *v54 != 1LL );
          }
          FreeHwndList(v53);
        }
        return 0LL;
      }
      if ( (_DWORD)a2 != 83 )
        return 0LL;
      v47 = (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 11) : *((_QWORD *)a1 + 13);
      if ( !v47 || v47 == GetThreadDesktopWindow(0LL) )
        return 0LL;
      v136 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v136;
      v137 = v47;
      ++*(_DWORD *)(v47 + 8);
      _InterlockedAdd(&glSendMessage, 1u);
      v48 = xxxSendTransformableMessageTimeout((struct tagWND *)v47, 0x53u, (unsigned __int64)v5, v4, 0, 0, 0LL, 1, 1);
      goto LABEL_463;
    }
    v59 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 72LL);
    if ( !v59 || (struct tagWND *)v59 == a1 || *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) == *(_WORD *)(gpsi + 888LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v4, 256LL, v7) )
        UserSetLastError(1457);
      return 0LL;
    }
    v136 = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = &v136;
    v137 = v59;
    ++*(_DWORD *)(v59 + 8);
    v60 = 80LL;
    v61 = v59;
    goto LABEL_246;
  }
  if ( (_DWORD)a2 == 123 )
  {
    v64 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v64 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL), (__int64)v7) )
        xxxDoScrollMenu(v7, 0LL, v67 - 6);
      return 0LL;
    }
    if ( (*((_BYTE *)v7 + 55) & 0xC0) == 0x40 )
    {
      v65 = *((_QWORD *)v7 + 11);
      v134 = *(_QWORD *)(gptiCurrent + 376LL);
      *(_QWORD *)(gptiCurrent + 376LL) = &v134;
      v135 = v65;
      ++*(_DWORD *)(v65 + 8);
      a3 = *(_QWORD *)v7;
      a4 = v4;
      v66 = 123;
LABEL_424:
      v116 = (struct tagWND *)*((_QWORD *)v7 + 11);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v116, v66, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_157;
    }
    if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 392LL) + 80LL) )
      return 0LL;
    if ( v64 != 2 )
    {
      if ( v64 != 3 )
      {
        if ( v4 == -1 && (*((_BYTE *)v7 + 45) & 2) == 0 )
          xxxSimulateShiftF10(gptiCurrent);
        return 0LL;
      }
      goto LABEL_288;
    }
LABEL_431:
    v76 = (*((_BYTE *)v7 + 55) & 0x21) != 0 ? 61728 : 61488;
LABEL_432:
    SysMenu = (struct tagPROCESSINFO *)xxxGetSysMenu(v7, 1LL);
    v118 = SysMenu;
    v133 = SysMenu;
    if ( !SysMenu )
      return 0LL;
    SetMenuDefaultItem(SysMenu, v76, 0LL);
    PostShellHookMessagesEx(9uLL, *(_QWORD *)v7, 0LL);
    v140[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v140;
    v140[1] = v118;
    ++*((_DWORD *)v118 + 2);
    if ( v4 != 0xFFFFFFFFLL )
    {
      xxxTrackPopupMenuEx(v118, 514LL, (unsigned int)(__int16)v4, (unsigned int)SWORD1(v4), v7, 0LL);
      goto LABEL_157;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v120) + 776) & 0x4000) == 0 )
      {
LABEL_445:
        v27 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_454;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v119)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v122) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                        + 260LL) & 1 )
    {
      goto LABEL_445;
    }
    if ( (unsigned int)IsDPIDWMSysMet(56LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v124) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v125 = 0)
        : (v125 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                            + 260LL) & 1),
          v125) )
    {
      v27 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v27 = (_DWORD *)(gpsi + 2104LL);
    }
LABEL_454:
    if ( (*v27 & 8) != 0 )
    {
      v143 = 0LL;
      v144 = 0;
      v142 = 20LL;
      if ( (unsigned int)xxxSendMinRectMessages(v7, (char *)&v142 + 4) )
        xxxTrackPopupMenuEx(v133, 576LL, HIDWORD(v142), (unsigned int)v143, v7, &v142);
    }
    goto LABEL_157;
  }
  if ( (_DWORD)a2 == 127 )
    return DWP_GetIcon(a1, (unsigned int)a3);
  if ( (_DWORD)a2 != 128 )
  {
    if ( (_DWORD)a2 != 129 )
    {
      if ( (_DWORD)a2 == 131 )
      {
        xxxCalcClientRect(a1, a4, 0LL);
        return 0LL;
      }
      if ( (_DWORD)a2 != 132 )
      {
        if ( (_DWORD)a2 == 133 )
        {
          SetOrClrWF(1, a1, 0x180u, 1);
          v12 = (HDC)_GetDCEx(v7, v5, 328833LL);
          v13 = v12;
          v14 = 0;
          if ( v12 )
          {
            if ( (*((_BYTE *)v7 + 40) & 0x40) != 0 )
              v14 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 392LL) == gpqForeground;
            xxxDrawWindowFrame((__int64)v7, v12, v14);
            _ReleaseDC(v13);
          }
          SetOrClrWF(0, v7, 0x180u, 1);
          return 0LL;
        }
        if ( (_DWORD)a2 != 134 )
        {
          if ( (_DWORD)a2 == 136 )
          {
            SetOrClrWF(0, a1, 0x280u, 1);
            xxxInternalDoSyncPaint((__int64)v7, (unsigned int)v5);
          }
          return 0LL;
        }
        xxxDWP_DoNCActivate((__int64)a1, (_WORD)a3 != 0, a4);
        return 1LL;
      }
      LODWORD(result) = FindNCHit(a1, (unsigned int)a4);
      return (int)result;
    }
    if ( (*((_BYTE *)a1 + 54) & 0x30) != 0 && !InitPwSB() )
      return 0LL;
    if ( v4 )
    {
      v9 = (_DWORD *)(v4 + 80);
      if ( !*((_QWORD *)v7 + 3) || v4 == -80 || (v10 = *(_BYTE **)(v4 + 88)) == 0LL )
      {
        *((_DWORD *)v7 + 54) = 0;
        return 1LL;
      }
      if ( *(int *)(v4 + 84) >= 0 )
        goto LABEL_38;
      if ( *v9 && *v10 == 0xFF )
        return 1LL;
      if ( *(int *)(v4 + 84) >= 0 )
      {
LABEL_38:
        if ( *v9 >= 2u && *(_WORD *)v10 == 0xFFFF )
          return 1LL;
      }
    }
    SetOrClrWF(1, v7, 0x202u, 1);
    LODWORD(result) = DefSetText((__int64)v7, (const CHAR **)(v4 + 80), v11);
    return (int)result;
  }
  return (__int64)xxxDWP_SetIcon(a1, a3, (HICON)a4);
}
