/*
 * XREFs of xxxRealDefWindowProc @ 0x1C007D1E4
 * Callers:
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C007D080 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0008F08 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     _IsDescendant @ 0x1C0063558 (_IsDescendant.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0067DE4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C0067E84 (TextCopy.c)
 *     DefSetText @ 0x1C006AF9C (DefSetText.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     xxxLoadUserApiHook @ 0x1C006F6E0 (xxxLoadUserApiHook.c)
 *     xxxAdjustSize @ 0x1C006F84C (xxxAdjustSize.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetTopLevelWindow @ 0x1C0075DF0 (_GetTopLevelWindow.c)
 *     xxxInternalDoSyncPaint @ 0x1C0076920 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C0076DE0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0076E50 (BuildHwndList.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0078EA8 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C007B458 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxSleepThread2 @ 0x1C0082990 (xxxSleepThread2.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0087910 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMouseKeyFlags @ 0x1C00948F4 (GetMouseKeyFlags.c)
 *     _GetKeyState @ 0x1C0095870 (_GetKeyState.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     PostShellHookMessagesEx @ 0x1C00992D4 (PostShellHookMessagesEx.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEAUtagWND@@@Z @ 0x1C00997BC (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0099824 (-IsComponent@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C009B810 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C009B960 (MSGSQMAddMessage.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxRedrawTitle @ 0x1C00A0C90 (xxxRedrawTitle.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     PostIAMShellHookMessageEx @ 0x1C00A4BF0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00A4CB0 (_PostMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00A7ADC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxSetFocus @ 0x1C00A8300 (xxxSetFocus.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     xxxSetForegroundWindow @ 0x1C00A8FB4 (xxxSetForegroundWindow.c)
 *     xxxSendNotifyMessage @ 0x1C00AA4C0 (xxxSendNotifyMessage.c)
 *     xxxDWP_DoNCActivate @ 0x1C00AD2F8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00AD500 (xxxDrawCaptionBar.c)
 *     xxxDrawWindowFrame @ 0x1C00AE488 (xxxDrawWindowFrame.c)
 *     _InitPwSB @ 0x1C00AFCC8 (_InitPwSB.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C00B1198 (GreSetBkColor.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00B2848 (xxxDWP_EraseBkgnd.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00B791C (xxxGetTitleBarInfoEx.c)
 *     xxxGetSysMenu @ 0x1C00B83A0 (xxxGetSysMenu.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxReleaseCapture @ 0x1C00BB8C0 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C00BB9A4 (xxxSetCapture.c)
 *     _GetProcessWindowStation @ 0x1C00DAF00 (_GetProcessWindowStation.c)
 *     xxxInternalGetMessage @ 0x1C00DF5A8 (xxxInternalGetMessage.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0100A90 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C01066F8 (GetThreadDesktopWindow.c)
 *     xxxHandleWindowPosChanged @ 0x1C010B33C (xxxHandleWindowPosChanged.c)
 *     DWP_SetHotKey @ 0x1C010D560 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C010D5F4 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDWP_UpdateUIState @ 0x1C01148BC (xxxDWP_UpdateUIState.c)
 *     _SetMenuDefaultItem @ 0x1C0118C4C (_SetMenuDefaultItem.c)
 *     DWP_GetIcon @ 0x1C011D8AC (DWP_GetIcon.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     xxxClientShutdown @ 0x1C0120F14 (xxxClientShutdown.c)
 *     FindNCHit @ 0x1C0121100 (FindNCHit.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0126500 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C012B8C0 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0131828 (xxxDrawMenuBarUnderlines.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0144604 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     xxxMessageBeep @ 0x1C0152DE0 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     MergeDeferredMessagesOfThreadOnQueue @ 0x1C01CB1E8 (MergeDeferredMessagesOfThreadOnQueue.c)
 *     xxxSimulateShiftF10 @ 0x1C01CF48C (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     xxxActivateKeyboardLayout @ 0x1C01D56D0 (xxxActivateKeyboardLayout.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0205830 (SfnCOPYGLOBALDATA.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z @ 0x1C02262CC (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEAU2@@Z.c)
 *     xxxDefPointerProc @ 0x1C022A614 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C022C4CC (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C02351A4 (xxxSendHelpMessage.c)
 *     WCSToMBEx @ 0x1C0246314 (WCSToMBEx.c)
 *     ClientFrame @ 0x1C02463DC (ClientFrame.c)
 *     GetContextHelpId @ 0x1C0249234 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  HDC v5; // r12
  unsigned int v6; // r10d
  struct tagWND *v7; // rsi
  ULONG v8; // eax
  __int64 result; // rax
  unsigned int v10; // r8d
  int v11; // eax
  int v12; // r8d
  bool v13; // sf
  _BYTE *v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  char v20; // cl
  __int64 v21; // r10
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // eax
  struct tagHOTKEYSTRUCT **v26; // rax
  int v27; // edi
  int v28; // edi
  int ContextHelpId; // eax
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct tagBWL *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  struct tagBWL *v38; // rsi
  unsigned __int64 *v39; // rbx
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r10
  unsigned int v45; // edx
  struct tagWND *v46; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rax
  __int64 v51; // rbx
  BOOL v52; // edi
  _DWORD *v53; // rax
  _BYTE *v54; // rdx
  __int64 v55; // r8
  int v56; // r8d
  __int64 v57; // r8
  unsigned int v58; // edx
  int v59; // r8d
  __int64 v60; // rdx
  struct tagWND *Host; // rax
  struct tagWND *v62; // rax
  __int64 v63; // rax
  __int64 DCEx; // rbx
  int NCHit; // eax
  int v66; // r12d
  int v67; // eax
  unsigned int v68; // ebx
  unsigned __int64 v69; // r8
  __int64 v70; // r9
  unsigned int v71; // r10d
  unsigned int v72; // r10d
  unsigned int v73; // r10d
  __int64 v74; // rcx
  __int64 *v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // rax
  struct tagWND *v79; // r11
  struct tagWND *CompositionInputWindowUIOwner; // rax
  __int64 *TopLevelWindow; // rax
  unsigned int v82; // edx
  int v83; // ecx
  unsigned int v84; // edx
  __int64 v85; // r8
  __int64 NonChildAncestor; // r13
  __int64 v87; // rcx
  int v88; // ecx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // rcx
  int v92; // eax
  unsigned int v93; // r10d
  unsigned int v94; // r10d
  unsigned __int16 v95; // r9
  __int64 v96; // rdx
  __int16 v97; // dx
  int v98; // eax
  int v99; // eax
  ULONG v100; // r8d
  __int64 v101; // rdx
  unsigned int v102; // edx
  __int64 v103; // rdx
  __int64 v104; // r8
  __int64 v105; // rbx
  struct tagPROCESSINFO *v106; // rax
  unsigned int v107; // edx
  int v108; // r8d
  unsigned __int64 v109; // rax
  unsigned __int64 v111; // rax
  __int64 v112; // r8
  int v113; // ebx
  unsigned __int16 v114; // ax
  int v115; // eax
  __int16 v116; // bx
  unsigned __int16 v117; // bx
  __int64 v118; // rdx
  struct tagWND *v119; // rcx
  __int64 SysMenu; // rax
  __int64 v121; // r12
  __int64 v122; // rdx
  unsigned __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // ecx
  __int64 v134; // rcx
  __int64 v135; // r8
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // r8
  __int64 v139; // r9
  int v140; // ecx
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 v143; // rdx
  unsigned int v144; // ecx
  int v145; // edx
  __int64 v146; // rcx
  __int64 v147; // rcx
  struct tagPROCESSINFO *v148; // [rsp+50h] [rbp-128h] BYREF
  int v149; // [rsp+58h] [rbp-120h]
  __int64 v150; // [rsp+60h] [rbp-118h] BYREF
  __int64 v151; // [rsp+68h] [rbp-110h]
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp-100h] BYREF
  __int64 v153; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v154; // [rsp+88h] [rbp-F0h]
  _QWORD v155[3]; // [rsp+A0h] [rbp-D8h] BYREF
  _QWORD v156[3]; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v157[3]; // [rsp+D0h] [rbp-A8h] BYREF
  _DWORD v158[12]; // [rsp+E8h] [rbp-90h] BYREF
  __int64 v159; // [rsp+118h] [rbp-60h] BYREF
  __int64 v160; // [rsp+120h] [rbp-58h]
  int v161; // [rsp+128h] [rbp-50h]

  v4 = a4;
  v5 = (HDC)a3;
  v6 = a2;
  v7 = a1;
  v148 = a1;
  if ( a1 == (struct tagWND *)-1LL || (unsigned int)a2 > 0x400 )
    return 0LL;
  if ( (unsigned int)a2 > 0xA3 )
  {
    if ( (unsigned int)a2 <= 0x136 )
    {
      if ( (_DWORD)a2 != 310 )
      {
        v60 = 274LL;
        if ( v6 <= 0x112 )
        {
          if ( v6 == 274 )
          {
            xxxSysCommand(a1);
            return 0LL;
          }
          if ( v6 > 0x101 )
          {
            v71 = v6 - 260;
            if ( !v71 )
            {
              if ( (a4 & 0x20000000) != 0 )
              {
                if ( (a4 & 0x40000000) == 0 )
                {
                  if ( a3 != 18
                    || (v91 = *(_QWORD *)(gptiCurrent + 384LL), v92 = *(_DWORD *)(v91 + 340), (v92 & 8) != 0) )
                  {
                    *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFF3;
                  }
                  else
                  {
                    *(_DWORD *)(v91 + 340) = v92 | 8;
                    xxxDrawMenuBarUnderlines(v7, 1LL);
                  }
                }
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x10u;
                xxxDWP_ProcessVirtKey((unsigned int)v5);
                return 0LL;
              }
              if ( a3 != 121 )
                return 0LL;
              v63 = *(_QWORD *)(gptiCurrent + 384LL);
LABEL_285:
              *(_DWORD *)(v63 + 340) |= 0x10u;
              if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*((_BYTE *)v7 + 45) & 2) == 0 )
                return 0LL;
              v69 = *(_QWORD *)v7;
              _InterlockedAdd(&glSendMessage, 1u);
              v70 = -1LL;
              goto LABEL_368;
            }
            v72 = v71 - 1;
            if ( v72 )
            {
              v73 = v72 - 1;
              if ( v73 )
              {
                if ( v73 != 3 || a3 == 0xFFFF )
                  return 0LL;
                v60 = 258LL;
              }
              else
              {
                *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFF3;
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
                    goto LABEL_471;
                  if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
                  {
                    v74 = *((_QWORD *)a1 + 11);
                    v150 = *(_QWORD *)(gptiCurrent + 368LL);
                    *(_QWORD *)(gptiCurrent + 368LL) = &v150;
                    v151 = v74;
                    ++*(_DWORD *)(v74 + 8);
                    v45 = 262;
                    a3 = 32LL;
                    v46 = (struct tagWND *)*((_QWORD *)v7 + 11);
LABEL_131:
                    xxxSendMessage(v46, v45, a3, a4);
LABEL_397:
                    ThreadUnlock1(v19, v18);
                    return 0LL;
                  }
                  v75 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL);
                  if ( v75 && (unsigned int)(*((_DWORD *)v75 + 76) - 8) <= 3 )
                  {
                    v76 = gptiCurrent;
                    v77 = *v75;
                  }
                  else
                  {
LABEL_471:
                    if ( a3 != 32
                      || (v78 = *(_QWORD *)(gptiCurrent + 384LL), !*(_QWORD *)(v78 + 88))
                      || !(unsigned int)IsCompositionInputWindow(*(struct tagWND **)(v78 + 88)) )
                    {
                      _InterlockedAdd(&glSendMessage, 1u);
                      v70 = (unsigned int)v5;
                      v82 = 274;
                      v69 = 61696LL;
LABEL_369:
                      xxxSendTransformableMessageTimeout(v7, v82, v69, v70, 0, 0, 0LL, 1, 0);
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
                a3 = 61728LL;
              }
LABEL_235:
              PostMessage(a1, v60, a3);
              return 0LL;
            }
          }
          else if ( v6 != 257 )
          {
            if ( v6 == 164 )
            {
              memset(v158, 0, sizeof(v158));
              NCHit = FindNCHit(v7, (unsigned int)v4);
              if ( (unsigned int)(NCHit - 6) <= 1 )
              {
                if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), (__int64)v7) )
                  return 0LL;
              }
              else if ( (unsigned int)(NCHit - 2) > 1
                     || v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
              {
                return 0LL;
              }
              xxxSetCapture(v7);
              while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v158, 0, 512, 526, 1, 0) || v158[2] != 517 )
              {
                if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 72LL)
                  || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
                {
                  return 0LL;
                }
              }
              xxxReleaseCapture();
              v66 = LOWORD(v158[9]) | (LOWORD(v158[10]) << 16);
              v67 = FindNCHit(v7, (unsigned int)v66);
              if ( ((v67 - 2) & 0xFFFFFFFA) != 0 )
                return 0LL;
              if ( (*((_BYTE *)v7 + 290) & 0x40) != 0 )
              {
                if ( v67 == 2 )
                  goto LABEL_412;
                if ( v67 == 3 )
                {
LABEL_223:
                  v68 = 61536;
                  goto LABEL_413;
                }
              }
              v69 = *(_QWORD *)v7;
              _InterlockedAdd(&glSendMessage, 1u);
              v70 = v66;
              goto LABEL_368;
            }
            if ( v6 != 172 )
            {
              if ( v6 == 174 )
              {
                DCEx = _GetDCEx(a1, 0LL, 65537LL);
                xxxDrawCaptionBar(v7, DCEx, (unsigned int)v5);
                _ReleaseDC(DCEx);
                return 0LL;
              }
              if ( v6 == 175 )
              {
                xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
                return 0LL;
              }
              if ( v6 != 256 )
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
                v60 = 256LL;
                a3 = 27LL;
                a1 = v62;
                goto LABEL_235;
              }
              if ( a3 != 121 )
                return 0LL;
              v63 = *(_QWORD *)(gptiCurrent + 384LL);
              goto LABEL_285;
            }
LABEL_379:
            v116 = 0;
            if ( WORD1(a3) == 1 )
            {
              v116 = 1;
            }
            else if ( WORD1(a3) == 2 )
            {
              v116 = 2;
              goto LABEL_384;
            }
            if ( !v116 )
              return 0LL;
LABEL_384:
            v117 = v116 | 0x8000;
            if ( v6 != 524 )
              LOWORD(v5) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 384LL));
            xxxSendMessage(v7, 0x319u, *(_QWORD *)v7, (unsigned __int16)v5 | (unsigned __int64)(v117 << 16));
            return 0LL;
          }
          if ( a3 == 18
            && (v83 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL), (v83 & 0x80u) == 0)
            && (v83 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) & 0x10) != 0 )
          {
            NonChildAncestor = GetNonChildAncestor(v7);
            if ( gspwndFullScreen != (struct tagWND *)NonChildAncestor )
            {
              v149 = 0;
              v153 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v153;
              v154 = NonChildAncestor;
              if ( NonChildAncestor )
                ++*(_DWORD *)(NonChildAncestor + 8);
              if ( v85 == 121 )
              {
                xxxDrawMenuBarUnderlines(v7, 1LL);
                v84 = 274;
              }
              v87 = *(_QWORD *)(NonChildAncestor + 16);
              if ( v87 != gptiCurrent && *(_QWORD *)(v87 + 384) == *(_QWORD *)(gptiCurrent + 384LL) )
              {
                v88 = *(_DWORD *)(gptiCurrent + 440LL);
                if ( (v88 & 0x10000) == 0 )
                {
                  *(_DWORD *)(gptiCurrent + 440LL) = v88 | 0x10000;
                  v149 = 1;
                }
              }
              _InterlockedAdd(&glSendMessage, 1u);
              xxxSendTransformableMessageTimeout(
                (struct tagWND *)NonChildAncestor,
                v84,
                0xF100uLL,
                0LL,
                0,
                0,
                0LL,
                1,
                0);
              if ( v149 == 1 )
              {
                *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10000u;
                MergeDeferredMessagesOfThreadOnQueue(gptiCurrent);
              }
              ThreadUnlock1(v90, v89);
            }
          }
          if ( v5 == (HDC)18 )
          {
            *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines(v7, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 340LL) &= 0xFFFFFFE3;
          return 0LL;
        }
        if ( v6 <= 0x128 )
        {
          if ( v6 == 296 )
            return xxxDWP_UpdateUIState(a1, a3, a4);
          v93 = v6 - 281;
          if ( !v93 )
          {
            if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
              return 0LL;
            v104 = *((_QWORD *)a1 + 11);
            v105 = *(_QWORD *)(*(_QWORD *)(v104 + 16) + 376LL);
            v106 = *(struct tagPROCESSINFO **)(gptiCurrent + 376LL);
            v148 = v106;
            if ( (struct tagPROCESSINFO *)v105 != v106
              && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                  v106,
                                  (struct tagPROCESSINFO *)v105,
                                  (struct tagWND *)v104,
                                  0x119u,
                                  (unsigned __int64)v5,
                                  a4,
                                  1) )
            {
              if ( *(_QWORD *)v105 == gpepCSRSS )
              {
                v107 = 0x2000;
                v108 = 0;
              }
              else
              {
                v107 = *(_DWORD *)(v105 + 824);
                v108 = *(_DWORD *)(v105 + 828);
              }
              v109 = *((_QWORD *)v148 + 103);
              if ( gbEnforceUIPI )
              {
                if ( (unsigned int)v109 <= v107 )
                {
                  if ( (_DWORD)v109 != v107
                    || (v111 = HIDWORD(v109), (_DWORD)v111 != v108) && (_DWORD)v111 != -1 && v108 != -1 )
                  {
                    EtwTraceUIPIMsgError(v148, v105, 281LL, v5, v4);
                    UserSetLastError(5LL);
                    MSGSQMAddMessage(v148, (struct tagPROCESSINFO *)v105, v4, 1, 0);
                    return 0LL;
                  }
                }
              }
              MSGSQMAddMessage(v148, (struct tagPROCESSINFO *)v105, v4, 1, gbEnforceUIPI != 0 ? 5 : 1);
            }
            v112 = *((_QWORD *)v7 + 11);
            v150 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v150;
            v151 = v112;
            ++*(_DWORD *)(v112 + 8);
            a4 = v4;
            a3 = (unsigned __int64)v5;
            v102 = 281;
            goto LABEL_456;
          }
          v94 = v93 - 1;
          if ( !v94 )
          {
            if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
              return 0LL;
            v103 = *((_QWORD *)a1 + 11);
            v150 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v150;
            v151 = v103;
            ++*(_DWORD *)(v103 + 8);
            v102 = 282;
            goto LABEL_456;
          }
          if ( v94 != 13 )
            return 0LL;
          v95 = a3;
          v149 = (unsigned __int16)a3;
          v96 = a3 >> 16;
          v148 = (struct tagPROCESSINFO *)(a3 >> 16);
          BytesInMultiByteString = 0;
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || v4 )
            return 0LL;
          if ( (_WORD)a3 == 3 )
          {
            v97 = 0;
            v148 = 0LL;
            if ( (*gpsi & 0x80u) != 0 )
              goto LABEL_313;
            v98 = *(_DWORD *)(gpsi + 8684LL);
            if ( (v98 & 0x20) != 0 || v98 >= 0 )
              goto LABEL_313;
            if ( (GetAppCompatFlags2(0x400u, 0LL, gpsi, (unsigned __int16)a3) & 2) == 0 )
            {
              if ( (*gpsi & 0x40) != 0 )
                v95 = 2;
              else
                v95 = 1;
              v97 = 3;
              v5 = (HDC)(v95 | 0x30000LL);
LABEL_313:
              if ( !v97 )
                return 0LL;
              if ( (v97 & 1) != 0 )
                v100 = (*((unsigned __int8 *)v7 + 51) >> 7) ^ (v95 == 1);
              else
                v100 = BytesInMultiByteString;
              if ( (v97 & 2) != 0 )
                v100 |= (*((unsigned __int8 *)v7 + 51) >> 6) & 1 ^ (v95 == 1);
              if ( (v97 & 4) != 0 )
                v100 |= (*((unsigned __int8 *)v7 + 51) >> 2) & 1 ^ (v95 == 1);
              if ( !v100 )
                return 0LL;
              a4 = 0LL;
              a3 = (unsigned __int64)v5;
              if ( (*((_BYTE *)v7 + 55) & 0xC0) != 0x40 )
                return xxxSendMessage(v7, 0x128u, (unsigned __int64)v5, 0LL);
              v101 = *((_QWORD *)v7 + 11);
              v150 = *(_QWORD *)(gptiCurrent + 368LL);
              *(_QWORD *)(gptiCurrent + 368LL) = &v150;
              v151 = v101;
              ++*(_DWORD *)(v101 + 8);
              v102 = 295;
              goto LABEL_456;
            }
LABEL_310:
            v95 = v149;
            v97 = (__int16)v148;
            goto LABEL_313;
          }
          if ( (*gpsi & 0x80u) == 0 )
          {
            v99 = *(_DWORD *)(gpsi + 8684LL);
            if ( (v99 & 0x20) == 0 && v99 < 0 )
            {
              if ( (GetAppCompatFlags2(0x400u, v96, a3, (unsigned __int16)a3) & 2) == 0 )
                goto LABEL_310;
              LOWORD(v96) = (_WORD)v148;
              v95 = v149;
            }
          }
          v97 = v96 & 0xFFFC;
          goto LABEL_313;
        }
        if ( v6 == 297 )
          return (*((unsigned __int8 *)a1 + 51) >> 7) | (*((unsigned __int8 *)a1 + 51) >> 5) & 2 | (unsigned __int64)(*((_BYTE *)a1 + 51) & 4);
        if ( v6 != 306 )
        {
          if ( v6 <= 0x132 )
            return 0LL;
          if ( v6 > 0x134 )
          {
            if ( v6 != 309 )
              return 0LL;
            if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
            {
              v113 = 15;
              goto LABEL_377;
            }
          }
LABEL_372:
          v113 = 5;
          goto LABEL_377;
        }
      }
LABEL_370:
      if ( (*((_BYTE *)a1 + 45) & 2) != 0 )
      {
        v113 = 15;
        goto LABEL_377;
      }
      goto LABEL_372;
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
        goto LABEL_412;
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
              v141 = *((_QWORD *)a1 + 11);
              v142 = v141 ? *(_QWORD *)(v141 + 16) : 0LL;
              if ( v142 && *(struct tagWND **)(v142 + 1256) == a1 )
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
           || !(unsigned int)xxxCallHook(12LL, v5, v4, 10LL)) )
        {
          v144 = *(_DWORD *)(gptiCurrent + 1096LL);
          v145 = (v144 >> 11) & 1;
          v148 = *(struct tagPROCESSINFO **)(gptiCurrent + 1100LL);
          if ( (v144 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1248LL) == v7 )
          {
            v146 = *(_QWORD *)(gptiCurrent + 464LL);
            if ( v146 )
            {
              v147 = *(_QWORD *)(v146 + 32);
              if ( v147 )
              {
                if ( (*(_DWORD *)(v147 + 1096) & 0x800) != 0 )
                {
                  v145 = 1;
                  v148 = *(struct tagPROCESSINFO **)(v147 + 1100);
                }
              }
            }
          }
          PostShellHookMessagesEx(
            0xCuLL,
            v4,
            (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v148 & -(__int64)(v145 != 0)));
        }
        return 0LL;
      }
      v143 = *((_QWORD *)a1 + 11);
      v150 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v150;
      v151 = v143;
      ++*(_DWORD *)(v143 + 8);
      v102 = 793;
LABEL_456:
      v31 = xxxSendMessage(*((struct tagWND **)v7 + 11), v102, a3, a4);
      goto LABEL_457;
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
        if ( (_DWORD)a2 == 554 )
          return 1162627398LL;
        if ( (_DWORD)a2 != 555 )
          return 0LL;
        LODWORD(result) = (*((unsigned __int8 *)a1 + 48) >> 4) & 1;
        return (int)result;
      }
    }
    else
    {
      switch ( (_DWORD)a2 )
      {
        case 0x20C:
          goto LABEL_379;
        case 0x137:
          if ( *(_WORD *)(gpsi + 8676LL) < 8u
            || (v115 = *(_DWORD *)(gpsi + 5040LL), v115 != *(_DWORD *)(gpsi + 4960LL))
            || v115 == *(_DWORD *)(gpsi + 4980LL) )
          {
            GreSetBkColor((HDC)a3);
            GreSetTextColor(v5);
            return *(_QWORD *)(gpsi + 5336LL);
          }
          v113 = 20;
LABEL_377:
          GreSetBkColor((HDC)a3);
          GreSetTextColor(v5);
          return *(_QWORD *)(gpsi + 8LL * v113 + 5088);
        case 0x138:
          goto LABEL_370;
        case 0x205:
          v114 = *((_WORD *)a1 + 66) + WORD1(a4);
          if ( (*((_BYTE *)a1 + 50) & 0x40) != 0 )
            v70 = (unsigned __int16)(*((_WORD *)a1 + 68) - a4) | (unsigned __int64)(v114 << 16);
          else
            v70 = (unsigned __int16)(a4 + *((_WORD *)a1 + 64)) | (v114 << 16);
          v69 = *(_QWORD *)a1;
          _InterlockedAdd(&glSendMessage, 1u);
LABEL_368:
          v82 = 123;
          goto LABEL_369;
      }
      if ( (_DWORD)a2 != 522 )
        return 0LL;
    }
    if ( (*((_BYTE *)a1 + 55) & 0xC0) != 0x40 )
      return 0LL;
    v118 = *((_QWORD *)a1 + 11);
    v150 = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = &v150;
    v151 = v118;
    ++*(_DWORD *)(v118 + 8);
    v58 = v6;
    goto LABEL_396;
  }
  if ( (unsigned int)a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3, a4);
    return 0LL;
  }
  if ( (unsigned int)a2 > 0x33 )
  {
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
        if ( (_DWORD)a2 == 77 )
        {
          if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
            v28 = *((unsigned __int16 *)a1 + 96);
          else
            v28 = 0;
          ContextHelpId = GetContextHelpId();
          xxxSendHelpMessage((_DWORD)v7, 1, v28, *(_QWORD *)v7, ContextHelpId);
          return 0LL;
        }
        if ( (_DWORD)a2 == 53 )
          return ((unsigned __int64)*((unsigned __int8 *)a1 + 40) >> 6) & 1;
        if ( (_DWORD)a2 != 59 )
        {
          switch ( (_DWORD)a2 )
          {
            case 'F':
              if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
                xxxAdjustSize((__int64)a1, (int *)(a4 + 24), (int *)(a4 + 28));
              break;
            case 'G':
              xxxHandleWindowPosChanged(a1);
              break;
            case 'I':
              return SfnCOPYGLOBALDATA(0LL, 0LL);
          }
          return 0LL;
        }
        LODWORD(result) = xxxClientShutdown(a1, a3);
        return (int)result;
      }
      if ( (_DWORD)a2 == 79 )
        return ValidateHwnd(a3) != 0;
      if ( (_DWORD)a2 != 80 )
      {
        if ( (_DWORD)a2 == 81 )
        {
          v34 = BuildHwndList(*((_QWORD *)a1 + 12), (struct tagWND *)2, 0LL);
          v38 = v34;
          if ( v34 )
          {
            v39 = (unsigned __int64 *)((char *)v34 + 32);
            v40 = *((_QWORD *)v34 + 4);
            if ( v40 != 1 )
            {
              do
              {
                LOBYTE(v35) = 1;
                v41 = HMValidateHandleNoSecure(v40, v35, v36, v37);
                if ( v41 )
                {
                  v156[0] = *(_QWORD *)(gptiCurrent + 368LL);
                  *(_QWORD *)(gptiCurrent + 368LL) = v156;
                  v156[1] = v41;
                  ++*(_DWORD *)(v41 + 8);
                  xxxSendMessage((struct tagWND *)v41, 0x51u, (unsigned __int64)v5, v4);
                  ThreadUnlock1(v43, v42);
                }
                v40 = *++v39;
              }
              while ( *v39 != 1 );
            }
            FreeHwndList(v38);
          }
          return 0LL;
        }
        if ( (_DWORD)a2 == 83 )
        {
          v30 = (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 ? *((_QWORD *)a1 + 11) : *((_QWORD *)a1 + 13);
          if ( v30 && v30 != GetThreadDesktopWindow(0LL) )
          {
            v153 = *(_QWORD *)(gptiCurrent + 368LL);
            *(_QWORD *)(gptiCurrent + 368LL) = &v153;
            v154 = v30;
            ++*(_DWORD *)(v30 + 8);
            _InterlockedAdd(&glSendMessage, 1u);
            v31 = xxxSendTransformableMessageTimeout(
                    (struct tagWND *)v30,
                    0x53u,
                    (unsigned __int64)v5,
                    v4,
                    0,
                    0,
                    0LL,
                    1,
                    1);
LABEL_457:
            v16 = v31;
            ThreadUnlock1(v33, v32);
            return v16;
          }
        }
        return 0LL;
      }
      v44 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 80LL);
      if ( !v44 || (struct tagWND *)v44 == a1 || *(_WORD *)(*((_QWORD *)a1 + 19) + 8LL) == *(_WORD *)(gpsi + 888LL) )
      {
        ProcessWindowStation = GetProcessWindowStation(0LL);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, v4, 256LL, v7) )
          UserSetLastError(1457LL);
        return 0LL;
      }
      v153 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v153;
      v154 = v44;
      ++*(_DWORD *)(v44 + 8);
      v45 = 80;
      v46 = (struct tagWND *)v44;
      goto LABEL_131;
    }
    if ( (_DWORD)a2 != 123 )
    {
      if ( (_DWORD)a2 == 127 )
        return DWP_GetIcon(a1, (unsigned int)a3);
      if ( (_DWORD)a2 == 128 )
        return (__int64)xxxDWP_SetIcon(a1, a3, (HICON)a4);
      if ( (_DWORD)a2 != 129 )
      {
        switch ( (_DWORD)a2 )
        {
          case 0x83:
            xxxCalcClientRect((__int64)a1, (__int128 *)a4, 0);
            return 0LL;
          case 0x84:
            LODWORD(result) = FindNCHit(a1, (unsigned int)a4);
            return (int)result;
          case 0x85:
            SetOrClrWF(1LL, a1, 384LL, 1LL);
            v50 = _GetDCEx(v7, v5, 328833LL);
            v51 = v50;
            v52 = 0;
            if ( v50 )
            {
              if ( (*((_BYTE *)v7 + 40) & 0x40) != 0 )
                v52 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 384LL) == gpqForeground;
              xxxDrawWindowFrame(v7, v50, v52);
              _ReleaseDC(v51);
            }
            SetOrClrWF(0LL, v7, 384LL, 1LL);
            return 0LL;
        }
        if ( (_DWORD)a2 != 134 )
        {
          if ( (_DWORD)a2 == 136 )
          {
            SetOrClrWF(0LL, a1, 640LL, 1LL);
            xxxInternalDoSyncPaint((__int64)v7, (unsigned int)v5, v48, v49);
          }
          return 0LL;
        }
        xxxDWP_DoNCActivate(a1);
        return 1LL;
      }
      if ( (*((_BYTE *)a1 + 54) & 0x30) != 0 && !InitPwSB() )
        return 0LL;
      if ( v4 )
      {
        v53 = (_DWORD *)(v4 + 80);
        if ( !*((_QWORD *)v7 + 3) || v4 == -80 || (v54 = *(_BYTE **)(v4 + 88)) == 0LL )
        {
          *((_DWORD *)v7 + 54) = 0;
          return 1LL;
        }
        if ( *(int *)(v4 + 84) >= 0 )
          goto LABEL_167;
        if ( *v53 && *v54 == 0xFF )
          return 1LL;
        if ( *(int *)(v4 + 84) >= 0 )
        {
LABEL_167:
          if ( *v53 >= 2u && *(_WORD *)v54 == 0xFFFF )
            return 1LL;
        }
      }
      SetOrClrWF(1LL, v7, 514LL, 1LL);
      LODWORD(result) = DefSetText((__int64)v7, (const CHAR **)(v4 + 80), v55);
      return (int)result;
    }
    v56 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v56 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL), (__int64)v7) )
        xxxDoScrollMenu(v7, 0LL, v59 - 6);
      return 0LL;
    }
    if ( (*((_BYTE *)v7 + 55) & 0xC0) == 0x40 )
    {
      v57 = *((_QWORD *)v7 + 11);
      v150 = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = &v150;
      v151 = v57;
      ++*(_DWORD *)(v57 + 8);
      a3 = *(_QWORD *)v7;
      a4 = v4;
      v58 = 123;
LABEL_396:
      v119 = (struct tagWND *)*((_QWORD *)v7 + 11);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v119, v58, a3, a4, 0, 0, 0LL, 1, 1);
      goto LABEL_397;
    }
    if ( v7 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 88LL) )
      return 0LL;
    if ( v56 != 2 )
    {
      if ( v56 != 3 )
      {
        if ( v4 == -1 && (*((_BYTE *)v7 + 45) & 2) == 0 )
          xxxSimulateShiftF10();
        return 0LL;
      }
      goto LABEL_223;
    }
LABEL_412:
    v68 = (*((_BYTE *)v7 + 55) & 0x21) != 0 ? 61728 : 61488;
LABEL_413:
    SysMenu = xxxGetSysMenu(v7, 1LL);
    v121 = SysMenu;
    if ( !SysMenu )
      return 0LL;
    SetMenuDefaultItem(SysMenu, v68, 0LL);
    PostShellHookMessagesEx(9uLL, *(_QWORD *)v7, 0LL);
    v157[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v157;
    v157[1] = v121;
    ++*(_DWORD *)(v121 + 8);
    if ( v4 != 0xFFFFFFFFLL )
    {
      xxxTrackPopupMenuEx(v121, 514LL, (unsigned int)(__int16)v4, (unsigned int)SWORD1(v4), v7, 0LL);
      goto LABEL_397;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v123, v122, v124) & 0xF) != 0 )
        goto LABEL_425;
    }
    else if ( !IsDPIDWMSysMet(v123)
           || (W32GetCurrentThreadDpiAwarenessContext(v126, v125, v127) & 0xF) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 408)
             ? (v133 = 0)
             : (v133 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                             (__int64)KeGetCurrentThread(),
                                                             v18,
                                                             v131,
                                                             v132)
                                                         + 408)
                                             + 8LL)
                                 + 244LL) & 1),
               !v133) )
    {
LABEL_425:
      if ( IsDPIDWMSysMet(0x38uLL)
        && (W32GetCurrentThreadDpiAwarenessContext(v134, v18, v135) & 0xF) == 1
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v136, v137) + 408)
          ? (v140 = 0)
          : (v140 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                          (__int64)KeGetCurrentThread(),
                                                          v18,
                                                          v138,
                                                          v139)
                                                      + 408)
                                          + 8LL)
                              + 244LL) & 1),
            v140) )
      {
        v19 = (_DWORD *)(gpsi + 2880LL);
      }
      else
      {
        v19 = (_DWORD *)(gpsi + 2104LL);
      }
LABEL_433:
      if ( (*v19 & 8) != 0 )
      {
        v160 = 0LL;
        v161 = 0;
        v159 = 20LL;
        if ( (unsigned int)xxxSendMinRectMessages(v7, (char *)&v159 + 4) )
          xxxTrackPopupMenuEx(v121, 576LL, HIDWORD(v159), (unsigned int)v160, v7, &v159);
      }
      goto LABEL_397;
    }
    v19 = (_DWORD *)(gpsi + 2492LL);
    goto LABEL_433;
  }
  if ( (_DWORD)a2 == 51 )
  {
    v26 = HotKeyHelper(a1);
    v27 = 0;
    if ( *v26 )
      return *((int *)*v26 + 2);
    return v27;
  }
  if ( (unsigned int)a2 > 0x18 )
  {
    if ( (unsigned int)a2 > 0x26 )
    {
      if ( (_DWORD)a2 == 39 )
      {
LABEL_87:
        LODWORD(result) = xxxDWP_EraseBkgnd();
        return (int)result;
      }
      if ( (_DWORD)a2 == 43 )
      {
        if ( *(_DWORD *)a4 == 2 )
        {
          v25 = *(_DWORD *)(a4 + 12);
          if ( v25 == 4 || v25 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
            ClientFrame(*(HDC *)(a4 + 32));
        }
        return 0LL;
      }
      if ( (unsigned int)a2 <= 0x2D )
        return 0LL;
      if ( (unsigned int)a2 <= 0x2F )
        return -1LL;
      if ( (_DWORD)a2 != 50 )
        return 0LL;
      LODWORD(result) = DWP_SetHotKey(a1);
      return (int)result;
    }
    if ( (_DWORD)a2 == 38 )
      goto LABEL_74;
    if ( (_DWORD)a2 != 25 )
    {
      if ( (_DWORD)a2 == 31 )
      {
        xxxDWP_DoCancelMode(a1);
        return 0LL;
      }
      if ( (_DWORD)a2 != 32 )
      {
        if ( (_DWORD)a2 != 33 )
          return 0LL;
        if ( (*((_BYTE *)a1 + 55) & 0xC0) == 0x40 )
          v21 = *((_QWORD *)a1 + 11);
        else
          v21 = 0LL;
        if ( !v21
          || (v153 = *(_QWORD *)(gptiCurrent + 368LL),
              *(_QWORD *)(gptiCurrent + 368LL) = &v153,
              v154 = v21,
              ++*(_DWORD *)(v21 + 8),
              v16 = xxxSendMessage((struct tagWND *)v21, 0x21u, a3, a4),
              ThreadUnlock1(v23, v22),
              !v16) )
        {
          if ( (_DWORD)v4 == 33619970 )
            return 3;
          else
            return 1;
        }
        return v16;
      }
      LODWORD(result) = xxxDWP_SetCursor(a1, (_QWORD *)a3, (unsigned int)(__int16)a4, WORD1(a4));
      return (int)result;
    }
    goto LABEL_372;
  }
  if ( (_DWORD)a2 == 24 )
  {
    if ( !(_WORD)a4 )
      return 0LL;
    v20 = *((_BYTE *)a1 + 55);
    if ( (((v20 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)v7 + 13) )
      return 0LL;
    if ( a3 )
    {
      if ( (v20 & 0x10) != 0 || (*((_BYTE *)v7 + 41) & 0x40) == 0 )
        return 0LL;
    }
    else if ( (v20 & 0x10) == 0 )
    {
      return 0LL;
    }
    SetOrClrWF(0LL, v7, 320LL, 1LL);
    if ( !v5 )
      SetOrClrWF(1LL, v7, 320LL, 1LL);
    xxxShowWindowEx(v7);
    return 0LL;
  }
  if ( (unsigned int)a2 > 0xF )
  {
    if ( (_DWORD)a2 == 16 )
    {
      xxxDestroyWindow(a1);
      return 0LL;
    }
    if ( (_DWORD)a2 != 17 && (_DWORD)a2 != 19 )
    {
      if ( (_DWORD)a2 != 20 )
        return 0LL;
      goto LABEL_87;
    }
    return 1LL;
  }
  switch ( (_DWORD)a2 )
  {
    case 0xF:
LABEL_74:
      xxxDWP_Paint(a1);
      return 0LL;
    case 6:
      if ( a3 )
      {
        CoreWindowProp::GetFocusDirection();
        xxxSetFocus(v7);
      }
      if ( *((char *)v7 + 290) >= 0 )
        return 0LL;
      v17 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1256LL);
      if ( !v17 )
        return 0LL;
      v155[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v155;
      v155[1] = v17;
      ++*(_DWORD *)(v17 + 8);
      xxxSendNotifyMessage(v17, 841LL, v5, 0LL, 0);
      goto LABEL_397;
    case 0xB:
      xxxDWP_SetRedraw(a1, a3 != 0);
      return 0LL;
    case 0xC:
      v15 = DefSetText((__int64)a1, (const CHAR **)a4, a3);
      v16 = v15;
      if ( v15 )
      {
        xxxRedrawTitle(v7, 8LL);
        xxxWindowEvent(32780, (_DWORD)v7, 0, 0, 0);
      }
      return v16;
  }
  if ( (_DWORD)a2 != 13 )
  {
    if ( (_DWORD)a2 == 14 )
    {
      v8 = *((_DWORD *)a1 + 54);
      if ( v8 )
      {
        if ( !a4 )
          return v8 >> 1;
        RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 28), v8);
        return BytesInMultiByteString;
      }
    }
    return 0LL;
  }
  if ( !a3 )
    return 0LL;
  if ( *((_QWORD *)a1 + 28) )
    DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)a1 + 216);
  v10 = *((_DWORD *)v7 + 54);
  v11 = *(_DWORD *)(v4 + 4);
  if ( !v10 )
  {
    v13 = v11 < 0;
    v14 = *(_BYTE **)(v4 + 8);
    if ( v13 )
      *v14 = 0;
    else
      *(_WORD *)v14 = 0;
    return 0LL;
  }
  if ( v11 >= 0 )
  {
    v12 = TextCopy((__int64)v7 + 216, *(void **)(v4 + 8), (int)v5);
    *(_DWORD *)v4 = 2 * v12;
  }
  else
  {
    v12 = WCSToMBEx(0LL, *((_QWORD *)v7 + 28), v10 >> 1, v4 + 8, (v11 & 0x7FFFFFFFu) - 1);
    *(_BYTE *)(v12 + *(_QWORD *)(v4 + 8)) = 0;
    *(_DWORD *)v4 = v12;
  }
  return v12;
}
