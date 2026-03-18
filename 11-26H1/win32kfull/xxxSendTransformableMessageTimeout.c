/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x140036F84
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x140004EE4 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1400125F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140036F20 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     xxxScrollWindowEx @ 0x14003EEB4 (xxxScrollWindowEx.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1400865E0 (xxxPerformTargetingWithinPwnd.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1400895D8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x14008982C (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x14008D494 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     xxxBroadcastMessageEx @ 0x140092830 (xxxBroadcastMessageEx.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x14015AF74 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401B2498 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMessageEx @ 0x1401B82D0 (xxxSendMessageEx.c)
 *     xxxTranslateAccelerator @ 0x1401BA998 (xxxTranslateAccelerator.c)
 *     xxxSendHelpMessage @ 0x1401C7838 (xxxSendHelpMessage.c)
 *     ?xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z @ 0x1401C89A4 (-xxxSendPosMessage@@YAXPEAUtagWND@@IPEAUtagWINDOWPOS@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     xxxSendSizeMessage @ 0x1401D8A40 (xxxSendSizeMessage.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401F71E0 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x140220B3C (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxHandleNCMouseGuys @ 0x140220C94 (xxxHandleNCMouseGuys.c)
 *     xxxHandleWindowPosChanged @ 0x140224344 (xxxHandleWindowPosChanged.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x14022D518 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     xxxMNOpenHierarchy @ 0x14024D400 (xxxMNOpenHierarchy.c)
 *     ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z @ 0x14026A3E8 (-xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z @ 0x14027B320 (-xxxTM_MoveDragRect@@YAXPEAUMOVESIZEDATA@@_J@Z.c)
 *     ?xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14027BA68 (-xxxDestroyWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 *     ?xxxNextWindow@@YAXPEAUtagQ@@K@Z @ 0x14027CE6C (-xxxNextWindow@@YAXPEAUtagQ@@K@Z.c)
 *     ?xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1402A15BC (-xxxImmUnloadLayout@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxSendMessageFF @ 0x1402CE2E0 (xxxSendMessageFF.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1402F23D0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     _PostMessage @ 0x14001F780 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_HANDLEMANAGER@@@?$DomainShared@$$V@SharedUserCritOnly@@QEAA@XZ @ 0x1400378B8 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_HANDLEMANAGER@@@-$DomainShared@$$V@SharedUserCritOnly.c)
 *     FreeDelayedHooks @ 0x140037910 (FreeDelayedHooks.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@$$V@?$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ @ 0x140039FC0 (--0-$ObjectLock@$$V@-$DomainExclusive@$$V@-$DomainShared@VDLT_HOOK@@@SharedUserCritOnly@@QEAA@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline @ 0x14003ACCC (Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z @ 0x140046FE4 (-IsThreadHung@@YA_NPEBUtagTHREADINFO@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     IsMiPEnabledForWindow @ 0x140054BA0 (IsMiPEnabledForWindow.c)
 *     xxxBroadcastMessage @ 0x1400927F4 (xxxBroadcastMessage.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     _FreeGestureInfo @ 0x1401EDD90 (_FreeGestureInfo.c)
 *     _FreeTouchInputInfo @ 0x1401EE500 (_FreeTouchInputInfo.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401F7948 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     xxxDesktopWndProc @ 0x1401FFCC0 (xxxDesktopWndProc.c)
 *     ValidateDDEConvPair @ 0x140211B04 (ValidateDDEConvPair.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x140211B4C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z @ 0x14029723C (-Old_TrySmuggleHidData@@YAXPEAUtagTHREADINFO@@PEAUtagHIDDATA@@_N@Z.c)
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1402CC6E8 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z @ 0x1402CC930 (-NewConversation@@YAHPEAPEAUtagDDECONV@@0PEAUtagWND@@1@Z.c)
 *     xxxMessageEvent @ 0x1402EFAA8 (xxxMessageEvent.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagTHREADINFO **a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int SystemArgument1,
        __int64 *a7,
        unsigned int a8,
        int a9)
{
  __int64 v10; // r14
  __int64 *v12; // r12
  __int64 *v13; // rdi
  ULONG_PTR v14; // r13
  struct tagTHREADINFO *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 UserSessionState; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 *CurrentThreadWin32Thread; // rax
  __int64 v26; // rdx
  bool v27; // cl
  BOOL v28; // ecx
  bool v29; // cl
  int v30; // ecx
  __int64 v31; // rsi
  __int64 v33; // rcx
  int v34; // eax
  bool v35; // zf
  unsigned __int64 v36; // r13
  __int64 v37; // rcx
  __int64 v38; // rsi
  struct tagHIDDATA *v39; // rax
  unsigned int v40; // r15d
  struct tagWND *v41; // rax
  struct tagWND *v42; // r13
  struct tagDDECONV *DdeConv; // rax
  __int64 *v44; // rax
  char v45[8]; // [rsp+50h] [rbp-108h] BYREF
  unsigned __int64 LowLimit; // [rsp+58h] [rbp-100h] BYREF
  struct tagDDECONV *v47; // [rsp+60h] [rbp-F8h] BYREF
  __int64 v48; // [rsp+68h] [rbp-F0h]
  unsigned __int64 v49; // [rsp+70h] [rbp-E8h]
  __int64 v50; // [rsp+78h] [rbp-E0h] BYREF
  __int64 v51[2]; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v52; // [rsp+90h] [rbp-C8h]
  __int128 v53; // [rsp+A0h] [rbp-B8h]
  unsigned __int64 HighLimit; // [rsp+B0h] [rbp-A8h] BYREF
  int v55; // [rsp+B8h] [rbp-A0h]
  _QWORD v56[3]; // [rsp+C0h] [rbp-98h] BYREF
  _QWORD v57[2]; // [rsp+D8h] [rbp-80h] BYREF
  __int128 v58; // [rsp+E8h] [rbp-70h]
  __int128 v59; // [rsp+F8h] [rbp-60h]
  __int64 v60; // [rsp+108h] [rbp-50h]

  v48 = a4;
  v49 = a3;
  v10 = (unsigned int)a2;
  v12 = a7;
  v56[2] = a1;
  v13 = 0LL;
  v50 = 0LL;
  v56[0] = 0LL;
  *(_OWORD *)v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 == (struct tagTHREADINFO **)-1LL )
  {
    v40 = 0;
    if ( a7 )
    {
      v40 = 4;
      v51[0] = __PAIR64__(SystemArgument1, a5);
      v51[1] = (__int64)a7;
      v13 = v51;
    }
    return (int)xxxBroadcastMessage(-1, a2, v49, a4, v40, (union tagBROADCASTMSG *)v13, a8);
  }
  v14 = 0LL;
  v56[1] = 0LL;
  LOWORD(v15) = 0;
  if ( a1 )
    v15 = *a1;
  LODWORD(v47) = (unsigned __int16)v15;
  v55 = (unsigned __int16)v15;
  LowLimit = (unsigned __int16)v15;
  v17 = *(_QWORD *)(W32GetUserSessionState(a1, a2) + 19904);
  if ( (unsigned __int64)(unsigned __int16)v47 >= *(_QWORD *)(v17 + 8)
    || (UserSessionState = W32GetUserSessionState(v17, v16),
        v14 = *(_QWORD *)(UserSessionState + 19920)
            + (unsigned int)(*(_DWORD *)(W32GetUserSessionState(v20, v19) + 19928) * (_DWORD)v47),
        *(struct tagTHREADINFO ***)(*(_QWORD *)(W32GetUserSessionState(v22, v21) + 19864) + 40 * LowLimit) != a1)
    || *(_BYTE *)(v14 + 24) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v14, 1uLL);
  }
  if ( (unsigned int)(v10 - 992) > 8 )
  {
    if ( (unsigned int)(v10 - 577) <= 0xB || (unsigned int)(v10 - 590) <= 9 )
    {
      v35 = (_WORD)a3 == 1;
    }
    else
    {
      if ( (_DWORD)v10 != 528 || (_WORD)a3 != 582 )
      {
        v24 = 0LL;
LABEL_14:
        if ( (_DWORD)v24 && !(unsigned int)IsMiPEnabledForWindow(a1) )
        {
          LODWORD(v47) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1600LL);
          return 0LL;
        }
        goto LABEL_15;
      }
      v35 = WORD1(a3) == 1;
    }
    v24 = v35;
    goto LABEL_14;
  }
  v47 = 0LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(5 * LowLimit, v23) + 66680) & 0x2000000) != 0 )
  {
    v58 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    v57[0] = (unsigned __int16)v48;
    v57[1] = WORD1(v48);
    xxxMessageEvent((_DWORD)a1, v10, a3, v48, 0x2000000, (__int64)v57);
  }
  if ( *((_QWORD *)PtiCurrent(v33) + 57) != *((_QWORD *)a1[2] + 57) )
  {
    if ( (_DWORD)v10 == 996 )
    {
      v41 = (struct tagWND *)ValidateHwnd(a3);
      v42 = v41;
      if ( !v41 )
        return 0LL;
      DdeConv = FindDdeConv(v41, (struct tagWND *)a1);
      LowLimit = (unsigned __int64)DdeConv;
      if ( DdeConv )
      {
        AnticipatePost(DdeConv, xxxDupConvTerminate, 0LL, 0LL, 0LL, 0);
        PostMessage((int)v42, 993, (int)*a1, 0);
        return 0LL;
      }
      if ( !NewConversation(&v47, (struct tagDDECONV **)&LowLimit, (struct tagWND *)a1, v42) )
        return 0LL;
    }
    else if ( (_DWORD)v10 != 992 )
    {
      return 0LL;
    }
  }
  if ( (_DWORD)v10 == 992 && LODWORD(WPP_MAIN_CB.Dpc.SystemArgument1) )
  {
    a5 |= 2u;
    SystemArgument1 = (unsigned int)WPP_MAIN_CB.Dpc.SystemArgument1;
    v44 = v56;
    if ( a7 )
      v44 = a7;
    v12 = v44;
  }
  v34 = ValidateDDEConvPair(a3, a1);
  v24 = 1LL;
  if ( !v34 )
    v24 = a8;
  a8 = v24;
LABEL_15:
  CurrentThreadWin32Thread = (unsigned __int64 *)PsGetCurrentThreadWin32Thread(v24);
  if ( CurrentThreadWin32Thread )
    LowLimit = *CurrentThreadWin32Thread;
  else
    LowLimit = 0LL;
  if ( !(unsigned int)Feature_FixRawInputSendMessageForwarding__private_IsEnabledDeviceUsageNoInline()
    && (_DWORD)v10 == 255 )
  {
    LOBYTE(v26) = 18;
    v39 = (struct tagHIDDATA *)HMValidateHandleNoSecure(v48, v26);
    if ( v39 )
      Old_TrySmuggleHidData(a1[2], v39, 0);
  }
  if ( (struct tagTHREADINFO *)LowLimit == a1[2] )
  {
    SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v57);
    if ( (((unsigned __int8)*(_DWORD *)(LowLimit + 712) | *(_BYTE *)(**(_QWORD **)(LowLimit + 496) + 16LL)) & 0x20) != 0 )
    {
      if ( (_DWORD)v10 == 60 )
      {
        if ( (*((_BYTE *)a1[5] + 18) & 4) == 0 )
        {
          LODWORD(v47) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 81LL);
        }
        v27 = (*((_BYTE *)a1[5] + 18) & 4) != 0;
      }
      else
      {
        v27 = 0;
      }
      if ( !v27 )
      {
        v28 = (unsigned int)v10 < 0x400 && ((unsigned __int16)MessageTable[v10] >> 14) & 1;
        if ( !v28 && ((_DWORD)a1[48] & 0x40) == 0 )
        {
          *((_QWORD *)&v52 + 1) = *a1;
          LODWORD(v52) = v10;
          v51[1] = v49;
          v51[0] = v48;
          *(_QWORD *)&v53 = 0LL;
          xxxCallHook(0, 0LL, (__int64)v51, 4);
        }
      }
    }
    SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v57);
    FreeDelayedHooks();
    if ( (*((_BYTE *)a1[5] + 18) & 4) == 0 )
    {
      xxxSendMessageToClient((struct tagWND *)a1, v10, v49, v48, 0LL, 0, &v50);
      SharedUserCritOnly::DomainShared<DLT_HOOK>::DomainExclusive<>::ObjectLock<>::ObjectLock<>(v57);
      if ( ((*(_DWORD *)(LowLimit + 712) | *(_DWORD *)(**(_QWORD **)(LowLimit + 496) + 16LL)) & 0x2000) == 0 )
        goto LABEL_38;
      if ( (_DWORD)v10 == 60 )
      {
        if ( (*((_BYTE *)a1[5] + 18) & 4) == 0 )
        {
          LODWORD(v47) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 81LL);
        }
        v29 = (*((_BYTE *)a1[5] + 18) & 4) != 0;
      }
      else
      {
        v29 = 0;
      }
      if ( v29
        || ((unsigned int)v10 >= 0x400 ? (v30 = 0) : (v30 = ((unsigned __int16)MessageTable[v10] >> 14) & 1),
            v30 || ((_DWORD)a1[48] & 0x40) != 0) )
      {
LABEL_38:
        v31 = v48;
      }
      else
      {
        v53 = (unsigned __int64)*a1;
        DWORD2(v52) = v10;
        *(_QWORD *)&v52 = v49;
        v31 = v48;
        v51[1] = v48;
        v51[0] = v50;
        xxxCallHook(0, 0LL, (__int64)v51, 12);
      }
      SharedUserCritOnly::DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v57);
      FreeDelayedHooks();
      if ( (_DWORD)v10 == 576 )
      {
        FreeTouchInputInfo(v31, 1LL);
      }
      else if ( (_DWORD)v10 == 281 )
      {
        FreeGestureInfo(v31, 1LL);
      }
      if ( !v12 )
        return v50;
      goto LABEL_55;
    }
    HighLimit = 0LL;
    LowLimit = 0LL;
    IoGetStackLimits(&LowLimit, &HighLimit);
    if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
      return 0LL;
    v36 = *((_QWORD *)a1[5] + 15);
    if ( v36 >= 4 )
      return 0LL;
    xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired::xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired((xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired *)v45);
    v38 = ((__int64 (__fastcall *)(struct tagTHREADINFO **, _QWORD, unsigned __int64, __int64))(&gServerHandlers)[v36])(
            a1,
            (unsigned int)v10,
            v49,
            v48);
    v50 = v38;
    if ( v45[0] )
    {
      UserSessionSwitchLeaveCrit(v37);
      EnterSharedCrit(0LL, 1LL);
    }
    if ( v12 )
    {
LABEL_55:
      *v12 = v50;
      return 1LL;
    }
    return v38;
  }
  else if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
  {
    return xxxDefWindowProc((struct tagWND *)a1);
  }
  else
  {
    if ( v12 )
    {
      if ( (a5 & 2) != 0 && IsThreadHung(a1[2]) )
        return 0LL;
      LODWORD(v51[0]) = 2;
      *(_QWORD *)&v53 = __PAIR64__(SystemArgument1, a5);
      *((_QWORD *)&v53 + 1) = v12;
      v13 = v51;
    }
    return xxxInterSendMsgEx((struct tagWND *)a1, v10, 1, (__int64)a1[2], (__int64)v13, a8, a9);
  }
}
