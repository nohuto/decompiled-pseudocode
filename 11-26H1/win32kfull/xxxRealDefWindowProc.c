/*
 * XREFs of xxxRealDefWindowProc @ 0x14012F36C
 * Callers:
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x14012F170 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     xxxGetSysMenu @ 0x14000D5F8 (xxxGetSysMenu.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ @ 0x14000F15C (--1-$Win32HMThreadLockAlways@UtagACCELTABLE@@@@QEAA@XZ.c)
 *     _SetMenuDefaultItem @ 0x14000F3B0 (_SetMenuDefaultItem.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x14000FBF8 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     PostShellHookMessagesEx @ 0x1400101EC (PostShellHookMessagesEx.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     IsImmersiveApplicationBandId @ 0x1400112F8 (IsImmersiveApplicationBandId.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x140012F10 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     xxxSleepThread2 @ 0x140022590 (xxxSleepThread2.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x140027C40 (GreSetBkColor.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxCalcClientRect @ 0x1400333BC (xxxCalcClientRect.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxDWP_UpdateUIState @ 0x140041D68 (xxxDWP_UpdateUIState.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     DWP_SetHotKey @ 0x1400446DC (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x140044848 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetDesktopWindow @ 0x140048600 (_GetDesktopWindow.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x14004B8A4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??0?$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x14004D19C (--0-$Win32HMOptionalThreadLock@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxInternalDoSyncPaint @ 0x14004FFD0 (xxxInternalDoSyncPaint.c)
 *     BuildHwndList @ 0x1400510F0 (BuildHwndList.c)
 *     FreeHwndList @ 0x140051630 (FreeHwndList.c)
 *     xxxDefPointerProc @ 0x140053A6C (xxxDefPointerProc.c)
 *     xxxInternalGetMessage @ 0x140057C40 (xxxInternalGetMessage.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x14008C1D8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x14009449C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x140121918 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x140122F88 (xxxDrawCaptionBar.c)
 *     xxxDWP_EraseBkgnd @ 0x1401277E8 (xxxDWP_EraseBkgnd.c)
 *     WCSToMBEx @ 0x140129570 (WCSToMBEx.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x14012A0D0 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??0?$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z @ 0x14012A784 (--0-$Win32HMThreadLockAlways@UtagHOOK@@@@QEAA@PEAUtagTHREADINFO@@PEAUtagHOOK@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DefSetText @ 0x14012D150 (DefSetText.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x14012D58C (DesktopVerifyHeapLargeUnicodeString.c)
 *     _IsDescendant @ 0x14012EA64 (_IsDescendant.c)
 *     ?IsInsideUserApiHook@@YAHXZ @ 0x14012ED78 (-IsInsideUserApiHook@@YAHXZ.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x14012EFF0 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z @ 0x14012F08C (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@I@Z.c)
 *     xxxReleaseCapture @ 0x14014AA5C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x14014AB08 (xxxSetCapture.c)
 *     xxxGetTitleBarInfoEx @ 0x14014C0C0 (xxxGetTitleBarInfoEx.c)
 *     xxxTrackPopupMenuEx @ 0x140177014 (xxxTrackPopupMenuEx.c)
 *     xxxDrawMenuBarUnderlines @ 0x14017819C (xxxDrawMenuBarUnderlines.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     _InitPwSB @ 0x14018FBCC (_InitPwSB.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A37C0 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     xxxMessageBeep @ 0x1401B1154 (xxxMessageBeep.c)
 *     _GetProcessWindowStation @ 0x1401BC230 (_GetProcessWindowStation.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1401BEFD8 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     xxxAdjustSize @ 0x1401C5D84 (xxxAdjustSize.c)
 *     TextCopy @ 0x1401C77D0 (TextCopy.c)
 *     xxxSendHelpMessage @ 0x1401C7838 (xxxSendHelpMessage.c)
 *     xxxClientShutdown @ 0x1401C7E58 (xxxClientShutdown.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     DWP_GetIcon @ 0x1401F66E0 (DWP_GetIcon.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PEAUtagTHREADINFO@@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x140208238 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@PE.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ??$?0VSmartObjStackRef@@@?$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x14021D83C (--$-0VSmartObjStackRef@@@-$Win32HMThreadLockAlways@UtagMENU@@@@QEAA@AEAV-$SmartObjStackRef@UtagM.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleWindowPosChanged @ 0x140224344 (xxxHandleWindowPosChanged.c)
 *     WPP_RECORDER_AND_TRACE_SF_qDll @ 0x14022487C (WPP_RECORDER_AND_TRACE_SF_qDll.c)
 *     MNClearCachedPopupSizes @ 0x140235800 (MNClearCachedPopupSizes.c)
 *     ?UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ @ 0x14023EF80 (-UserModeSupportsUserModeScrollBars@NonClient@Scrollbar@@YA_NXZ.c)
 *     SfnCOPYGLOBALDATA @ 0x1402458F0 (SfnCOPYGLOBALDATA.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x140247D80 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??$?0VSharedUserObjPointerFieldspwndParent@tagWND@@@?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@@Z @ 0x140256424 (--$-0VSharedUserObjPointerFieldspwndParent@tagWND@@@-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@AE.c)
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     GetContextHelpId @ 0x140260160 (GetContextHelpId.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline @ 0x14028C1E4 (Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxLoadUserApiHook @ 0x140292FB4 (xxxLoadUserApiHook.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x1402A1AA8 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     xxxClientDoScrollMenu @ 0x1402D7CD0 (xxxClientDoScrollMenu.c)
 *     xxxClientInitPSBInfo @ 0x1402D84DC (xxxClientInitPSBInfo.c)
 *     ?xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402E1990 (-xxxCloseApplication@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDoScrollMenu @ 0x1402F8250 (xxxDoScrollMenu.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  ULONG v14; // ecx
  ULONG v15; // ecx
  unsigned __int64 v16; // rbx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v18; // r8d
  int v19; // eax
  signed int v20; // eax
  signed int v21; // esi
  struct _LARGE_UNICODE_STRING *v22; // rax
  _WORD *v24; // rax
  int v25; // eax
  __int64 v26; // rax
  struct tagWND *v27; // rbx
  ULONG_PTR *v28; // rcx
  __int64 v29; // rdx
  char v30; // cl
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rax
  int TitleBarInfo; // eax
  struct tagTHREADINFO **v35; // rbx
  ULONG_PTR *v36; // rcx
  unsigned int v37; // esi
  unsigned int v38; // esi
  unsigned int v39; // esi
  unsigned int v40; // esi
  struct tagWND ***v41; // rax
  int v42; // edi
  __int64 v43; // rdi
  int v44; // eax
  unsigned int v45; // esi
  unsigned int v46; // esi
  unsigned int v47; // esi
  unsigned int v48; // esi
  int ContextHelpId; // eax
  __int64 v50; // rdi
  int v51; // edi
  HICON Icon; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  struct tagWND *v55; // rsi
  __int64 v56; // rbx
  unsigned __int64 v57; // r8
  __int64 v58; // rdx
  struct tagTHREADINFO **v59; // rcx
  unsigned int v60; // esi
  __int64 v61; // rcx
  struct tagTHREADINFO *v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rcx
  struct tagTHREADINFO *v66; // rax
  __int64 ProcessWindowStation; // rax
  int NCHit; // esi
  __int64 v69; // rcx
  char *v70; // r13
  __int64 v71; // rcx
  struct tagTHREADINFO *v72; // rax
  Scrollbar::NonClient *v73; // rcx
  __int64 v74; // rdx
  struct tagTHREADINFO ***v75; // rbx
  struct tagTHREADINFO **v76; // rbx
  __int64 v77; // rax
  struct tagBWL *v78; // rax
  __int64 v79; // rdx
  struct tagBWL *v80; // r14
  __int64 *v81; // rbx
  __int64 v82; // rcx
  ULONG_PTR v83; // rax
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // esi
  unsigned int v87; // esi
  __int64 v88; // r15
  __int64 v89; // rdx
  __int64 v90; // rbx
  BOOL v91; // edi
  __int64 v92; // rcx
  char v93; // si
  __int64 v94; // rax
  int v95; // r8d
  int v96; // edx
  Scrollbar::NonClient *v97; // rcx
  int inited; // eax
  struct tagTHREADINFO *v99; // rsi
  int v100; // eax
  int v101; // esi
  int v102; // eax
  unsigned int v103; // ebx
  unsigned __int64 v104; // r9
  __int16 v105; // r12
  struct tagTHREADINFO *v106; // rax
  __int64 v107; // rcx
  struct tagTHREADINFO *v108; // rbx
  unsigned __int64 v109; // r12
  int v110; // eax
  struct tagTHREADINFO *v111; // rax
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  int v114; // r9d
  int v115; // r8d
  int v116; // edx
  int v117; // ecx
  struct tagTHREADINFO *v118; // rax
  Gre::Base *DCEx; // rbx
  struct tagTHREADINFO *v120; // rax
  __int64 v121; // rbx
  int v122; // eax
  struct tagTHREADINFO **NonChildAncestor; // rsi
  __int64 v124; // rcx
  struct tagWND *v125; // rbx
  __int64 v126; // rsi
  int v127; // ebx
  __int64 v128; // rcx
  const struct tagUIPI_INFO *v129; // r8
  ULONG_PTR *v130; // rdx
  bool v131; // al
  BOOL v132; // ebx
  struct tagTHREADINFO *v133; // r15
  unsigned __int64 v134; // r8
  __int64 v135; // r8
  __int64 *v136; // r8
  const struct tagWND *v137; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rax
  __int64 v142; // rbx
  unsigned int v143; // esi
  unsigned int v144; // esi
  unsigned int v145; // esi
  unsigned int v146; // esi
  __int64 v147; // rdi
  __int64 v148; // rbx
  __int64 v149; // rsi
  unsigned int v150; // ebx
  __int64 updated; // rax
  ULONG v152; // r15d
  __int16 v153; // r12
  __int64 v154; // rdx
  _DWORD *v155; // rcx
  __int64 v156; // rdx
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int64 v160; // r8
  __int64 v161; // rdx
  _DWORD *v162; // rcx
  __int64 v163; // rdx
  __int64 v164; // rcx
  int v165; // edx
  unsigned int v166; // esi
  unsigned int v167; // esi
  unsigned int v168; // esi
  __int64 v169; // rcx
  int v170; // ebx
  __int64 v171; // rdx
  __int64 v172; // rcx
  int v173; // ebx
  __int64 v174; // rdx
  __int64 UserSessionState; // rax
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // rax
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rdx
  unsigned __int16 v188; // cx
  __int64 v189; // r9
  unsigned __int64 v190; // rax
  __int64 v191; // rdx
  unsigned __int16 v192; // r12
  struct tagTHREADINFO *v193; // rax
  __int64 v194; // rcx
  __int64 SysMenu; // rax
  __int64 v196; // rdx
  __int64 v197; // rcx
  __int64 v198; // rcx
  __int64 v199; // rcx
  __int64 v200; // rdx
  __int64 v201; // rcx
  unsigned int v202; // esi
  unsigned int v203; // esi
  unsigned int v204; // esi
  __int64 v205; // rax
  __int64 v206; // rax
  __int64 v207; // rcx
  __int64 v208; // rcx
  int v209; // ebx
  __int64 v210; // rcx
  unsigned __int64 v211; // [rsp+20h] [rbp-138h]
  ULONG v212; // [rsp+28h] [rbp-130h]
  int v213; // [rsp+40h] [rbp-118h]
  bool v214; // [rsp+60h] [rbp-F8h]
  ULONG BytesInMultiByteString; // [rsp+64h] [rbp-F4h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-F0h] BYREF
  __int64 v217[2]; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v218; // [rsp+88h] [rbp-D0h]
  ULONG_PTR v219[2]; // [rsp+90h] [rbp-C8h] BYREF
  _OWORD v220[2]; // [rsp+A0h] [rbp-B8h] BYREF
  __int128 v221; // [rsp+C0h] [rbp-98h]
  _BYTE v222[16]; // [rsp+D8h] [rbp-80h] BYREF
  ULONG_PTR v223; // [rsp+E8h] [rbp-70h] BYREF
  int v224; // [rsp+F0h] [rbp-68h]
  _DWORD v225[6]; // [rsp+F8h] [rbp-60h] BYREF

  BugCheckParameter3[0] = (ULONG_PTR)a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v217);
  if ( a1 == (struct tagWND *)-1LL || a2 > 0x400 )
    goto LABEL_465;
  if ( a2 > 0xAC )
  {
    if ( a2 > 0x205 )
    {
      if ( a2 > 0x245 )
      {
        if ( a2 > 0x317 )
        {
          v202 = a2 - 793;
          if ( v202 )
          {
            v203 = v202 - 2;
            if ( v203 )
            {
              v204 = v203 - 36;
              if ( v204 )
              {
                if ( v204 == 10 && a3 )
                {
                  v205 = *((_QWORD *)a1 + 13);
                  v206 = v205 ? *(_QWORD *)(v205 + 16) : 0LL;
                  if ( v206 && *(struct tagWND **)(v206 + 1592) == a1 )
                    xxxSetFocus(a1);
                }
                goto LABEL_465;
              }
              TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
            }
            else
            {
              if ( !IsInsideUserApiHook(v9, v8)
                || (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent(v207) + 130, 0, 0) & 1) != 0 )
              {
                goto LABEL_465;
              }
              TitleBarInfo = xxxLoadUserApiHook();
            }
            goto LABEL_455;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
          {
            if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1) )
            {
              v209 = *((_DWORD *)PtiCurrent(v208) + 178);
              if ( ((*(_DWORD *)(**((_QWORD **)PtiCurrent(v210) + 62) + 16LL) | v209) & 0x800) == 0
                || !(unsigned int)xxxCallHook(12LL, a3, a4, 10) )
              {
                PostShellHookMessagesEx((LastWokenThread *)0xC, a4);
              }
            }
            goto LABEL_465;
          }
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v225, (char *)a1 + 104);
          v77 = xxxSendTransformableMessageTimeout(
                  *((struct tagTHREADINFO ***)a1 + 13),
                  793LL,
                  a3,
                  a4,
                  0,
                  0,
                  0LL,
                  1u,
                  1);
          v36 = (ULONG_PTR *)v225;
          goto LABEL_459;
        }
        if ( a2 == 791 )
        {
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
          goto LABEL_455;
        }
        if ( a2 != 582 && a2 != 583 && a2 != 590 && a2 != 591 )
        {
          if ( a2 != 787 )
            goto LABEL_465;
          v70 = (char *)a1 + 40;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
            || *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) != *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928)
            && !(unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL, 0LL) )
          {
            goto LABEL_465;
          }
          goto LABEL_425;
        }
      }
      else if ( a2 != 581 )
      {
        if ( a2 <= 0x22A )
        {
          if ( a2 == 554 )
          {
            v43 = 1162627398LL;
            goto LABEL_414;
          }
          if ( a2 != 522 )
          {
            if ( a2 == 524 )
            {
LABEL_228:
              v105 = 0;
              if ( WORD1(a3) == 1 )
              {
                v105 = 1;
              }
              else if ( WORD1(a3) == 2 )
              {
                v105 = 2;
LABEL_396:
                v192 = v105 | 0x8000;
                if ( a2 != 524 )
                {
                  v193 = PtiCurrent((unsigned int)WORD1(a3) - 1);
                  LOWORD(a3) = GetMouseKeyFlags(*((_QWORD *)v193 + 58));
                }
                v104 = (unsigned __int16)a3 | ((unsigned __int64)v192 << 16);
                v213 = 1;
                v191 = 793LL;
                goto LABEL_384;
              }
              if ( !v105 )
                goto LABEL_465;
              goto LABEL_396;
            }
            if ( a2 != 526 )
            {
              if ( a2 - 536 > 1 )
                goto LABEL_465;
              goto LABEL_393;
            }
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_465;
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v219, (char *)a1 + 104);
          v134 = a3;
LABEL_401:
          xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), a2, v134, a4, 0, 0, 0LL, 1u, 1);
          v28 = v219;
          goto LABEL_402;
        }
        if ( a2 == 555 )
        {
          v43 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL) >> 4) & 1;
          goto LABEL_414;
        }
        if ( a2 == 576 )
        {
          if ( *((_QWORD *)PtiCurrent(v9) + 149) == a4 )
            *((_QWORD *)PtiCurrent(v194) + 149) = 0LL;
          FreeTouchInputInfo(a4, 1LL);
          goto LABEL_465;
        }
        if ( a2 != 577 && a2 - 578 > 1 )
          goto LABEL_465;
      }
      updated = xxxDefPointerProc(v9, a2, a3, 0LL);
      goto LABEL_409;
    }
    if ( a2 == 517 )
    {
      v187 = *((_QWORD *)a1 + 5);
      v188 = *(_WORD *)(v187 + 108) + WORD1(a4);
      if ( (*(_BYTE *)(v187 + 26) & 0x40) != 0 )
      {
        v189 = (unsigned __int16)(*(_WORD *)(v187 + 112) - a4);
        v190 = (unsigned __int64)v188 << 16;
      }
      else
      {
        v189 = v188 << 16;
        v190 = (unsigned __int16)(*(_WORD *)(v187 + 104) + a4);
      }
      v104 = v190 | v189;
LABEL_382:
      v213 = 0;
LABEL_383:
      v191 = 123LL;
LABEL_384:
      xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, v191, *(_QWORD *)a1, v104, 0, 0, 0LL, 1u, v213);
      goto LABEL_465;
    }
    if ( a2 <= 0x11C )
    {
      if ( a2 == 284 )
        goto LABEL_465;
      if ( a2 <= 0x105 )
      {
        switch ( a2 )
        {
          case 0x105u:
            goto LABEL_264;
          case 0xAEu:
            DCEx = (Gre::Base *)_GetDCEx(a1, 0LL, 65537LL);
            xxxDrawCaptionBar(a1, DCEx, a3);
            _ReleaseDC(DCEx);
            goto LABEL_465;
          case 0xAFu:
            xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
            goto LABEL_465;
        }
        if ( a2 != 256 )
        {
          v9 = a2 - 257;
          if ( a2 != 257 )
          {
            if ( a2 != 260 )
              goto LABEL_465;
            v106 = PtiCurrent(v9);
            v108 = v106;
            v109 = a4 >> 16;
            if ( (v109 & 0x2000) != 0 )
            {
              if ( (v109 & 0x4000) == 0 )
              {
                if ( a3 != 18 || (v107 = *((_QWORD *)v106 + 58), v110 = *(_DWORD *)(v107 + 436), (v110 & 8) != 0) )
                {
                  *(_DWORD *)(*((_QWORD *)v108 + 58) + 436LL) &= 0xFFFFFFF3;
                }
                else
                {
                  *(_DWORD *)(v107 + 436) = v110 | 8;
                  xxxDrawMenuBarUnderlines(a1, 1LL);
                }
              }
              *(_DWORD *)(*((_QWORD *)v108 + 58) + 436LL) &= ~0x10u;
              v111 = PtiCurrent(v107);
              if ( *(_QWORD *)(*((_QWORD *)v111 + 58) + 128LL) && (_DWORD)a3 == 115 )
                xxxCloseApplication(v111);
              goto LABEL_465;
            }
            if ( a3 != 121 )
              goto LABEL_465;
            *(_DWORD *)(*((_QWORD *)v106 + 58) + 436LL) |= 0x10u;
            goto LABEL_260;
          }
LABEL_264:
          v120 = PtiCurrent(v9);
          v121 = (__int64)v120;
          if ( a3 == 18
            && (v122 = *(_DWORD *)(*((_QWORD *)v120 + 58) + 436LL), (v122 & 0x80u) == 0)
            && (v122 & 0xC) == 8
            || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(v121 + 464) + 436LL) & 0x10) != 0 )
          {
            NonChildAncestor = (struct tagTHREADINFO **)GetNonChildAncestor(a1);
            Win32HMOptionalThreadLock<tagWND>::Win32HMOptionalThreadLock<tagWND>(
              BugCheckParameter3,
              v121,
              (__int64)NonChildAncestor);
            if ( a3 == 121 )
              xxxDrawMenuBarUnderlines(a1, 1LL);
            xxxSendTransformableMessageTimeout(NonChildAncestor, 274LL, 0xF100uLL, 0LL, 0, 0, 0LL, 1u, 0);
            Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          }
          if ( a3 == 18 )
          {
            *(_DWORD *)(*(_QWORD *)(v121 + 464) + 436LL) &= ~0x80u;
            xxxDrawMenuBarUnderlines(a1, 0LL);
          }
          *(_DWORD *)(*(_QWORD *)(v121 + 464) + 436LL) &= 0xFFFFFFE3;
          goto LABEL_465;
        }
        if ( a3 != 27 )
        {
          if ( a3 != 121 )
            goto LABEL_465;
          v118 = PtiCurrent(a2 - 256);
          *(_DWORD *)(*((_QWORD *)v118 + 58) + 436LL) |= 0x10u;
LABEL_260:
          if ( (_GetKeyState(16LL) & 0x8000u) == 0LL )
            goto LABEL_465;
          v104 = -1LL;
          goto LABEL_382;
        }
        if ( !(unsigned int)CoreWindowProp::IsComponent(a1, v8) )
          goto LABEL_465;
        Host = CoreWindowProp::GetHost(a1);
        if ( !Host )
          goto LABEL_465;
        TopLevelWindow = GetTopLevelWindow((__int64)Host);
        if ( !TopLevelWindow )
          goto LABEL_465;
        v114 = a4;
        v115 = 27;
        v116 = a2;
        v117 = TopLevelWindow;
LABEL_303:
        PostMessage(v117, v116, v115, v114);
        goto LABEL_465;
      }
      if ( a2 != 262 )
      {
        if ( a2 != 265 )
        {
          if ( a2 == 274 )
          {
            xxxSysCommand(a1);
            goto LABEL_465;
          }
          v124 = a2 - 281;
          if ( a2 == 281 )
          {
            LODWORD(v124) = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0;
            if ( (_BYTE)v124 != 64 )
              goto LABEL_465;
            v125 = (struct tagWND *)*((_QWORD *)a1 + 13);
            v126 = *(_QWORD *)(*((_QWORD *)v125 + 2) + 456LL);
            BugCheckParameter3[0] = *((_QWORD *)PtiCurrent(v124) + 57);
            if ( v126 != BugCheckParameter3[0] )
            {
              v127 = IsMessageAllowedAcrossILByReceiver((struct tagPROCESSINFO *)v126, v125, 0x119u);
              if ( !v127 )
                v127 = IsMessageAlwaysAllowedAcrossIL(0x119u);
              if ( !v127 )
              {
                if ( (unsigned int)Feature_MsgUseCSRSSTrueIL__private_IsEnabledDeviceUsageNoInline() )
                {
                  v130 = (ULONG_PTR *)(v126 + 864);
                }
                else
                {
                  if ( *(_QWORD *)v126 == *(_QWORD *)(W32GetUserGdiSessionState(v128) + 40) )
                  {
                    v223 = 0x2000LL;
                    v224 = 0;
                  }
                  else
                  {
                    v223 = *(_QWORD *)(v126 + 864);
                    v224 = *(_DWORD *)(v126 + 872);
                  }
                  v130 = &v223;
                }
                v131 = UIPrivilegeIsolation::CheckAccess(
                         (UIPrivilegeIsolation *)(BugCheckParameter3[0] + 864),
                         (const struct tagUIPI_INFO *)v130,
                         v129);
                v132 = v131;
                if ( !v131 )
                {
                  EtwTraceUIPIMsgError(BugCheckParameter3[0], v126, 281LL, a3, a4);
                  UserSetLastError(v132 + 5);
                  if ( !v132 )
                    goto LABEL_465;
                }
              }
            }
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v219, (char *)a1 + 104);
            v77 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    281LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1u,
                    1);
            v36 = v219;
          }
          else
          {
            if ( a2 != 282 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
              goto LABEL_465;
            Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v222, (char *)a1 + 104);
            v77 = xxxSendTransformableMessageTimeout(
                    *((struct tagTHREADINFO ***)a1 + 13),
                    282LL,
                    a3,
                    a4,
                    0,
                    0,
                    0LL,
                    1u,
                    1);
            v36 = (ULONG_PTR *)v222;
          }
          goto LABEL_459;
        }
        if ( a3 == 0xFFFF )
          goto LABEL_465;
        v114 = a4;
        v115 = a3;
        v116 = 258;
        goto LABEL_302;
      }
      v133 = PtiCurrent(a2 - 262);
      *(_DWORD *)(*((_QWORD *)v133 + 58) + 436LL) &= 0xFFFFFFF3;
      if ( a3 == 13 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
      {
        v114 = 0;
        v116 = 274;
        v115 = 61728;
LABEL_302:
        v117 = (int)a1;
        goto LABEL_303;
      }
      if ( (a4 & 0x20000000) == 0 || !a3 )
      {
        if ( a3 != 27 )
          xxxMessageBeep(0LL);
        goto LABEL_465;
      }
      if ( a3 == 9 || a3 == 27 )
        goto LABEL_465;
      if ( a3 == 32 )
      {
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v219, v133, (char *)a1 + 104);
          v134 = 32LL;
          goto LABEL_401;
        }
        v135 = *(_QWORD *)(*((_QWORD *)v133 + 58) + 128LL);
        if ( v135 && (unsigned int)IsImmersiveApplicationBandId(*(_DWORD *)(*(_QWORD *)(v135 + 40) + 236LL)) )
        {
          PostIAMShellHookMessage(0x21u, *v136);
          goto LABEL_465;
        }
        v137 = *(const struct tagWND **)(*((_QWORD *)v133 + 58) + 128LL);
        if ( v137 && (*((_DWORD *)v137 + 95) & 0x40000000) != 0 )
        {
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v137);
          if ( (unsigned int)CoreWindowProp::IsComponent(
                               *(const struct tagWND **)(*((_QWORD *)v133 + 58) + 128LL),
                               v139) )
            CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(
                                              *(const struct tagWND **)(*((_QWORD *)v133 + 58) + 128LL),
                                              v140);
          if ( CompositionInputWindowUIOwner )
          {
            v141 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
            v142 = v141;
            if ( v141 )
            {
              Win32HMThreadLockAlways<tagHOOK>::Win32HMThreadLockAlways<tagHOOK>(
                BugCheckParameter3,
                (__int64)v133,
                v141);
              xxxForceForegroundWindowNoRestoreFocus(v142, 0LL);
              if ( Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(BugCheckParameter3) )
                PostMessage(v142, 274, 61696, 32);
              Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(BugCheckParameter3);
            }
          }
          goto LABEL_465;
        }
      }
      xxxSendTransformableMessageTimeout(
        (struct tagTHREADINFO **)a1,
        274LL,
        0xF100uLL,
        (unsigned int)a3,
        0,
        0,
        0LL,
        1u,
        0);
      goto LABEL_465;
    }
    if ( a2 > 0x134 )
    {
      v166 = a2 - 309;
      if ( v166 )
      {
        v167 = v166 - 1;
        if ( !v167 )
          goto LABEL_369;
        v168 = v167 - 1;
        if ( v168 )
        {
          if ( v168 != 1 )
            goto LABEL_465;
          goto LABEL_369;
        }
        v9 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904);
        if ( *(_WORD *)(v9 + 6996) < 8u
          || (v169 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904),
              v170 = *(_DWORD *)(v169 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v169, v171) + 19904),
              v170 != *(_DWORD *)(v9 + 4568))
          || (v172 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 19904),
              v173 = *(_DWORD *)(v172 + 4648),
              v9 = *(_QWORD *)(W32GetUserSessionState(v172, v174) + 19904),
              v173 == *(_DWORD *)(v9 + 4588)) )
        {
          UserSessionState = W32GetUserSessionState(v9, v8);
          GreSetBkColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(UserSessionState + 19904) + 4648LL));
          v178 = W32GetUserSessionState(v177, v176);
          GreSetTextColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(v178 + 19904) + 4628LL));
          v16 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v180, v179) + 19904) + 4944LL);
          goto LABEL_456;
        }
        v147 = 4648LL;
        v149 = 4856LL;
      }
      else
      {
        v147 = 4628LL;
        v149 = 4816LL;
      }
      v148 = 4640LL;
      goto LABEL_377;
    }
    if ( a2 == 308 )
    {
LABEL_333:
      v147 = 4588LL;
      v148 = 4600LL;
      v149 = 4736LL;
LABEL_377:
      v181 = W32GetUserSessionState(v9, v8);
      GreSetBkColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(v181 + 19904) + v147));
      v184 = W32GetUserSessionState(v183, v182);
      GreSetTextColor((HDC)a3, *(_DWORD *)(*(_QWORD *)(v184 + 19904) + v148));
      v16 = *(_QWORD *)(v149 + *(_QWORD *)(W32GetUserSessionState(v186, v185) + 19904));
      goto LABEL_456;
    }
    v143 = a2 - 295;
    if ( v143 )
    {
      v144 = v143 - 1;
      if ( v144 )
      {
        v145 = v144 - 1;
        if ( !v145 )
        {
          v150 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
          return v150 & 4 | ((((unsigned __int64)v150 >> 2) | v150 & 0x40) >> 5);
        }
        v146 = v145 - 9;
        if ( v146 )
        {
          if ( v146 != 1 )
            goto LABEL_465;
          goto LABEL_333;
        }
LABEL_369:
        v147 = 4628LL;
        v148 = 4600LL;
        v149 = 4816LL;
        goto LABEL_377;
      }
      updated = xxxDWP_UpdateUIState((__int64)a1, a3, a4);
LABEL_409:
      v16 = updated;
      goto LABEL_456;
    }
    BugCheckParameter3[0] = (unsigned __int16)a3;
    v152 = WORD1(a3);
    BytesInMultiByteString = WORD1(a3);
    if ( (a3 & 0xFFF80000LL) != 0 || (unsigned __int16)a3 > 3u || a4 )
      goto LABEL_465;
    if ( (_WORD)a3 == 3 )
    {
      v153 = 0;
      v155 = *(_DWORD **)(W32GetUserSessionState(3LL, v8) + 19904);
      if ( (*v155 & 0x80u) == 0 )
      {
        v156 = *(_QWORD *)(W32GetUserSessionState(v155, v154) + 19904);
        if ( (*(_DWORD *)(v156 + 7004) & 0x20) == 0
          && *(int *)(*(_QWORD *)(W32GetUserSessionState(v157, v156) + 19904) + 7004LL) < 0
          && (GetAppCompatFlags2(1024LL) & 2) == 0 )
        {
          v160 = (unsigned __int16)(((**(_DWORD **)(W32GetUserSessionState(v159, v158) + 19904) & 0x40) != 0) + 1);
          v153 = 3;
          a3 = v160 | 0x30000;
          goto LABEL_353;
        }
      }
    }
    else
    {
      v162 = *(_DWORD **)(W32GetUserSessionState((unsigned __int16)a3, v8) + 19904);
      if ( (*v162 & 0x80u) != 0
        || (v164 = *(_QWORD *)(W32GetUserSessionState(v162, v161) + 19904), (*(_DWORD *)(v164 + 7004) & 0x20) != 0)
        || *(int *)(*(_QWORD *)(W32GetUserSessionState(v164, v163) + 19904) + 7004LL) >= 0
        || (GetAppCompatFlags2(1024LL) & 2) != 0 )
      {
        LOWORD(v152) = WORD1(a3) & 0xFFFC;
        BytesInMultiByteString = v152;
      }
      v153 = BytesInMultiByteString;
    }
    LOWORD(v160) = BugCheckParameter3[0];
LABEL_353:
    if ( !v153 )
      goto LABEL_465;
    if ( (v153 & 1) != 0 )
      v165 = ((_WORD)v160 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
    else
      v165 = 0;
    if ( (v153 & 2) != 0 )
      v165 |= ((_WORD)v160 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
    if ( (v153 & 4) != 0 )
      v165 |= ((_WORD)v160 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
    if ( !v165 )
      goto LABEL_465;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
    {
      Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(v219, (char *)a1 + 104);
      v43 = xxxSendTransformableMessageTimeout(*((struct tagTHREADINFO ***)a1 + 13), 295LL, a3, 0LL, 0, 0, 0LL, 1u, 1);
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v219);
      goto LABEL_414;
    }
    Icon = (HICON)xxxSendTransformableMessageTimeout((struct tagTHREADINFO **)a1, 296LL, a3, 0LL, 0, 0, 0LL, 1u, 1);
    goto LABEL_128;
  }
  if ( a2 == 172 )
    goto LABEL_228;
  if ( a2 > 0x3B )
  {
    if ( a2 <= 0x80 )
    {
      if ( a2 == 128 )
      {
        Icon = xxxDWP_SetIcon(a1, a3, (HICON)a4);
        goto LABEL_128;
      }
      if ( a2 <= 0x50 )
      {
        if ( a2 != 80 )
        {
          v45 = a2 - 70;
          if ( !v45 )
          {
            if ( (*(_DWORD *)(a4 + 32) & 1) == 0 )
              xxxAdjustSize(a1);
            goto LABEL_465;
          }
          v46 = v45 - 1;
          if ( !v46 )
          {
            xxxHandleWindowPosChanged(a1, a4);
            goto LABEL_465;
          }
          v47 = v46 - 2;
          if ( v47 )
          {
            v48 = v47 - 4;
            if ( !v48 )
            {
              ContextHelpId = GetContextHelpId(a1);
              v50 = *((_QWORD *)a1 + 5);
              if ( (*(_BYTE *)(v50 + 31) & 0xC0) == 0x40 )
                v51 = *(_DWORD *)(v50 + 320);
              else
                v51 = 0;
              xxxSendHelpMessage((_DWORD)a1, 1, v51, *(_QWORD *)a1, ContextHelpId);
              goto LABEL_465;
            }
            if ( v48 != 2 || !ValidateHwnd(a3) )
              goto LABEL_465;
LABEL_393:
            v16 = 1LL;
            goto LABEL_456;
          }
          Icon = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
LABEL_128:
          v43 = (__int64)Icon;
          goto LABEL_414;
        }
        v54 = *((_QWORD *)PtiCurrent(v9) + 58);
        v55 = *(struct tagWND **)(v54 + 120);
        if ( !v55
          || v55 == a1
          || (v56 = *((_QWORD *)a1 + 17),
              **(_WORD **)(v56 + 8) == *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v54, v53) + 19904) + 904LL)) )
        {
          v60 = 256;
          if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
          {
            v62 = PtiCurrent(v61);
            if ( v62 == *(struct tagTHREADINFO **)(W32GetUserSessionState(v64, v63) + 18944)
              || (v66 = PtiCurrent(v65), (unsigned __int8)IsKeyboardDelegationTarget(v66)) )
            {
              v60 = 0;
            }
          }
          ProcessWindowStation = GetProcessWindowStation(0LL);
          if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, v60, a1) )
            UserSetLastError(1457);
          goto LABEL_465;
        }
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v55);
        v57 = a3;
        v58 = 80LL;
        v59 = (struct tagTHREADINFO **)v55;
LABEL_115:
        xxxSendTransformableMessageTimeout(v59, v58, v57, a4, 0, 0, 0LL, 1u, 1);
LABEL_40:
        v28 = BugCheckParameter3;
LABEL_402:
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v28);
        goto LABEL_465;
      }
      if ( a2 == 81 )
      {
        v78 = BuildHwndList(*((struct tagWND **)a1 + 14), 2LL, 0LL, 1);
        v80 = v78;
        if ( v78 )
        {
          v81 = (__int64 *)((char *)v78 + 32);
          v82 = *((_QWORD *)v78 + 4);
          if ( v82 != 1 )
          {
            do
            {
              v83 = HMValidateHandleNoSecure(v82, 1);
              BugCheckParameter3[0] = v83;
              if ( v83 )
              {
                Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v223, v83);
                xxxSendTransformableMessageTimeout(
                  (struct tagTHREADINFO **)BugCheckParameter3[0],
                  81LL,
                  a3,
                  a4,
                  0,
                  0,
                  0LL,
                  1u,
                  1);
                Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&v223);
              }
              v82 = *++v81;
            }
            while ( *v81 != 1 );
          }
          FreeHwndList(v80, v79);
        }
        goto LABEL_465;
      }
      if ( a2 != 83 )
      {
        if ( a2 == 85 )
        {
          if ( a4 != 3 )
            goto LABEL_465;
          v43 = 2LL - ((*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x20) != 0);
LABEL_414:
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
          return v43;
        }
        if ( a2 != 123 )
        {
          if ( a2 != 127 )
            goto LABEL_465;
          Icon = (HICON)DWP_GetIcon(a1, (unsigned int)a3);
          goto LABEL_128;
        }
        NCHit = FindNCHit((__int64)a1, a4);
        v69 = (unsigned int)(NCHit - 6);
        if ( (unsigned int)v69 <= 1 )
        {
          v72 = PtiCurrent(v69);
          if ( (unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v72 + 58) + 128LL), (__int64)a1) )
          {
            if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
              && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v73) )
            {
              xxxClientDoScrollMenu(*(_QWORD *)a1, v74, (unsigned int)(NCHit - 6), a4);
            }
            else
            {
              xxxDoScrollMenu(a1);
            }
          }
          goto LABEL_465;
        }
        v70 = (char *)a1 + 40;
        v71 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v71 + 31) & 0xC0) == 0x40 )
        {
          Win32HMThreadLockAlways<tagWND>::Win32HMThreadLockAlways<tagWND>(BugCheckParameter3, (char *)a1 + 104);
          v57 = *(_QWORD *)a1;
          v58 = 123LL;
          v59 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
          goto LABEL_115;
        }
        if ( a1 != *(struct tagWND **)(*((_QWORD *)PtiCurrent(v71) + 58) + 128LL) )
          goto LABEL_465;
        if ( NCHit != 2 )
        {
          if ( NCHit != 3 )
            goto LABEL_465;
          goto LABEL_224;
        }
LABEL_425:
        v103 = (*(_BYTE *)(*(_QWORD *)v70 + 31LL) & 0x21) != 0 ? 61728 : 61488;
LABEL_426:
        SysMenu = xxxGetSysMenu(a1, 1);
        v218 = 0LL;
        SmartObjStackRefBase<tagMENU>::operator=((__int64)v217, SysMenu);
        if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v217) )
        {
          if ( IsInsideUserApiHook(v197, v196) )
          {
            v198 = v218;
            if ( !v218 )
              v198 = *(_QWORD *)v217[0];
            MNClearCachedPopupSizes(v198);
          }
          v199 = v218;
          if ( !v218 )
            v199 = *(_QWORD *)v217[0];
          SetMenuDefaultItem(v199, v103, 0);
          PostShellHookMessagesEx((LastWokenThread *)9, *(_QWORD *)a1);
          Win32HMThreadLockAlways<tagMENU>::Win32HMThreadLockAlways<tagMENU>(v219, v217);
          if ( a4 == 0xFFFFFFFF )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v201, v200) + 19904) + 2120LL) & 8) != 0 )
            {
              *(_OWORD *)&v225[1] = 0LL;
              v225[0] = 20;
              if ( (unsigned int)xxxSendMinRectMessages(a1, &v225[1]) )
                xxxTrackPopupMenuEx(v217, 576LL, v225[1], v225[2], a1, v225);
            }
          }
          else
          {
            xxxTrackPopupMenuEx(v217, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
          }
          Win32HMThreadLockAlways<tagACCELTABLE>::~Win32HMThreadLockAlways<tagACCELTABLE>((ULONG_PTR)v219);
        }
        goto LABEL_465;
      }
      v75 = (struct tagTHREADINFO ***)((char *)a1 + 104);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        v75 = (struct tagTHREADINFO ***)((char *)a1 + 120);
      v76 = *v75;
      if ( !v76 || v76 == (struct tagTHREADINFO **)GetThreadDesktopWindow(0LL) )
        goto LABEL_465;
      Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v223, (__int64)v76);
      v77 = xxxSendTransformableMessageTimeout(v76, 83LL, a3, a4, 0, 0, 0LL, 1u, 1);
      v36 = &v223;
LABEL_459:
      v16 = v77;
      goto LABEL_460;
    }
    if ( a2 <= 0x88 )
    {
      if ( a2 == 136 )
      {
        SetOrClrWF(0, a1, 0x280u, 1);
        xxxInternalDoSyncPaint(a1, a3);
        goto LABEL_465;
      }
      v84 = a2 - 129;
      if ( v84 )
      {
        v85 = v84 - 2;
        if ( !v85 )
        {
          xxxCalcClientRect(a1, (_DWORD *)a4, 0);
          goto LABEL_465;
        }
        v86 = v85 - 1;
        if ( !v86 )
        {
          v44 = FindNCHit((__int64)a1, a4);
          goto LABEL_170;
        }
        v87 = v86 - 1;
        if ( !v87 )
        {
          SetOrClrWF(1, a1, 0x180u, 1);
          v90 = _GetDCEx(a1, a3, 328833LL);
          v91 = 0;
          if ( v90 )
          {
            v92 = *((_QWORD *)a1 + 5);
            if ( (*(_BYTE *)(v92 + 16) & 0x40) != 0 )
              v91 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 464LL) == *(_QWORD *)(W32GetUserSessionState(v92, v89) + 18928);
            xxxDrawWindowFrame(a1, v90, v91);
            _ReleaseDC(v90);
          }
          SetOrClrWF(0, a1, 0x180u, 1);
          goto LABEL_465;
        }
        if ( v87 == 1 )
        {
          xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
          v88 = 1LL;
LABEL_202:
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
          return v88;
        }
LABEL_465:
        SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
        return 0LL;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 )
      {
        if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
          || !_bittest((const signed __int32 *)WPP_GLOBAL_Control + 11, 8u)
          || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
        {
          v93 = 0;
          v88 = 1LL;
        }
        else
        {
          v88 = 1LL;
          v93 = 1;
        }
        v214 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v93 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          v94 = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8);
          LOBYTE(v95) = v214;
          LOBYTE(v96) = v93;
          WPP_RECORDER_AND_TRACE_SF_qDll(*((_QWORD *)WPP_GLOBAL_Control + 3), v96, v95, *(_QWORD *)(v94 + 69152));
        }
        if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
          && Scrollbar::NonClient::UserModeSupportsUserModeScrollBars(v97) )
        {
          inited = xxxClientInitPSBInfo(*(_QWORD *)a1);
        }
        else
        {
          if ( InitPwSB(a1) )
            goto LABEL_189;
          inited = 0;
        }
        if ( !inited )
          goto LABEL_465;
      }
      else
      {
        v88 = 1LL;
      }
LABEL_189:
      if ( a4 )
      {
        v223 = a4 + 80;
        if ( !*((_QWORD *)a1 + 3) || !v223 || !*(_QWORD *)(v223 + 8) )
        {
          *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
          goto LABEL_202;
        }
        if ( *(int *)(v223 + 4) < 0 && *(_DWORD *)v223 && **(_BYTE **)(v223 + 8) == 0xFF
          || *(int *)(v223 + 4) >= 0 && *(_DWORD *)v223 >= 2u && **(_WORD **)(v223 + 8) == 0xFFFF )
        {
          SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
          return 1LL;
        }
      }
      SetOrClrWF(1, a1, 0x202u, 1);
      TitleBarInfo = DefSetText((__int64)a1, (unsigned int *)(a4 + 80));
      goto LABEL_455;
    }
    if ( a2 == 161 || a2 == 162 || a2 == 163 )
    {
      xxxDWP_NCMouse(a1, a2, a3, a4);
      goto LABEL_465;
    }
    if ( a2 != 164 )
      goto LABEL_465;
    memset(v220, 0, sizeof(v220));
    v221 = 0LL;
    v99 = PtiCurrent(v9);
    v100 = FindNCHit((__int64)a1, a4);
    if ( (unsigned int)(v100 - 6) <= 1 )
    {
      if ( !(unsigned int)IsDescendant(*(_QWORD *)(*((_QWORD *)v99 + 58) + 128LL), (__int64)a1) )
        goto LABEL_465;
    }
    else if ( (unsigned int)(v100 - 2) > 1 || a1 != *(struct tagWND **)(*((_QWORD *)v99 + 58) + 128LL) )
    {
      goto LABEL_465;
    }
    xxxSetCapture(a1);
    while ( 1 )
    {
      LODWORD(v211) = 1;
      if ( (unsigned int)xxxInternalGetMessage((__int64)v220, 0, 512, 526, v211, 0) )
      {
        if ( DWORD2(v220[0]) == 517 )
          break;
      }
      if ( a1 != *(struct tagWND **)(*((_QWORD *)v99 + 58) + 112LL) || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0) )
        goto LABEL_465;
    }
    xxxReleaseCapture();
    v101 = WORD2(v221) | (WORD4(v221) << 16);
    v102 = FindNCHit((__int64)a1, v101);
    if ( ((v102 - 2) & 0xFFFFFFFA) != 0 )
      goto LABEL_465;
    v70 = (char *)a1 + 40;
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 232LL) & 0x40) != 0 )
    {
      if ( v102 == 2 )
        goto LABEL_425;
      if ( v102 == 3 )
      {
LABEL_224:
        v103 = 61536;
        goto LABEL_426;
      }
    }
    v104 = v101;
    v213 = 0;
    goto LABEL_383;
  }
  if ( a2 == 59 )
  {
    v44 = xxxClientShutdown(a1, a3);
LABEL_170:
    v88 = v44;
    goto LABEL_202;
  }
  if ( a2 <= 0x19 )
  {
    if ( a2 != 25 )
    {
      if ( a2 <= 0xF )
      {
        if ( a2 != 15 )
        {
          v10 = a2 - 6;
          if ( v10 )
          {
            v11 = v10 - 5;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( !v12 )
              {
                v25 = DefSetText((__int64)a1, (unsigned int *)a4);
                v16 = v25;
                if ( v25 )
                {
                  xxxRedrawTitle(a1, 8LL);
                  xxxWindowEvent(0x800Cu, a1, 0, 0, 0);
                }
                goto LABEL_456;
              }
              v13 = v12 - 1;
              if ( v13 )
              {
                if ( v13 == 1 )
                {
                  v14 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                  if ( v14 )
                  {
                    BytesInMultiByteString = 0;
                    if ( a4 )
                    {
                      RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 23), v14);
                      v15 = BytesInMultiByteString;
                    }
                    else
                    {
                      v15 = v14 >> 1;
                      BytesInMultiByteString = v15;
                    }
                    v16 = v15;
                    goto LABEL_456;
                  }
                }
                goto LABEL_465;
              }
              if ( a3 )
              {
                if ( *((_QWORD *)a1 + 23) )
                {
                  *(_OWORD *)BugCheckParameter3 = 0LL;
                  StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                              (struct tagWND *)((char *)a1 + 184),
                              (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                  DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
                }
                v18 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
                if ( v18 )
                {
                  v19 = *(_DWORD *)(a4 + 4);
                  if ( v19 >= 0 )
                  {
                    *(_OWORD *)BugCheckParameter3 = 0LL;
                    v22 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                            (struct tagWND *)((char *)a1 + 184),
                            (struct _LARGE_UNICODE_STRING *)BugCheckParameter3);
                    v21 = TextCopy(v22, *(_QWORD *)(a4 + 8), (unsigned int)a3);
                    v20 = 2 * v21;
                  }
                  else
                  {
                    v20 = WCSToMBEx(0, *((WCHAR **)a1 + 23), v18 >> 1, (PCHAR *)(a4 + 8), (v19 & 0x7FFFFFFF) - 1, v212);
                    v21 = v20;
                    *(_BYTE *)(v20 + *(_QWORD *)(a4 + 8)) = 0;
                  }
                  *(_DWORD *)a4 = v20;
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
                  return v21;
                }
                v24 = *(_WORD **)(a4 + 8);
                if ( *(int *)(a4 + 4) >= 0 )
                  *v24 = 0;
                else
                  *(_BYTE *)v24 = 0;
              }
            }
            else
            {
              xxxDWP_SetRedraw(a1, a3 != 0);
            }
            goto LABEL_465;
          }
          if ( a3 )
            xxxSetFocus(a1);
          if ( *(char *)(*((_QWORD *)a1 + 5) + 232LL) >= 0 )
            goto LABEL_465;
          v26 = *((_QWORD *)a1 + 2);
          v27 = *(struct tagWND **)(v26 + 1592);
          if ( !v27 )
            goto LABEL_465;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            BugCheckParameter3,
            *(_QWORD *)(v26 + 1592));
          xxxSendNotifyMessage(v27, 0x349u, a3, 0LL, 0);
          goto LABEL_40;
        }
LABEL_67:
        xxxDWP_Paint(a1);
        goto LABEL_465;
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
        goto LABEL_465;
      }
      if ( a2 != 17 && a2 != 19 )
      {
        if ( a2 != 20 )
        {
          if ( a2 != 24 )
            goto LABEL_465;
          if ( !(_WORD)a4 )
            goto LABEL_465;
          v29 = *((_QWORD *)a1 + 5);
          v30 = *(_BYTE *)(v29 + 31);
          if ( (v30 & 0xC0) != 0x80 && (v30 & 0xC0) != 0xC0 && !*((_QWORD *)a1 + 15) )
            goto LABEL_465;
          if ( a3 )
          {
            if ( (v30 & 0x10) != 0 || (*(_BYTE *)(v29 + 17) & 0x40) == 0 )
              goto LABEL_465;
          }
          else if ( (v30 & 0x10) == 0 )
          {
            goto LABEL_465;
          }
          SetOrClrWF(0, a1, 0x140u, 1);
          if ( !a3 )
            SetOrClrWF(1, a1, 0x140u, 1);
          v33 = W32GetUserSessionState(v32, v31);
          xxxShowWindowEx(a1, a3 != 0 ? 4 : 0, *(_DWORD *)(v33 + 66792) & 0x10000);
          goto LABEL_465;
        }
LABEL_66:
        TitleBarInfo = xxxDWP_EraseBkgnd((__int64)a1, a2, a3);
LABEL_455:
        v16 = TitleBarInfo;
        goto LABEL_456;
      }
      goto LABEL_393;
    }
    goto LABEL_333;
  }
  if ( a2 <= 0x2B )
  {
    switch ( a2 )
    {
      case 0x2Bu:
        DWP_DrawItem((struct tagDRAWITEMSTRUCT *)a4);
        goto LABEL_465;
      case 0x1Fu:
        xxxDWP_DoCancelMode(a1);
        goto LABEL_465;
      case 0x20u:
        TitleBarInfo = xxxDWP_SetCursor((ULONG_PTR *)a1, (_QWORD *)a3, (__int16)a4, WORD1(a4));
        goto LABEL_455;
    }
    if ( a2 != 33 )
    {
      if ( a2 == 38 )
        goto LABEL_67;
      if ( a2 != 39 )
        goto LABEL_465;
      goto LABEL_66;
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
      v35 = (struct tagTHREADINFO **)*((_QWORD *)a1 + 13);
    else
      v35 = 0LL;
    if ( !v35 )
    {
LABEL_74:
      if ( (_DWORD)a4 == 33619970 )
        v16 = 3LL;
      else
        v16 = 1LL;
      goto LABEL_456;
    }
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v35);
    v16 = xxxSendTransformableMessageTimeout(v35, 33LL, a3, a4, 0, 0, 0LL, 1u, 1);
    v36 = BugCheckParameter3;
    if ( !v16 )
    {
      Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      goto LABEL_74;
    }
LABEL_460:
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v36);
    goto LABEL_456;
  }
  v37 = a2 - 46;
  if ( !v37 || (v38 = v37 - 1) == 0 )
  {
    v16 = -1LL;
    goto LABEL_456;
  }
  v39 = v38 - 3;
  if ( !v39 )
  {
    v43 = (int)DWP_SetHotKey(a1, a3);
    goto LABEL_414;
  }
  v40 = v39 - 1;
  if ( v40 )
  {
    if ( v40 != 2 )
      goto LABEL_465;
    v16 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
LABEL_456:
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
    return v16;
  }
  v41 = HotKeyHelper(a1, v8);
  v42 = 0;
  if ( *v41 )
    v42 = *((_DWORD *)*v41 + 2);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v217);
  return v42;
}
