/*
 * XREFs of xxxMenuWindowProc @ 0x140242410
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1402423B0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ??1?$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ @ 0x14000A21C (--1-$Win32HMOptionalThreadLockAlways@UtagMENU@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ @ 0x14000A29C (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagMENU@@$0A@$00@@QEAAPEAUtagMENU@@XZ.c)
 *     xxxMenuDraw @ 0x14000A708 (xxxMenuDraw.c)
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     xxxMNCompute @ 0x14000C5FC (xxxMNCompute.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     MNAnimate @ 0x14000ED10 (MNAnimate.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ @ 0x14000F174 (--1-$Win32HMThreadLockBase@UtagKL@@$0A@$0A@@@QEAA@XZ.c)
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400103E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     _SetTimer @ 0x1400211F0 (_SetTimer.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     xxxValidateRect @ 0x14002C178 (xxxValidateRect.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1400483F8 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     IsMFMWFPWindow @ 0x14008A0E4 (IsMFMWFPWindow.c)
 *     xxxMNFindWindowFromPoint @ 0x14008B6DC (xxxMNFindWindowFromPoint.c)
 *     PtInRect @ 0x14008C1B0 (PtInRect.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x14009AEF8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNCancel @ 0x14011F744 (xxxMNCancel.c)
 *     xxxMNSelectItem @ 0x140120634 (xxxMNSelectItem.c)
 *     xxxDWP_DoNCActivate @ 0x140122C04 (xxxDWP_DoNCActivate.c)
 *     GreGetLayout @ 0x1401264BC (GreGetLayout.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140136048 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     IsPointerParentNotify @ 0x140137BE0 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x140159250 (IsPointerInputMessageWithState.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     FindBestPos @ 0x14017604C (FindBestPos.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x140177E40 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x140177E84 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     xxxMNEndMenuState @ 0x140177ED0 (xxxMNEndMenuState.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@W4LocalActivationOptions@@@Z @ 0x140191B8C (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundEffects@@@Z @ 0x14019F168 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1401A36FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     xxxValidateClassAndSize @ 0x1402001D4 (xxxValidateClassAndSize.c)
 *     GreSetWindowOrg @ 0x140207284 (GreSetWindowOrg.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x14020A2DC (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x14020C3E0 (xxxSendUAHMenuMessage.c)
 *     zzzStartFade @ 0x14021AFA8 (zzzStartFade.c)
 *     zzzShowFade @ 0x14021B0B4 (zzzShowFade.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1402347B4 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x140235D08 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     xxxMNButtonUp @ 0x1402375A8 (xxxMNButtonUp.c)
 *     MNAllocPopup @ 0x140244270 (MNAllocPopup.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     MNDrawEdge @ 0x14024FA0C (MNDrawEdge.c)
 *     xxxCallHandleMenuMessages @ 0x140269B80 (xxxCallHandleMenuMessages.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x140288E04 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     xxxMNSetCapture @ 0x14028B3D4 (xxxMNSetCapture.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 *     MNCreateAnimationBitmap @ 0x1402D0724 (MNCreateAnimationBitmap.c)
 *     xxxUserModeCallback @ 0x1402D8670 (xxxUserModeCallback.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1402D8E4C (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1402D8F04 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1402D91A0 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNCheckButtonDownState @ 0x1402D9304 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1402D9360 (MNGetpItem.c)
 *     xxxMNChar @ 0x1402D9470 (xxxMNChar.c)
 *     xxxMNDoubleClick @ 0x1402D9948 (xxxMNDoubleClick.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     MNEraseBackground @ 0x1402FA5BC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1402FA704 (xxxMNDrawFullNC.c)
 *     MNFindNextValidItem @ 0x1402FC0CC (MNFindNextValidItem.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall xxxMenuWindowProc(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  BOOL v13; // r8d
  unsigned __int64 v14; // rdi
  struct tagTHREADINFO *v15; // rax
  struct tagTHREADINFO *v16; // r12
  __int64 v17; // rdx
  struct tagTHREADINFO **i; // rdi
  __int64 v19; // rcx
  int v20; // r9d
  __int64 v21; // r13
  __int64 v22; // r12
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // r13
  struct tagMENUWND *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // r8
  struct tagWND *v30; // rcx
  __int64 DCEx; // rbx
  __int64 v32; // rdx
  __int64 v33; // rdi
  int v34; // ebx
  __int64 v35; // rdi
  __int64 v36; // rdx
  __int64 v37; // rbx
  struct tagTHREADINFO *v38; // rcx
  ULONG_PTR v39; // rdi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // ecx
  int v44; // eax
  __int64 *v45; // rcx
  __int64 ValidItem; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rbx
  int v49; // edi
  __int64 *v50; // rax
  __int64 v51; // rbx
  struct tagMONITOR *v52; // rax
  int v53; // ebx
  struct tagMONITOR *v54; // rdi
  int v55; // edi
  __int64 v56; // r9
  int v57; // r14d
  struct tagMONITOR *v58; // r12
  struct tagTHREADINFO *v59; // rax
  LONG v60; // edx
  int BestPos; // eax
  int v62; // eax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  struct tagTHREADINFO *v66; // rax
  __int64 v67; // rbx
  struct tagTHREADINFO *v68; // rax
  __int64 v69; // rax
  unsigned int v70; // ecx
  ULONG_PTR v71; // rdi
  unsigned int v72; // r13d
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 DpiMetricsForCurrentThread; // rax
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // rax
  int v81; // eax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rbx
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 UserSessionState; // rax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rcx
  struct tagTHREADINFO *v98; // rbx
  struct tagTHREADINFO *v99; // rdx
  __int64 v100; // rcx
  int v101; // edi
  unsigned int v102; // ebx
  const struct tagWND **TopWindow; // rax
  unsigned int v104; // eax
  __int64 v105; // r14
  __int64 *v106; // rax
  struct tagWND **v107; // rbx
  __int64 v108; // rdi
  __int64 v109; // rdx
  __int64 v110; // rdi
  unsigned int v111; // r15d
  unsigned int v112; // r12d
  ULONG_PTR *v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // edx
  int v126; // eax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rbx
  __int64 v134; // rcx
  char v135; // [rsp+28h] [rbp-79h]
  __int64 v136[2]; // [rsp+58h] [rbp-49h] BYREF
  ULONG_PTR v137[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v138; // [rsp+78h] [rbp-29h] BYREF
  unsigned int v139; // [rsp+80h] [rbp-21h] BYREF
  struct _POINTL v140; // [rsp+88h] [rbp-19h] BYREF
  struct tagMENUWND *v141[2]; // [rsp+90h] [rbp-11h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v143; // [rsp+A8h] [rbp+7h]
  ULONG_PTR v144[3]; // [rsp+B0h] [rbp+Fh] BYREF
  unsigned int v145; // [rsp+C8h] [rbp+27h]

  v4 = a2;
  v145 = a2;
  v137[0] = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v136, 0LL);
  v8 = 0LL;
  BugCheckParameter3 = -1LL;
  v143 = 0LL;
  v140 = 0LL;
  v138 = 0LL;
  v10 = PtiCurrent(v9);
  v139 = 2;
  if ( a1[2] != v10 )
  {
    LODWORD(v141[0]) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 4336LL);
  }
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, v4, a3, a4, 668, 129, &v138) )
  {
    v8 = v138;
LABEL_263:
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
    return v8;
  }
  if ( a1[2] != PtiCurrent(v11) )
  {
    v13 = IsPointerInputMessageWithState(v4);
    if ( !v13 && !IsPointerParentNotify(v4, a3) )
      goto LABEL_14;
    LOWORD(v14) = 0;
    if ( v13 )
    {
      LOWORD(v14) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(v4, a3) )
      {
LABEL_13:
        v15 = PtiCurrent(v12);
        if ( !GetThreadPointerData((struct _LIST_ENTRY *)((char *)v15 + 1208), v14, 0LL, 0LL) )
          goto LABEL_263;
LABEL_14:
        v8 = xxxSendMessage((struct tagWND *)a1, v4);
        goto LABEL_263;
      }
      v14 = a3 >> 16;
    }
    if ( (_WORD)v14 == 1 )
      goto LABEL_263;
    goto LABEL_13;
  }
  v16 = a1[35];
  v141[0] = v16;
  v17 = *((_QWORD *)v16 + 1);
  *(_QWORD *)v16 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v136, v17);
  if ( *(_QWORD *)v136[0] )
  {
    for ( i = *(struct tagTHREADINFO ***)(*(_QWORD *)(*(_QWORD *)v16 + 16LL) + 640LL); i; i = (struct tagTHREADINFO **)i[6] )
    {
      if ( *i == *(struct tagTHREADINFO **)(*((_QWORD *)v16 + 1) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138, i);
  if ( *(_QWORD *)v136[0] )
  {
    v19 = *(_QWORD *)v136[0];
    v21 = *(_QWORD *)(*(_QWORD *)v136[0] + 40LL);
  }
  else
  {
    v21 = 0LL;
  }
  v22 = 1LL;
  if ( !i || !v21 )
  {
    switch ( v4 )
    {
      case 0x1E0u:
        if ( !*(_QWORD *)v136[0] || *(char *)(*(_QWORD *)(*(_QWORD *)v141[0] + 40LL) + 19LL) < 0 )
          goto LABEL_74;
LABEL_191:
        if ( !a3 )
          goto LABEL_299;
        v80 = ValidateHmenu(a3, 1LL);
        if ( !v80 )
          goto LABEL_299;
        SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, v80);
        LockPopupMenu((__int64)v136, (__int64 *)(*(_QWORD *)v136[0] + 40LL), (__int64)v144);
        goto LABEL_208;
      case 0x81u:
        v26 = v141[0];
        if ( *(char *)(*(_QWORD *)(*(_QWORD *)v141[0] + 40LL) + 19LL) < 0 )
          goto LABEL_74;
        goto LABEL_43;
      case 0x70u:
LABEL_198:
        if ( v4 <= 0x18 )
        {
          if ( v4 == 24 )
          {
            if ( !a3 )
              xxxMNCancel((__int64)i, 0, 0, 0LL);
            goto LABEL_34;
          }
          if ( v4 == 3 || v4 == 5 )
          {
            if ( !*(_QWORD *)(*(_QWORD *)v136[0] + 24LL) )
              goto LABEL_299;
            v105 = MNGetpItem(v136, *(unsigned int *)(*(_QWORD *)v136[0] + 84LL));
            v106 = (__int64 *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v136[0] + 24LL));
            v107 = (struct tagWND **)v106;
            if ( !v105 )
              goto LABEL_299;
            if ( !v106 )
              goto LABEL_299;
            v108 = v106[1];
            if ( !v108 )
              goto LABEL_299;
            v109 = *v106;
            if ( !*v106 )
              goto LABEL_299;
            v110 = *(_QWORD *)(v108 + 40);
            v111 = 0;
            LODWORD(v141[0]) = 0;
            v112 = 0;
            v139 = 0;
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v137, v109);
            Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v144, v110);
            if ( !*(_DWORD *)(v110 + 64) )
              xxxSendMessage(*v107, 0x1E2u);
            if ( *(_QWORD *)(*(_QWORD *)v136[0] + 40LL) && MNIspItemValid(*(_QWORD *)(*(_QWORD *)v136[0] + 40LL), v105) )
            {
              xxxMNPositionHierarchy(
                (__int64 **)v136,
                v105,
                *(_DWORD *)(v110 + 64) + 6,
                *(_DWORD *)(v110 + 68) + 6,
                (int *)v141,
                (int *)&v139,
                0LL);
              v111 = (unsigned int)v141[0];
              v112 = v139;
            }
            xxxSetWindowPos(*v107, 0LL, v111, v112, 0, 0, 1029);
            Win32HMThreadLockBase<tagKL,0,0>::~Win32HMThreadLockBase<tagKL,0,0>(v144);
            v113 = v137;
            goto LABEL_298;
          }
          if ( v4 != 6 )
          {
            if ( v4 != 15 )
            {
              if ( v4 == 20 && *(_QWORD *)(*(_QWORD *)(v21 + 40) + 24LL) )
              {
                MNEraseBackground(
                  (HDC)a3,
                  *((_DWORD *)a1[5] + 28) - *((_DWORD *)a1[5] + 26),
                  *((_DWORD *)a1[5] + 29) - *((_DWORD *)a1[5] + 27));
                goto LABEL_47;
              }
              goto LABEL_34;
            }
            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, v21);
            xxxHandleMenuPainting((struct tagWND *)a1);
LABEL_208:
            SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v144);
            goto LABEL_299;
          }
          v81 = *((_DWORD *)i + 2);
          if ( (v81 & 0x100) != 0 )
          {
            if ( (_WORD)a3 || (v81 & 0x200) != 0 || (*(_DWORD *)*i & 0x80000) != 0 )
              goto LABEL_34;
            v137[0] = HMValidateHandleNoSecure(v137[0], 1);
            v82 = safe_cast_fnid_to_PMENUWND(v137[0]);
            v24 = v137[0];
            if ( !v137[0] )
              goto LABEL_35;
            if ( v82 )
            {
              v85 = *(_QWORD *)(v82 + 8);
              if ( v85 )
              {
                if ( *i == *(struct tagTHREADINFO **)(v85 + 64) )
                  goto LABEL_35;
              }
            }
            if ( ((_DWORD)i[1] & 0x10000) != 0 )
            {
              v86 = *(_QWORD *)(W32GetUserSessionState(v84, v83) + 18928);
              if ( v86 == *((_QWORD *)PtiCurrent(v87) + 58) )
              {
                *((_DWORD *)i + 2) &= ~0x10000u;
                PostMessage((int)a1, 498, 0, 0);
                v4 = v145;
                goto LABEL_35;
              }
            }
LABEL_222:
            v89 = (int)a1;
LABEL_223:
            PostMessage(v89, 499, 0, 0);
            goto LABEL_299;
          }
          if ( !(_WORD)a3 )
            goto LABEL_299;
          if ( *((_WORD *)PtiCurrent(v19) + 332) >= 0x500u )
            goto LABEL_222;
          if ( !*(_QWORD *)(W32GetUserSessionState(1280LL, v88) + 18936)
            || (UserSessionState = W32GetUserSessionState(v91, v90),
                !IsWindowActivateable(*(const struct tagWND **)(*(_QWORD *)(UserSessionState + 18936) + 136LL)))
            || (v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v94, v93) + 18936) + 136LL) + 40LL),
                (*(_WORD *)(v96 + 42) & 0x2FFF) == 0x29C) )
          {
            v101 = (int)a1;
            v102 = 0;
            do
            {
              TopWindow = (const struct tagWND **)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
              a1 = TopWindow;
              if ( !TopWindow )
                break;
              if ( IsWindowActivateable(TopWindow[25]) )
              {
                v97 = *(_WORD *)(*((_QWORD *)a1[25] + 5) + 42LL) & 0x2FFF;
                if ( (_DWORD)v97 != 668 )
                {
                  a1 = (struct tagTHREADINFO **)a1[25];
                  goto LABEL_228;
                }
              }
              v104 = v102++;
            }
            while ( v104 < 0xFF );
            if ( !v102 )
              goto LABEL_228;
            v89 = v101;
            goto LABEL_223;
          }
          v97 = *(_QWORD *)(W32GetUserSessionState(v96, v95) + 18936);
          a1 = *(struct tagTHREADINFO ***)(v97 + 136);
LABEL_228:
          if ( !a1 )
            goto LABEL_299;
          v98 = PtiCurrent(v97);
          Win32HM_LockIntoThread<0>((__int64)v98, (__int64)a1, v144);
          v99 = a1[2];
          v100 = *((_QWORD *)v98 + 58);
          if ( *((_QWORD *)v99 + 58) == v100 )
          {
            xxxActivateWindowWithOptions((__int64)a1, 0, 0, 1, 0);
          }
          else if ( *(_QWORD *)(W32GetUserSessionState(v100, v99) + 18928) == *((_QWORD *)v98 + 58) )
          {
            xxxSetForegroundWindowWithOptions((__int64)a1, 2LL, 0, 0);
          }
LABEL_297:
          v113 = v144;
LABEL_298:
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v113);
          goto LABEL_299;
        }
        if ( v4 == 28 )
        {
          if ( ((_DWORD)i[1] & 0x100) == 0 || a1 != *((struct tagTHREADINFO ***)*i + 7) )
            goto LABEL_299;
          if ( a3 )
          {
            PostMessage((int)a1, 498, 0, 0);
            v133 = *(_QWORD *)(W32GetUserSessionState(v132, v131) + 18928);
            *((_DWORD *)i + 2) = (_DWORD)i[1] & 0xFFFEFFFF | (*((_QWORD *)PtiCurrent(v134) + 58) != v133 ? 0x10000 : 0);
          }
          if ( !*(_QWORD *)(*(_QWORD *)v136[0] + 8LL) )
            goto LABEL_299;
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
            v144,
            *(_QWORD *)(*(_QWORD *)v136[0] + 8LL));
          if ( a3 && ((_DWORD)i[1] & 0x10000) == 0 )
            v139 = 1;
          xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v136[0] + 8LL), v139, 1LL);
          goto LABEL_297;
        }
        if ( v4 != 70 )
        {
          if ( v4 != 71 )
          {
            if ( v4 != 112 )
              goto LABEL_34;
            if ( i && ((_DWORD)i[1] & 0x400) != 0 )
            {
              v137[0] = (ULONG_PTR)*a1;
              xxxUserModeCallback(101, (unsigned int)v137, 8, v20, v135);
            }
            xxxMNDestroyHandler(v141[0]);
LABEL_262:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
            goto LABEL_263;
          }
          if ( (*(_DWORD *)(v137[0] + 32) & 0x40) == 0 || (**(_DWORD **)v136[0] & 0x8000000) == 0 )
            goto LABEL_34;
          v115 = *(unsigned int *)(W32GetUserSessionState(*(_QWORD *)v136[0], 256LL) + 43056);
          if ( (v115 & 0x10) != 0 )
          {
            zzzStartFade(v115, v114);
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((__int64)a1, 65531, 10, 0, 0);
          }
LABEL_269:
          **(_DWORD **)v136[0] &= ~0x8000000u;
          goto LABEL_34;
        }
        if ( (*(_DWORD *)(v137[0] + 32) & 0x40) == 0 )
          goto LABEL_34;
        if ( (*(_DWORD *)(W32GetUserSessionState(v19, 256LL) + 66796) & 0x80000002) != 0x80000002 )
          goto LABEL_269;
        if ( (**(_DWORD **)v136[0] & 0x8000000) == 0 )
          goto LABEL_269;
        v117 = W32GetUserSessionState(*(_QWORD *)v136[0], v116);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v117 + 3056)) == 1 )
          goto LABEL_269;
        v120 = W32GetUserSessionState(v119, v118);
        if ( (unsigned int)CInputGlobals::GetLastInputType(*(_QWORD *)(v120 + 3056)) == 4
          || (GetAppCompatFlags2(1024LL) & 1) != 0 )
        {
          goto LABEL_269;
        }
        *((_DWORD *)i + 29) = *((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22);
        v122 = (unsigned int)(*((_DWORD *)a1[5] + 25) - *((_DWORD *)a1[5] + 23));
        *((_DWORD *)i + 30) = v122;
        if ( *(_DWORD *)(W32GetUserSessionState(v122, v121) + 43264)
          || (*(_DWORD *)(W32GetUserSessionState(v124, v123) + 66796) & 0x80000200) != 0x80000200 )
        {
          if ( !(unsigned int)MNCreateAnimationBitmap(i, *((unsigned int *)i + 29), *((unsigned int *)i + 30)) )
            goto LABEL_269;
          i[12] = (struct tagTHREADINFO *)_GetDCEx(a1, 1LL, 65665LL);
          v125 = *((_DWORD *)i + 2) ^ (*((_DWORD *)i + 2) ^ (**(_DWORD **)v136[0] >> 4)) & 0xF80000;
          v126 = 0;
          *((_DWORD *)i + 2) = v125;
          if ( (v125 & 0x180000) == 0 )
            v126 = *((_DWORD *)i + 29);
          *((_DWORD *)i + 27) = v126;
          if ( (v125 & 0x600000) == 0 )
            LODWORD(v8) = *((_DWORD *)i + 30);
          *((_DWORD *)i + 28) = v8;
        }
        else if ( !CreateFadeInternal((struct tagWND *)a1, 0LL, 175, 17, 0) )
        {
          goto LABEL_269;
        }
        *(_DWORD *)(*(_QWORD *)(v21 + 40) + 40LL) |= 8u;
        xxxSendMessage((struct tagWND *)a1, 0x317u);
        *(_DWORD *)(*(_QWORD *)(v21 + 40) + 40LL) &= ~8u;
        v130 = *(unsigned int *)(W32GetUserSessionState(v128, v127) + 43056);
        if ( (v130 & 0x10) != 0 )
          zzzShowFade(v130, v129);
        goto LABEL_34;
    }
    goto LABEL_34;
  }
  v23 = PtiCurrent(v19);
  Win32HM_LockIntoThread<0>((__int64)v23, v21, &BugCheckParameter3);
  if ( !*(_QWORD *)(*(_QWORD *)v136[0] + 64LL)
    || (v19 = 1LL,
        **(_QWORD **)(*(_QWORD *)(*(_QWORD *)v141[0] + 16LL) + 640LL) == *(_QWORD *)(*(_QWORD *)v136[0] + 64LL)) )
  {
    v19 = 0LL;
  }
  if ( ((_DWORD)i[1] & 0x300) == 0x100 )
  {
    if ( (_DWORD)v19 )
    {
      if ( v4 - 512 <= 0xE || v4 - 256 <= 9 || v4 - 160 <= 0xD )
        goto LABEL_34;
    }
    else if ( (unsigned int)xxxCallHandleMenuMessages((_DWORD)i, (_DWORD)a1, v4, a3, v137[0]) )
    {
      goto LABEL_74;
    }
  }
  if ( v4 <= 0x1E1 )
  {
    if ( v4 == 481 )
    {
      if ( !v143 || (v21 = Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(&BugCheckParameter3)) != 0 )
        v8 = *(_QWORD *)v21;
      goto LABEL_262;
    }
    if ( v4 <= 0x81 )
    {
      if ( v4 == 129 )
      {
        v26 = v141[0];
LABEL_43:
        if ( !*((_QWORD *)v26 + 1) && !*((_QWORD *)v26 + 2) )
        {
          v27 = MNAllocPopup(1LL);
          SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v136, v27);
          if ( *(_QWORD *)v136[0] )
          {
            *((_QWORD *)v26 + 1) = *(_QWORD *)v136[0];
            **(_DWORD **)v136[0] |= 0x40000000u;
            *(_DWORD *)(*(_QWORD *)v136[0] + 80LL) = -1;
            v137[1] = (ULONG_PTR)a1;
            v137[0] = *(_QWORD *)v136[0] + 16LL;
            HMAssignmentLock(v137, 0LL);
LABEL_47:
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
            v8 = 1LL;
            goto LABEL_263;
          }
        }
LABEL_74:
        v22 = 0LL;
        goto LABEL_36;
      }
      goto LABEL_198;
    }
    if ( v4 == 131 )
    {
      v39 = v137[0];
      xxxDefWindowProc(a1, 0x83u, a3, v137[0]);
      if ( (*(_DWORD *)(v21 + 124) & 3) != 0 )
      {
        v43 = *(_DWORD *)(GetDpiMetricsForCurrentThread(v41, v40, v42) + 28);
        *(_DWORD *)(v39 + 4) += v43;
        *(_DWORD *)(v39 + 12) -= v43;
      }
      goto LABEL_299;
    }
    if ( v4 != 132 )
    {
      if ( v4 == 133 )
      {
        if ( (**(_DWORD **)v136[0] & 0x8000000) != 0 )
        {
          xxxValidateRect((__int64)a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v21 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v21, 256LL) )
            {
              v28 = 0LL;
              v29 = 65537LL;
              v30 = *(struct tagWND **)(*(_QWORD *)v136[0] + 16LL);
            }
            else
            {
              v29 = 328833LL;
              v28 = a3;
              v30 = (struct tagWND *)a1;
            }
            DCEx = _GetDCEx(v30, v28, v29);
            xxxMNDrawFullNC(a1, DCEx, v136);
          }
          else
          {
            if ( !MNIsFlatMenu(*(_QWORD *)v136[0], 256LL) )
            {
              v35 = xxxDefWindowProc(a1, v4, a3, v137[0]);
              if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v21, v36) && *(_QWORD *)(*(_QWORD *)v136[0] + 16LL) )
              {
                v37 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0LL, 65537LL);
                xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v136[0] + 16LL), 0x95u);
                _ReleaseDC(v37);
              }
              MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
              v8 = v35;
              goto LABEL_263;
            }
            if ( (unsigned int)MNIsUAHMenu((struct tagMENU *)v21, v32) )
            {
              v33 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0LL, 65537LL);
              v34 = xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v136[0] + 16LL), 0x95u);
              _ReleaseDC(v33);
              if ( v34 )
                goto LABEL_299;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v21, DCEx, (char *)a1[5] + 88, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_299:
        MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
        Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
        return 0LL;
      }
      if ( v4 != 256 )
      {
        if ( v4 == 258 )
          goto LABEL_75;
        if ( v4 != 260 )
        {
          if ( v4 != 262 )
          {
            if ( v4 != 275 )
            {
              if ( v4 != 480 )
                goto LABEL_34;
              goto LABEL_191;
            }
            if ( a3 != 65529 )
            {
              if ( a3 == 65531 )
              {
                if ( i[12] )
                  MNAnimate((__int64 *)i, 1LL);
                goto LABEL_299;
              }
              if ( a3 == 65534 )
              {
                **(_DWORD **)v136[0] &= ~0x80u;
                xxxMNOpenHierarchy(v136, i);
                goto LABEL_299;
              }
              if ( a3 != 0xFFFF )
              {
                if ( a3 - 4294967292u <= 1 )
                {
                  if ( ((_DWORD)i[1] & 8) != 0 )
                    xxxMNDoScroll(v136, (unsigned int)a3, 0LL);
                  else
                    FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
                }
                goto LABEL_299;
              }
              **(_DWORD **)v136[0] &= ~0x80u;
              goto LABEL_67;
            }
            FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
            if ( ((_DWORD)i[1] & 0x1000) == 0 )
              goto LABEL_299;
            goto LABEL_72;
          }
LABEL_75:
          xxxMNChar(v136, i, (unsigned int)a3);
          goto LABEL_299;
        }
      }
      xxxMNKeyDown(v136, i, (unsigned int)a3);
      goto LABEL_299;
    }
    if ( ((_DWORD)i[1] & 0x100) != 0 )
    {
      v140.x = SLOWORD(v137[0]);
      v38 = a1[5];
      v140.y = SWORD1(v137[0]);
      if ( PtInRect((_DWORD *)v38 + 22, *(_QWORD *)&v140) )
        goto LABEL_36;
      goto LABEL_74;
    }
LABEL_34:
    v24 = v137[0];
LABEL_35:
    v22 = xxxDefWindowProc(a1, v4, a3, v24);
LABEL_36:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
    return v22;
  }
  if ( v4 > 0x2A3 )
  {
    if ( v4 != 791 )
    {
      if ( v4 != 792 )
        goto LABEL_34;
      xxxMenuDraw((HDC)a3, (struct tagMENU *)v21, (__int64)a1);
      goto LABEL_299;
    }
    v71 = v137[0];
    if ( (v137[0] & 2) != 0 && (*(_DWORD *)(v21 + 124) & 3) != 0 )
    {
      if ( a3 && (*((_BYTE *)a1[5] + 26) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        v72 = GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22)), 1LL);
      }
      else
      {
        LODWORD(v22) = 0;
        v72 = 0;
      }
      xxxMNDrawFullNC(a1, a3, v136);
      if ( (_DWORD)v22 )
        GreSetLayout(a3, (unsigned int)(*((_DWORD *)a1[5] + 24) - *((_DWORD *)a1[5] + 22)), v72);
      GreGetDCPoint((HDC)a3, 8u, &v140);
      DpiMetricsForCurrentThread = GetDpiMetricsForCurrentThread(v74, v73, v75);
      GreSetWindowOrg((HDC)a3, v140.x - 3, v140.y - *(_DWORD *)(DpiMetricsForCurrentThread + 28) - 3);
      xxxDefWindowProc(a1, 0x317u, a3, v71 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3, v140.x, v140.y);
      goto LABEL_299;
    }
    ValidItem = xxxDefWindowProc(a1, 0x317u, a3, v137[0]);
    if ( !(unsigned int)MNIsUAHMenu((struct tagMENU *)v21, v77)
      || (v79 = v136[0], v78 = *(_QWORD *)v136[0], !*(_QWORD *)(*(_QWORD *)v136[0] + 16LL))
      || !(unsigned int)xxxSendUAHMenuMessage(*(struct tagWND **)(*(_QWORD *)v136[0] + 16LL), 0x95u) )
    {
      if ( MNIsFlatMenu(v79, v78) )
        MNDrawEdge(v21, a3, (char *)a1[5] + 88, 0LL);
    }
    goto LABEL_118;
  }
  if ( v4 == 675 )
  {
    *((_DWORD *)i + 2) = (_DWORD)i[1] & 0xFFFFBFFF | ~(unsigned __int16)(*((_DWORD *)i + 2) >> 1) & 0x4000;
    **(_DWORD **)v136[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, (struct tagWND *)a1);
    if ( *(_QWORD *)(*(_QWORD *)v136[0] + 16LL) == *((_QWORD *)*i + 7) )
      xxxMNSelectItem((__int64 **)v136, (__int64)i, -1);
    goto LABEL_299;
  }
  if ( v4 > 0x1ED )
  {
    switch ( v4 )
    {
      case 0x1EEu:
        xxxMNMouseMove(v136, (__int64)i, v137[0]);
        goto LABEL_299;
      case 0x1EFu:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v21 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
          xxxMNButtonUp(v136, (__int64)i, a3, v137[0]);
        goto LABEL_299;
      case 0x1F0u:
        v22 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64 **)v136);
        goto LABEL_36;
      case 0x1F1u:
        xxxMNDoubleClick(i, v136, (unsigned int)a3);
        goto LABEL_299;
      case 0x1F2u:
        xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v136[0] + 16LL), 0, 0, 1, 0);
        goto LABEL_299;
    }
    if ( v4 != 499 )
    {
      if ( v4 != 500 )
        goto LABEL_34;
      if ( v143 )
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(&BugCheckParameter3);
      if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
        goto LABEL_74;
      if ( !*(_QWORD *)(*(_QWORD *)v136[0] + 8LL) )
        goto LABEL_74;
      LOBYTE(v62) = IsMFMWFPWindow((__int64)i[8]);
      if ( !v62 )
        goto LABEL_74;
      v64 = safe_cast_fnid_to_PMENUWND(v63);
      if ( !v64 || !*(_QWORD *)(v64 + 8) )
        goto LABEL_74;
      if ( ((_DWORD)i[1] & 0x100) == 0 )
      {
        v66 = PtiCurrent(v65);
        *(_DWORD *)(*((_QWORD *)v66 + 58) + 436LL) &= ~0x100000u;
      }
      ++*((_DWORD *)i + 10);
      v67 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
      v68 = PtiCurrent(*(_QWORD *)v136[0]);
      Win32HM_LockIntoThread<0>((__int64)v68, v67, v137);
      *((_DWORD *)i + 2) |= 0x8000u;
      v69 = xxxSendMessage(*(struct tagWND **)(*(_QWORD *)v136[0] + 8LL), 0x123u);
      v70 = (_DWORD)i[1] & 0xFFFF7FFF;
      *((_DWORD *)i + 2) = v70;
      if ( v69 == 1 )
      {
        if ( !(unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
        {
          Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v137);
          goto LABEL_72;
        }
      }
      else
      {
        *((_DWORD *)i + 2) = v70 | 0x2000;
        MNCheckButtonDownState(i);
        if ( ((_DWORD)i[1] & 0x100) == 0 )
          xxxMNSetCapture(v136, i);
        Win32HMThreadLockBase<tagMENU,0,1>::ManualUnlock<void>(v137);
        xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      }
      Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(v137);
      goto LABEL_74;
    }
LABEL_72:
    xxxEndMenuLoop(i, *i);
    if ( ((_DWORD)i[1] & 0x100) != 0 )
      xxxMNEndMenuState(i);
    goto LABEL_74;
  }
  if ( v4 == 493 )
  {
    if ( a3 < *(unsigned int *)(*(_QWORD *)(v21 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
      xxxMNButtonDown(v136, i, (unsigned int)a3, 1LL);
    goto LABEL_299;
  }
  if ( v4 != 482 )
  {
    switch ( v4 )
    {
      case 0x1E3u:
        v50 = (__int64 *)xxxMNOpenHierarchy(v136, i);
        if ( v50 == (__int64 *)-1LL )
          goto LABEL_74;
        if ( v50 )
          v8 = *v50;
        goto LABEL_262;
      case 0x1E4u:
LABEL_67:
        xxxMNCloseHierarchy(*(_QWORD *)v136[0], i);
        goto LABEL_299;
      case 0x1E5u:
        if ( a3 < *(unsigned int *)(*(_QWORD *)(v21 + 40) + 44LL) || a3 >= 0xFFFFFFFC )
        {
          v47 = (_QWORD *)xxxMNSelectItem((__int64 **)v136, (__int64)i, a3);
          if ( v47 )
          {
            v48 = v47[2];
            v49 = *(_DWORD *)(*v47 + 4LL);
            MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
            Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
            return (unsigned __int16)v49 | (unsigned __int64)(v48 != 0 ? 0x10 : 0);
          }
        }
        goto LABEL_299;
      case 0x1E6u:
        xxxMNCancel((__int64)i, a3, LOWORD(v137[0]), 0LL);
        goto LABEL_299;
    }
    if ( v4 != 487 )
    {
      if ( v4 == 491 )
      {
        v22 = xxxMNFindWindowFromPoint((__int64 **)v136, (_DWORD *)a3, v137[0]);
        LOBYTE(v44) = IsMFMWFPWindow(v22);
        if ( !v44 )
          goto LABEL_36;
        if ( v45 )
        {
          v22 = *v45;
          goto LABEL_36;
        }
        goto LABEL_74;
      }
      if ( v4 == 492 )
      {
        xxxPlayEventSound(5LL);
        xxxShowWindowEx((const struct tagWND *)a1, BYTE1(*((_DWORD *)i + 2)) & 1 | 4, 0);
        goto LABEL_299;
      }
      goto LABEL_34;
    }
    ValidItem = (int)MNFindNextValidItem(v21, 0xFFFFFFFFLL, 1LL, 1LL);
    xxxSendMessage((struct tagWND *)a1, 0x1E5u);
LABEL_118:
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
    Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
    return ValidItem;
  }
  if ( *(_QWORD *)(*(_QWORD *)v136[0] + 8LL) )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v137, *(_QWORD *)(*(_QWORD *)v136[0] + 8LL));
    v51 = *(_QWORD *)(*(_QWORD *)v136[0] + 8LL);
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, v21);
    xxxMNCompute((__int64 **)v144, v51, (__int64)a1, 0, 0, 0, 0LL);
    SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v144);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v137);
  }
  v52 = _MonitorFromWindowInternal((struct tagWND *)a1, 1u, 0);
  v53 = *(_DWORD *)(v21 + 64);
  v137[0] = (ULONG_PTR)v52;
  v54 = v52;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, v21);
  v55 = MNCheckScroll(v136, v144, v54);
  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v144);
  if ( a3 )
  {
    v56 = 0LL;
    v57 = (8 * (_BYTE)a3) & 0x20 | 0x214;
    if ( (*((_BYTE *)a1[5] + 31) & 0x10) != 0 )
    {
      *(_OWORD *)v141 = 0LL;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v144, *(_QWORD *)v136[0]);
      v58 = (struct tagMONITOR *)v137[0];
      MNGetPopupBoundsRect((__int64)v144, v137[0], (struct tagRECT *)v141, 1);
      v59 = a1[5];
      v60 = *((_DWORD *)v59 + 23);
      LODWORD(v137[0]) = *((_DWORD *)v59 + 22);
      HIDWORD(v137[0]) = v60;
      BestPos = FindBestPos(v137[0], v60, v53, v55, (struct tagRECT *)v141, 0, (unsigned int ***)v136, v58, v137[0]);
      LODWORD(v8) = (__int16)BestPos;
      v56 = (unsigned int)SHIWORD(BestPos);
    }
    else
    {
      v57 |= 2u;
    }
    xxxSetWindowPos((struct tagWND *)a1, 0LL, (unsigned int)v8, v56, v53 + 6, v55 + 6, v57);
  }
  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v138);
  Win32HMOptionalThreadLockAlways<tagMENU>::~Win32HMOptionalThreadLockAlways<tagMENU>(&BugCheckParameter3);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v136);
  return ((unsigned __int16)v55 << 16) | (unsigned __int16)v53;
}
