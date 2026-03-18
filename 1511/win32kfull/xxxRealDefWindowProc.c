/*
 * XREFs of xxxRealDefWindowProc @ 0x1C006FB88
 * Callers:
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C006FA20 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0006A84 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0015630 (GreSetBkColor.c)
 *     _GetTopLevelWindow @ 0x1C004FBD0 (_GetTopLevelWindow.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0053E70 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0058D90 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C005B500 (xxxSleepThread2.c)
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     _GetProcessWindowStation @ 0x1C00699F0 (_GetProcessWindowStation.c)
 *     DWP_SetHotKey @ 0x1C0069B20 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0069BB4 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxInternalDoSyncPaint @ 0x1C006D570 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C006D900 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006D970 (BuildHwndList.c)
 *     GetThreadDesktopWindow @ 0x1C006E690 (GetThreadDesktopWindow.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00704E0 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxLoadUserApiHook @ 0x1C0070720 (xxxLoadUserApiHook.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     DefSetText @ 0x1C0072B08 (DefSetText.c)
 *     xxxAdjustSize @ 0x1C0072CC4 (xxxAdjustSize.c)
 *     _InitPwSB @ 0x1C0077D00 (_InitPwSB.c)
 *     PostIAMShellHookMessageEx @ 0x1C00783D0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0078490 (_PostMessage.c)
 *     xxxSendNotifyMessage @ 0x1C0078B80 (xxxSendNotifyMessage.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     _IsDescendant @ 0x1C007AA44 (_IsDescendant.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00804CC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetFocus @ 0x1C0080BD4 (xxxSetFocus.c)
 *     xxxRedrawTitle @ 0x1C0081B30 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C0081C20 (PostShellHookMessagesEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     xxxSetForegroundWindow @ 0x1C008CF98 (xxxSetForegroundWindow.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C008E88C (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C008F830 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0091F20 (xxxSetCapture.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00924C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0092610 (MSGSQMAddMessage.c)
 *     _GetKeyState @ 0x1C00936A0 (_GetKeyState.c)
 *     xxxActivateKeyboardLayout @ 0x1C0099F54 (xxxActivateKeyboardLayout.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C6534 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1C00C67E0 (xxxGetSysMenu.c)
 *     GetMouseKeyFlags @ 0x1C00C6920 (GetMouseKeyFlags.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00C7B60 (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C80C4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_DoNCActivate @ 0x1C00CADC0 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00CAFD0 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00CBB20 (xxxDrawWindowFrame.c)
 *     xxxInternalGetMessage @ 0x1C00D0420 (xxxInternalGetMessage.c)
 *     TextCopy @ 0x1C00E5268 (TextCopy.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00E76E0 (xxxDWP_EraseBkgnd.c)
 *     xxxHandleWindowPosChanged @ 0x1C00EC0A4 (xxxHandleWindowPosChanged.c)
 *     _SetMenuDefaultItem @ 0x1C00F27DC (_SetMenuDefaultItem.c)
 *     xxxDWP_UpdateUIState @ 0x1C00F579C (xxxDWP_UpdateUIState.c)
 *     DWP_GetIcon @ 0x1C00F9C60 (DWP_GetIcon.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     xxxClientShutdown @ 0x1C00FF368 (xxxClientShutdown.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0107888 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C010E45C (xxxDrawMenuBarUnderlines.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C013EC54 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     xxxMessageBeep @ 0x1C014F750 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     xxxSimulateShiftF10 @ 0x1C01D8414 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C020E4D0 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C022651C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxDefPointerProc @ 0x1C02317CC (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C023395C (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C023D7CC (xxxSendHelpMessage.c)
 *     WCSToMBEx @ 0x1C0249EC4 (WCSToMBEx.c)
 *     ClientFrame @ 0x1C0249F8C (ClientFrame.c)
 *     GetContextHelpId @ 0x1C024CF04 (GetContextHelpId.c)
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
  __int64 v11; // rax
  __int64 v12; // rbx
  BOOL v13; // edi
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // r10
  __int64 v17; // rdx
  _DWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  struct tagHOTKEYSTRUCT **v22; // rax
  int v23; // edi
  __int64 v24; // rcx
  int v25; // eax
  ULONG v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // r8d
  bool v30; // sf
  _BYTE *v31; // rax
  char v32; // cl
  __int64 v33; // r10
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v38; // eax
  int v39; // edi
  int ContextHelpId; // eax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct tagBWL *v45; // rax
  struct tagBWL *v46; // r13
  unsigned __int64 *v47; // rsi
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r10
  unsigned int v53; // edx
  struct tagWND *v54; // rcx
  __int64 v55; // rcx
  __int64 ProcessWindowStation; // rax
  int v57; // r8d
  __int64 v58; // r8
  __int64 v59; // rdx
  int v60; // r8d
  struct tagWND *Host; // rax
  struct tagWND *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rax
  __int64 DCEx; // rbx
  int NCHit; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  int v70; // r12d
  int v71; // eax
  unsigned int v72; // r12d
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  __int64 *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  struct tagWND *v79; // r11
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  __int64 v82; // rdx
  __int64 NonChildAncestor; // rbx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned __int16 v87; // r9
  unsigned __int64 v88; // rdx
  __int16 v89; // dx
  int v90; // eax
  int v91; // eax
  int v92; // r8d
  __int64 v93; // rdx
  unsigned int v94; // edx
  __int64 v95; // rdx
  __int64 v96; // r8
  __int64 v97; // r13
  struct tagPROCESSINFO *v98; // rax
  unsigned int v99; // r13d
  int v100; // edx
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rax
  __int64 v104; // r8
  int v105; // eax
  unsigned __int16 v106; // ax
  int v107; // r15d
  int v108; // eax
  __int64 v109; // rbx
  __int16 v110; // bx
  unsigned __int16 v111; // bx
  __int64 v112; // rdx
  struct tagWND *v113; // rcx
  struct tagPROCESSINFO *SysMenu; // rax
  struct tagPROCESSINFO *v115; // r13
  __int64 v116; // rcx
  __int64 v117; // rcx
  __int64 v118; // rcx
  __int64 v119; // rcx
  __int64 v121; // rcx
  int v122; // ecx
  __int64 v123; // rdx
  unsigned int v124; // ecx
  int v125; // edx
  __int64 v126; // rcx
  __int64 v127; // rcx
  struct tagPROCESSINFO *v128; // [rsp+50h] [rbp-128h] BYREF
  ULONG BytesInMultiByteString; // [rsp+58h] [rbp-120h] BYREF
  struct tagPROCESSINFO *v130; // [rsp+60h] [rbp-118h]
  __int64 v131; // [rsp+68h] [rbp-110h] BYREF
  __int64 v132; // [rsp+70h] [rbp-108h]
  __int64 v133; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v134; // [rsp+88h] [rbp-F0h]
  _QWORD v135[3]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v136[4]; // [rsp+B0h] [rbp-C8h] BYREF
  _QWORD v137[3]; // [rsp+D0h] [rbp-A8h] BYREF
  _DWORD v138[12]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v139; // [rsp+118h] [rbp-60h] BYREF
  __int64 v140; // [rsp+120h] [rbp-58h]
  int v141; // [rsp+128h] [rbp-50h]

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a2;
  v7 = a1;
  v128 = a1;
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
LABEL_72:
                if ( a3 == 18
                  && (v21 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL), (v21 & 0x80u) == 0)
                  && (v21 & 0xC) == 8
                  || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) & 0x10) != 0 )
                {
                  NonChildAncestor = GetNonChildAncestor(v7);
                  if ( gspwndFullScreen != (struct tagWND *)NonChildAncestor )
                  {
                    v133 = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = &v133;
                    v134 = NonChildAncestor;
                    if ( NonChildAncestor )
                      ++*(_DWORD *)(NonChildAncestor + 8);
                    if ( v84 == 121 )
                      xxxDrawMenuBarUnderlines(v7, 1LL);
                    _InterlockedAdd(&glSendMessage, 1u);
                    xxxSendTransformableMessageTimeout(
                      (struct tagWND *)NonChildAncestor,
                      274LL,
                      0xF100uLL,
                      0LL,
                      0,
                      0,
                      0LL,
                      1,
                      0);
                    ThreadUnlock1(v86, v85);
                  }
                }
                if ( v5 == (HDC)18 )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x80u;
                  xxxDrawMenuBarUnderlines(v7, 0LL);
                }
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= 0xFFFFFFE3;
                return 0LL;
              }
              if ( (_DWORD)a2 == 262 )
              {
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= 0xFFFFFFF3;
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
                    v55 = *((_QWORD *)a1 + 11);
                    v131 = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = &v131;
                    v132 = v55;
                    ++*(_DWORD *)(v55 + 8);
                    v53 = 262;
                    a3 = 32LL;
                    v54 = (struct tagWND *)*((_QWORD *)v7 + 11);
LABEL_246:
                    xxxSendMessage(v54, v53, a3, a4);
                    goto LABEL_135;
                  }
                  v75 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
                  if ( v75 && (unsigned int)(*((_DWORD *)v75 + 76) - 8) <= 3 )
                  {
                    v76 = gptiCurrent;
                    v77 = *v75;
                  }
                  else
                  {
LABEL_477:
                    if ( a3 != 32
                      || (v78 = *(_QWORD *)(gptiCurrent + 384LL), !*(_QWORD *)(v78 + 80))
                      || !(unsigned int)IsCompositionInputWindow(*(struct tagWND **)(v78 + 80)) )
                    {
                      _InterlockedAdd(&glSendMessage, 1u);
                      v74 = (unsigned int)v5;
                      v73 = 61696LL;
                      v82 = 274LL;
LABEL_397:
                      xxxSendTransformableMessageTimeout(v7, v82, v73, v74, 0, 0, 0LL, 1, 0);
                      return 0LL;
                    }
                    CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v79);
                    if ( !CompositionInputWindowUIOwner )
                      return 0LL;
                    TopLevelWindow = (__int64 *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                    if ( !TopLevelWindow )
                      return 0LL;
                    v76 = gptiCurrent;
                    v77 = *TopLevelWindow;
                  }
                  PostIAMShellHookMessageEx(*(_QWORD *)(v76 + 408), 33LL, v77);
                  return 0LL;
                }
                a4 = 0LL;
                a3 = 61728LL;
                v63 = 274LL;
              }
              else
              {
                if ( (_DWORD)a2 != 265 || a3 == 0xFFFF )
                  return 0LL;
                v63 = 258LL;
              }
LABEL_298:
              PostMessage(a1, v63, a3, a4);
              return 0LL;
            }
            if ( (a4 & 0x20000000) != 0 )
            {
              if ( (a4 & 0x40000000) == 0 )
              {
                if ( a3 != 18 || (v24 = *(_QWORD *)(gptiCurrent + 384LL), v25 = *(_DWORD *)(v24 + 332), (v25 & 8) != 0) )
                {
                  *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v24 + 332) = v25 | 8;
                  xxxDrawMenuBarUnderlines(v7, 1LL);
                }
              }
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 332LL) &= ~0x10u;
              xxxDWP_ProcessVirtKey((unsigned int)v5);
              return 0LL;
            }
            if ( a3 != 121 )
              return 0LL;
            v64 = *(_QWORD *)(gptiCurrent + 384LL);
            goto LABEL_327;
          }
          if ( (_DWORD)a2 == 257 )
            goto LABEL_72;
          if ( (_DWORD)a2 == 164 )
          {
            memset(v138, 0, sizeof(v138));
            NCHit = FindNCHit(v7, (unsigned int)v4);
            if ( (unsigned int)(NCHit - 6) <= 1 )
            {
              if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL), v7) )
                return 0LL;
            }
            else if ( (unsigned int)(NCHit - 2) > 1
                   || v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
            {
              return 0LL;
            }
            xxxSetCapture(v7);
            while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v138, 0, 512, 526, 1, 0) || v138[2] != 517 )
            {
              if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 64LL)
                || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
              {
                return 0LL;
              }
            }
            xxxReleaseCapture(v68, v67, v69);
            v70 = LOWORD(v138[9]) | (LOWORD(v138[10]) << 16);
            v71 = FindNCHit(v7, (unsigned int)v70);
            if ( ((v71 - 2) & 0xFFFFFFFA) != 0 )
              return 0LL;
            if ( (*((_BYTE *)v7 + 290) & 0x40) != 0 )
            {
              if ( v71 == 2 )
                goto LABEL_431;
              if ( v71 == 3 )
              {
LABEL_288:
                v72 = 61536;
                goto LABEL_432;
              }
            }
            v73 = *(_QWORD *)v7;
            _InterlockedAdd(&glSendMessage, 1u);
            v74 = v70;
            goto LABEL_396;
          }
          if ( (_DWORD)a2 != 172 )
          {
            if ( (_DWORD)a2 == 174 )
            {
              DCEx = _GetDCEx(a1, 0LL, 65537LL);
              xxxDrawCaptionBar(v7, DCEx, (unsigned int)v5);
              _ReleaseDC(DCEx);
              return 0LL;
            }
            if ( (_DWORD)a2 == 175 )
            {
              xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
              return 0LL;
            }
            if ( (_DWORD)a2 != 256 )
              return 0LL;
            if ( a3 == 27 )
            {
              if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
                return 0LL;
              Host = CoreWindowProp::GetHost(v7);
              if ( !Host )
                return 0LL;
              v62 = (struct tagWND *)GetTopLevelWindow((__int64)Host);
              if ( !v62 )
                return 0LL;
              a4 = v4;
              v63 = 256LL;
              a3 = 27LL;
              a1 = v62;
              goto LABEL_298;
            }
            if ( a3 != 121 )
              return 0LL;
            v64 = *(_QWORD *)(gptiCurrent + 384LL);
LABEL_327:
            *(_DWORD *)(v64 + 332) |= 0x10u;
            if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*((_BYTE *)v7 + 45) & 2) == 0 )
              return 0LL;
            v73 = *(_QWORD *)v7;
            _InterlockedAdd(&glSendMessage, 1u);
            v74 = -1LL;
            goto LABEL_396;
          }
LABEL_409:
          v110 = 0;
          if ( WORD1(a3) == 1 )
          {
            v110 = 1;
          }
          else if ( WORD1(a3) == 2 )
          {
            v110 = 2;
            goto LABEL_414;
          }
          if ( !v110 )
            return 0LL;
LABEL_414:
          v111 = v110 | 0x8000;
          if ( (_DWORD)a2 != 524 )
            LOWORD(v5) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 384LL));
          xxxSendMessage(v7, 0x319u, *(_QWORD *)v7, (unsigned __int16)v5 | (unsigned __int64)(v111 << 16));
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
              v96 = *((_QWORD *)a1 + 11);
              v97 = *(_QWORD *)(*(_QWORD *)(v96 + 16) + 376LL);
              v130 = (struct tagPROCESSINFO *)v97;
              v98 = *(struct tagPROCESSINFO **)(gptiCurrent + 376LL);
              v128 = v98;
              if ( (struct tagPROCESSINFO *)v97 != v98
                && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                    v98,
                                    (struct tagPROCESSINFO *)v97,
                                    (struct tagWND *)v96,
                                    0x119u,
                                    (unsigned __int64)v5,
                                    a4,
                                    1) )
              {
                if ( *(_QWORD *)v97 == gpepCSRSS )
                {
                  v99 = 0x2000;
                  v100 = 0;
                }
                else
                {
                  v99 = *(_DWORD *)(v97 + 832);
                  v100 = *((_DWORD *)v130 + 209);
                }
                v101 = *((_QWORD *)v128 + 104);
                if ( gbEnforceUIPI )
                {
                  if ( (unsigned int)v101 <= v99 )
                  {
                    if ( (_DWORD)v101 != v99
                      || (v102 = HIDWORD(v101), (_DWORD)v102 != v100) && (_DWORD)v102 != -1 && v100 != -1 )
                    {
                      EtwTraceUIPIMsgError(v128, v130, 281LL, v5, v4);
                      UserSetLastError(5);
                      MSGSQMAddMessage(v128, v130, v4, 1, 0);
                      return 0LL;
                    }
                  }
                }
                MSGSQMAddMessage(v128, v130, v4, 1, gbEnforceUIPI != 0 ? 5 : 1);
              }
              v104 = *((_QWORD *)v7 + 11);
              v131 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v131;
              v132 = v104;
              ++*(_DWORD *)(v104 + 8);
              a4 = v4;
              a3 = (unsigned __int64)v5;
              v94 = 281;
              break;
            case 0x11A:
              if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
                return 0LL;
              v95 = *((_QWORD *)a1 + 11);
              v131 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v131;
              v132 = v95;
              ++*(_DWORD *)(v95 + 8);
              v94 = 282;
              break;
            case 0x127:
              v87 = a3;
              BytesInMultiByteString = (unsigned __int16)a3;
              v88 = a3 >> 16;
              v128 = (struct tagPROCESSINFO *)(a3 >> 16);
              LODWORD(v130) = 0;
              if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || v4 )
                return 0LL;
              if ( (_WORD)a3 == 3 )
              {
                v89 = 0;
                v128 = 0LL;
                if ( (*gpsi & 0x80u) != 0 )
                  goto LABEL_352;
                v90 = *(_DWORD *)(gpsi + 7292LL);
                if ( (v90 & 0x20) != 0 || v90 >= 0 )
                  goto LABEL_352;
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                {
                  if ( (*gpsi & 0x40) != 0 )
                    v87 = 2;
                  else
                    v87 = 1;
                  v89 = 3;
                  v5 = (HDC)(v87 | 0x30000LL);
LABEL_352:
                  if ( !v89 )
                    return 0LL;
                  if ( (v89 & 1) != 0 )
                    v92 = (*((unsigned __int8 *)v7 + 51) >> 7) ^ (v87 == 1);
                  else
                    v92 = (int)v130;
                  if ( (v89 & 2) != 0 )
                    v92 |= (*((unsigned __int8 *)v7 + 51) >> 6) & 1 ^ (v87 == 1);
                  if ( (v89 & 4) != 0 )
                    v92 |= (*((unsigned __int8 *)v7 + 51) >> 2) & 1 ^ (v87 == 1);
                  if ( !v92 )
                    return 0LL;
                  a4 = 0LL;
                  a3 = (unsigned __int64)v5;
                  if ( (*((_BYTE *)v7 + 55) & 0xC0) != 0x40 )
                    return xxxSendMessage(v7, 0x128u, (unsigned __int64)v5, 0LL);
                  v93 = *((_QWORD *)v7 + 11);
                  v131 = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = &v131;
                  v132 = v93;
                  ++*(_DWORD *)(v93 + 8);
                  v94 = 295;
                  break;
                }
LABEL_350:
                v87 = BytesInMultiByteString;
                v89 = (__int16)v128;
                goto LABEL_352;
              }
              if ( (*gpsi & 0x80u) == 0 )
              {
                v91 = *(_DWORD *)(gpsi + 7292LL);
                if ( (v91 & 0x20) == 0 && v91 < 0 )
                {
                  if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                    goto LABEL_350;
                  LOWORD(v88) = (_WORD)v128;
                  v87 = BytesInMultiByteString;
                }
              }
              v89 = v88 & 0xFFFC;
              goto LABEL_352;
            default:
              return 0LL;
          }
LABEL_462:
          v42 = xxxSendMessage(*((struct tagWND **)v7 + 11), v94, a3, a4);
LABEL_463:
          v34 = v42;
          ThreadUnlock1(v44, v43);
          return v34;
        }
        if ( (_DWORD)a2 == 297 )
          return (*((unsigned __int8 *)a1 + 51) >> 7) | (*((unsigned __int8 *)a1 + 51) >> 5) & 2 | (unsigned __int64)(*((_BYTE *)a1 + 51) & 4);
        if ( (_DWORD)a2 != 306 )
        {
          if ( (unsigned int)a2 <= 0x132 )
            return 0LL;
          if ( (unsigned int)a2 > 0x134 && (*((_BYTE *)a1 + 45) & 2) != 0 )
          {
            v105 = 15;
LABEL_406:
            v107 = 18;
            goto LABEL_407;
          }
LABEL_400:
          v105 = 5;
          goto LABEL_401;
        }
      }
LABEL_398:
      if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
      {
        v105 = 15;
LABEL_401:
        v107 = 8;
LABEL_407:
        v109 = v105;
        GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4LL * v105 + 3568));
        GreSetTextColor(v5, *(_DWORD *)(gpsi + 4LL * v107 + 3568));
        return *(_QWORD *)(gpsi + 8 * v109 + 3696);
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
          || *(_QWORD *)(*((_QWORD *)a1 + 2) + 384LL) != gpqForeground && !(unsigned int)xxxSetForegroundWindow(a1) )
        {
          return 0LL;
        }
        goto LABEL_431;
      }
      if ( (_DWORD)a2 != 793 )
      {
        if ( (_DWORD)a2 == 795 )
        {
          if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 440LL) & 1) != 0 )
            return 0LL;
          LODWORD(result) = xxxLoadUserApiHook();
        }
        else
        {
          if ( (_DWORD)a2 != 831 )
          {
            if ( (_DWORD)a2 == 841 && a3 )
            {
              v19 = *((_QWORD *)a1 + 11);
              v20 = v19 ? *(_QWORD *)(v19 + 16) : 0LL;
              if ( v20 && *(struct tagWND **)(v20 + 1232) == a1 )
              {
                CoreWindowProp::GetFocusDirection();
                xxxSetFocus(v7);
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
        if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
          && (((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x800) == 0
           || !(unsigned int)xxxCallHook(12LL, v5, v4)) )
        {
          v124 = *(_DWORD *)(gptiCurrent + 1072LL);
          v125 = (v124 >> 11) & 1;
          v128 = *(struct tagPROCESSINFO **)(gptiCurrent + 1076LL);
          if ( (v124 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1224LL) == v7 )
          {
            v126 = *(_QWORD *)(gptiCurrent + 464LL);
            if ( v126 )
            {
              v127 = *(_QWORD *)(v126 + 32);
              if ( v127 )
              {
                if ( (*(_DWORD *)(v127 + 1072) & 0x800) != 0 )
                {
                  v125 = 1;
                  v128 = *(struct tagPROCESSINFO **)(v127 + 1076);
                }
              }
            }
          }
          PostShellHookMessagesEx(
            0xCuLL,
            v4,
            (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v128 & -(__int64)(v125 != 0)));
        }
        return 0LL;
      }
      v123 = *((_QWORD *)a1 + 11);
      v131 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v131;
      v132 = v123;
      ++*(_DWORD *)(v123 + 8);
      v94 = 793;
      goto LABEL_462;
    }
    if ( (_DWORD)a2 == 576 )
    {
      if ( *(_QWORD *)(gptiCurrent + 944LL) == a4 )
        *(_QWORD *)(gptiCurrent + 944LL) = 0LL;
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
            || (v108 = *(_DWORD *)(gpsi + 3648LL), v108 != *(_DWORD *)(gpsi + 3568LL))
            || v108 == *(_DWORD *)(gpsi + 3588LL) )
          {
            GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 3648LL));
            GreSetTextColor(v5, *(_DWORD *)(gpsi + 3628LL));
            return *(_QWORD *)(gpsi + 3944LL);
          }
          v105 = 20;
          goto LABEL_406;
        case 0x138:
          goto LABEL_398;
        case 0x205:
          v106 = *((_WORD *)a1 + 66) + WORD1(a4);
          if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
            v74 = (unsigned __int16)(*((_WORD *)a1 + 68) - a4) | (unsigned __int64)(v106 << 16);
          else
            v74 = (unsigned __int16)(a4 + *((_WORD *)a1 + 64)) | (v106 << 16);
          v73 = *(_QWORD *)a1;
          _InterlockedAdd(&glSendMessage, 1u);
LABEL_396:
          v82 = 123LL;
          goto LABEL_397;
      }
      if ( (_DWORD)a2 != 522 )
        return 0LL;
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
      return 0LL;
    v112 = *((_QWORD *)a1 + 11);
    v131 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v131;
    v132 = v112;
    ++*(_DWORD *)(v112 + 8);
    v59 = v6;
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
      v22 = HotKeyHelper(a1);
      v23 = 0;
      if ( *v22 )
        return *((int *)*v22 + 2);
      return v23;
    }
    if ( (unsigned int)a2 <= 0x18 )
    {
      if ( (_DWORD)a2 == 24 )
      {
        if ( !(_WORD)a4 )
          return 0LL;
        v32 = *((_BYTE *)a1 + 55);
        if ( (((v32 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)v7 + 13) )
          return 0LL;
        if ( a3 )
        {
          if ( (v32 & 0x10) != 0 || (*((_BYTE *)v7 + 41) & 0x40) == 0 )
            return 0LL;
        }
        else if ( (v32 & 0x10) == 0 )
        {
          return 0LL;
        }
        SetOrClrWF(0LL, v7, 320LL, 1LL);
        if ( !v5 )
          SetOrClrWF(1LL, v7, 320LL, 1LL);
        xxxShowWindowEx(v7);
        return 0LL;
      }
      if ( (_DWORD)a2 == 15 )
        goto LABEL_84;
      if ( (unsigned int)a2 <= 0xF )
      {
        if ( (_DWORD)a2 != 6 )
        {
          switch ( (_DWORD)a2 )
          {
            case 0xB:
              xxxDWP_SetRedraw(a1, a3 != 0);
              return 0LL;
            case 0xC:
              v14 = DefSetText(a1, a4);
              v15 = v14;
              if ( v14 )
              {
                xxxRedrawTitle(v7, 8LL);
                xxxWindowEvent(0x800Cu, (__int64 *)v7, 0, 0, 0);
              }
              return v15;
            case 0xD:
              if ( !a3 )
                return 0LL;
              v27 = (_DWORD *)((char *)a1 + 216);
              v28 = *(_DWORD *)(a4 + 4);
              if ( !*v27 )
              {
                v30 = v28 < 0;
                v31 = *(_BYTE **)(a4 + 8);
                if ( v30 )
                  *v31 = 0;
                else
                  *(_WORD *)v31 = 0;
                return 0LL;
              }
              if ( v28 >= 0 )
              {
                v29 = TextCopy(v27, *(_QWORD *)(a4 + 8), (unsigned int)a3);
                *(_DWORD *)v4 = 2 * v29;
              }
              else
              {
                v29 = WCSToMBEx(0LL, *((_QWORD *)v7 + 28), *v27 >> 1, a4 + 8, (v28 & 0x7FFFFFFFu) - 1);
                *(_BYTE *)(v29 + *(_QWORD *)(v4 + 8)) = 0;
                *(_DWORD *)v4 = v29;
              }
              return v29;
            case 0xE:
              v26 = *((_DWORD *)a1 + 54);
              if ( !v26 )
                return 0LL;
              if ( a4 )
              {
                RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 28), v26);
                return BytesInMultiByteString;
              }
              else
              {
                return v26 >> 1;
              }
            default:
              return 0LL;
          }
        }
        if ( a3 )
        {
          CoreWindowProp::GetFocusDirection();
          xxxSetFocus(v7);
        }
        if ( *((char *)v7 + 290) >= 0 )
          return 0LL;
        v16 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1232LL);
        if ( !v16 )
          return 0LL;
        v135[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v135;
        v135[1] = v16;
        ++*(_DWORD *)(v16 + 8);
        xxxSendNotifyMessage(v16, 841LL, v5, 0LL, 0);
LABEL_135:
        ThreadUnlock1(v18, v17);
        return 0LL;
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
              v33 = *((_QWORD *)a1 + 11);
            else
              v33 = 0LL;
            if ( !v33
              || (v133 = *(_QWORD *)(gptiCurrent + 368LL),
                  *(_QWORD *)(gptiCurrent + 368LL) = &v133,
                  v134 = v33,
                  ++*(_DWORD *)(v33 + 8),
                  v34 = xxxSendMessage((struct tagWND *)v33, 0x21u, a3, a4),
                  ThreadUnlock1(v36, v35),
                  !v34) )
            {
              if ( (_DWORD)v4 == 33619970 )
                return 3;
              else
                return 1;
            }
            return v34;
          }
          goto LABEL_400;
        }
LABEL_84:
        xxxDWP_Paint(a1);
        return 0LL;
      }
      if ( (_DWORD)a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v38 = *(_DWORD *)(a4 + 12);
          if ( v38 == 4 || v38 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
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
          LODWORD(result) = DWP_SetHotKey(a1, a3);
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
            v39 = *((unsigned __int16 *)a1 + 96);
          else
            v39 = 0;
          ContextHelpId = GetContextHelpId();
          xxxSendHelpMessage((_DWORD)v7, 1, v39, *(_QWORD *)v7, ContextHelpId);
          return 0LL;
        case '5':
          return ((unsigned __int64)*((unsigned __int8 *)a1 + 40) >> 6) & 1;
        case ';':
          LODWORD(result) = xxxClientShutdown(a1, a3);
          return (int)result;
        case 'F':
          if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
            xxxAdjustSize(a1, a4 + 24, a4 + 28, a4);
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
        v45 = BuildHwndList(*((_QWORD *)a1 + 12), 2, 0LL);
        v46 = v45;
        if ( v45 )
        {
          v47 = (unsigned __int64 *)((char *)v45 + 32);
          v48 = *((_QWORD *)v45 + 4);
          if ( v48 != 1 )
          {
            do
            {
              v49 = HMValidateHandleNoSecure(v48, 1);
              if ( v49 )
              {
                v136[0] = *(_QWORD *)(gptiCurrent + 368LL);
                *(_QWORD *)(gptiCurrent + 368LL) = v136;
                v136[1] = v49;
                ++*(_DWORD *)(v49 + 8);
                xxxSendMessage((struct tagWND *)v49, 0x51u, (unsigned __int64)v5, v4);
                ThreadUnlock1(v51, v50);
              }
              v48 = *++v47;
            }
            while ( *v47 != 1 );
          }
          FreeHwndList(v46);
        }
        return 0LL;
      }
      if ( (_DWORD)a2 != 83 )
        return 0LL;
      v41 = (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 11) : *((_QWORD *)a1 + 13);
      if ( !v41 || v41 == GetThreadDesktopWindow(0LL) )
        return 0LL;
      v133 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v133;
      v134 = v41;
      ++*(_DWORD *)(v41 + 8);
      _InterlockedAdd(&glSendMessage, 1u);
      v42 = xxxSendTransformableMessageTimeout((struct tagWND *)v41, 83LL, (unsigned __int64)v5, v4, 0, 0, 0LL, 1, 1);
      goto LABEL_463;
    }
    v52 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL);
    if ( !v52 || (struct tagWND *)v52 == a1 || *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) == *(_WORD *)(gpsi + 888LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v4, 256LL, v7) )
        UserSetLastError(1457);
      return 0LL;
    }
    v133 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v133;
    v134 = v52;
    ++*(_DWORD *)(v52 + 8);
    v53 = 80;
    v54 = (struct tagWND *)v52;
    goto LABEL_246;
  }
  if ( (_DWORD)a2 == 123 )
  {
    v57 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v57 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL), v7) )
        xxxDoScrollMenu(v7, 0LL, v60 - 6);
      return 0LL;
    }
    if ( (*((_BYTE *)v7 + 55) & 0xC0) == 0x40 )
    {
      v58 = *((_QWORD *)v7 + 11);
      v131 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v131;
      v132 = v58;
      ++*(_DWORD *)(v58 + 8);
      a3 = *(_QWORD *)v7;
      a4 = v4;
      v59 = 123LL;
LABEL_424:
      v113 = (struct tagWND *)*((_QWORD *)v7 + 11);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v113, v59, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_135;
    }
    if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL) )
      return 0LL;
    if ( v57 != 2 )
    {
      if ( v57 != 3 )
      {
        if ( v4 == -1 && (*((_BYTE *)v7 + 45) & 2) == 0 )
          xxxSimulateShiftF10(gptiCurrent);
        return 0LL;
      }
      goto LABEL_288;
    }
LABEL_431:
    v72 = (*((_BYTE *)v7 + 55) & 0x21) != 0 ? 61728 : 61488;
LABEL_432:
    SysMenu = (struct tagPROCESSINFO *)xxxGetSysMenu(v7, 1LL);
    v115 = SysMenu;
    v130 = SysMenu;
    if ( !SysMenu )
      return 0LL;
    SetMenuDefaultItem(SysMenu, v72, 0LL);
    PostShellHookMessagesEx(9uLL, *(_QWORD *)v7, 0LL);
    v137[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v137;
    v137[1] = v115;
    ++*((_DWORD *)v115 + 2);
    if ( v4 != 0xFFFFFFFFLL )
    {
      xxxTrackPopupMenuEx(v115, 514LL, (unsigned int)(__int16)v4, (unsigned int)SWORD1(v4), v7, 0LL);
      goto LABEL_135;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(56LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v116) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v117) + 776) & 0x4000) == 0 )
      {
LABEL_445:
        v18 = (_DWORD *)(gpsi + 2492LL);
        goto LABEL_454;
      }
    }
    else if ( (unsigned int)IsDPIDWMSysMet(v116)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v118) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v119) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_445;
    }
    if ( (unsigned int)IsDPIDWMSysMet(56LL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v121) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v122 = 0)
        : (v122 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                            + 244LL) & 1),
          v122) )
    {
      v18 = (_DWORD *)(gpsi + 2880LL);
    }
    else
    {
      v18 = (_DWORD *)(gpsi + 2104LL);
    }
LABEL_454:
    if ( (*v18 & 8) != 0 )
    {
      v140 = 0LL;
      v141 = 0;
      v139 = 20LL;
      if ( (unsigned int)xxxSendMinRectMessages(v7, (char *)&v139 + 4) )
        xxxTrackPopupMenuEx(v130, 576LL, HIDWORD(v139), (unsigned int)v140, v7, &v139);
    }
    goto LABEL_135;
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
          SetOrClrWF(1LL, a1, 384LL, 1LL);
          v11 = _GetDCEx(v7, v5, 328833LL);
          v12 = v11;
          v13 = 0;
          if ( v11 )
          {
            if ( (*((_BYTE *)v7 + 40) & 0x40) != 0 )
              v13 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 384LL) == gpqForeground;
            xxxDrawWindowFrame(v7, v11, v13);
            _ReleaseDC(v12);
          }
          SetOrClrWF(0LL, v7, 384LL, 1LL);
          return 0LL;
        }
        if ( (_DWORD)a2 != 134 )
        {
          if ( (_DWORD)a2 == 136 )
          {
            SetOrClrWF(0LL, a1, 640LL, 1LL);
            xxxInternalDoSyncPaint((__int64)v7, (unsigned int)v5);
          }
          return 0LL;
        }
        xxxDWP_DoNCActivate(a1);
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
        goto LABEL_39;
      if ( *v9 && *v10 == 0xFF )
        return 1LL;
      if ( *(int *)(v4 + 84) >= 0 )
      {
LABEL_39:
        if ( *v9 >= 2u && *(_WORD *)v10 == 0xFFFF )
          return 1LL;
      }
    }
    SetOrClrWF(1LL, v7, 514LL, 1LL);
    LODWORD(result) = DefSetText(v7, v4 + 80);
    return (int)result;
  }
  return (__int64)xxxDWP_SetIcon(a1, a3, (HICON)a4);
}
