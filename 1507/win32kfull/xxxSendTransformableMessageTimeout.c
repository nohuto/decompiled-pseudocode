/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C0069380
 * Callers:
 *     xxxMouseActivate @ 0x1C0040CEC (xxxMouseActivate.c)
 *     xxxTranslateAccelerator @ 0x1C00414D0 (xxxTranslateAccelerator.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C004E3B8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C00656F0 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0066D0C (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSetWindowStyle @ 0x1C0068470 (xxxSetWindowStyle.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0068CB0 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessageEx @ 0x1C0069230 (xxxSendMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C007750C (xxxDWP_ProcessVirtKey.c)
 *     xxxFlashWindow @ 0x1C00776EC (xxxFlashWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C007E1EC (xxxGetWindowSmIcon.c)
 *     xxxShowWindow @ 0x1C0081A78 (xxxShowWindow.c)
 *     xxxGetMenuBarInfo @ 0x1C00856C0 (xxxGetMenuBarInfo.c)
 *     xxxGetScrollBarInfo @ 0x1C00876E8 (xxxGetScrollBarInfo.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     xxxWindowHitTest2 @ 0x1C00DF44C (xxxWindowHitTest2.c)
 *     xxxActivateApp @ 0x1C00E4A30 (xxxActivateApp.c)
 *     xxxHandleWindowPosChanged @ 0x1C00E56F4 (xxxHandleWindowPosChanged.c)
 *     xxxSendSizeMessage @ 0x1C00E57B8 (xxxSendSizeMessage.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00F7FE8 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C00F95D8 (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C0107B34 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxScrollWindowEx @ 0x1C0112924 (xxxScrollWindowEx.c)
 *     xxxGetComboBoxInfo @ 0x1C011397C (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C01221C8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C0123C68 (xxxChangeClipboardChain.c)
 *     xxxEnableScrollBar @ 0x1C0124078 (xxxEnableScrollBar.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01247E4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 *     xxxSendMessageFF @ 0x1C015B780 (xxxSendMessageFF.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D55C4 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01D61DC (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E2C04 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E2E08 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01E38F8 (xxxImmUnloadLayout.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01EFC4C (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01F0810 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FFBA8 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C02011B0 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C02024F4 (xxxHandleNCMouseGuys.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0215A48 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C2F4 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CC44 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022D8DC (xxxPerformTargetingWithinPwnd.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 *     xxxGetListBoxInfo @ 0x1C023C174 (xxxGetListBoxInfo.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C6FC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 *     xxxSendHelpMessage @ 0x1C023D5FC (xxxSendHelpMessage.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C0008204 (xxxPointerCallHook.c)
 *     xxxCallHook @ 0x1C004A204 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C004A350 (PhkNextValid.c)
 *     xxxBroadcastMessageEx @ 0x1C004D864 (xxxBroadcastMessageEx.c)
 *     xxxDefWindowProc @ 0x1C0063B30 (xxxDefWindowProc.c)
 *     xxxCallHook2 @ 0x1C006C0B0 (xxxCallHook2.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C006D340 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01DC920 (_FreeTouchInputInfo.c)
 *     ValidateDDEConvPair @ 0x1C01EBAF4 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01EC060 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C0204130 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagWND *a1,
        unsigned int a2,
        unsigned __int64 a3,
        struct _LARGE_STRING *a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *v9; // rdi
  _DWORD *v10; // r14
  union tagBROADCASTMSG *v15; // rcx
  unsigned int v16; // r9d
  __int64 result; // rax
  __int64 v18; // r8
  __int64 *v19; // rax
  int v20; // r13d
  int v21; // eax
  int v22; // ecx
  _QWORD *v23; // r9
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // r13
  __int64 v29; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v30; // [rsp+60h] [rbp-A0h]
  unsigned __int64 HighLimit; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v33[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h]
  _DWORD v37[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v38; // [rsp+A8h] [rbp-58h]
  _QWORD v39[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+D8h] [rbp-28h]
  __int64 v42; // [rsp+E0h] [rbp-20h]
  char v43; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v44[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v45; // [rsp+118h] [rbp+18h]
  int v46; // [rsp+150h] [rbp+50h]
  int v47; // [rsp+180h] [rbp+80h]

  v9 = a7;
  v10 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
  {
    v15 = 0LL;
    v16 = 0;
    if ( a7 )
    {
      v15 = (union tagBROADCASTMSG *)v37;
      v37[0] = a5;
      v16 = 4;
      v37[1] = a6;
      v38 = a7;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v16, v15, a8, 0);
  }
  if ( a2 - 992 > 8 )
  {
    v20 = a5;
    v46 = a8;
    v47 = a6;
  }
  else
  {
    if ( !(unsigned int)xxxDDETrackSendHook(a1) )
      return 0LL;
    if ( a2 == 992 && (v47 = guDdeSendTimeout) != 0 )
    {
      v19 = (__int64 *)&v43;
      if ( v9 )
        v19 = v9;
      v20 = a5 | 2;
      v9 = v19;
    }
    else
    {
      v20 = a5;
      v47 = a6;
    }
    v21 = ValidateDDEConvPair(a3, a1, v18);
    v22 = a8;
    if ( v21 )
      v22 = 1;
    v46 = v22;
  }
  v23 = (_QWORD *)*((_QWORD *)a1 + 2);
  v30 = v23;
  v24 = gptiCurrent;
  if ( (_QWORD *)gptiCurrent != v23 )
  {
    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + gSharedInfo[1] + 17LL) & 1) != 0 )
      return xxxDefWindowProc(a1, a2, a3, (__int64)a4);
    if ( !v9 )
      return xxxInterSendMsgEx((_DWORD)a1, a2, a3, (_DWORD)a4, v24, *((_QWORD *)a1 + 2), (__int64)v10, v46, a9);
    if ( (v20 & 2) == 0
      || (v25 = v23[51],
          (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - *(_DWORD *)(v25 + 12) <= gdwHungAppTimeout)
      || (*(_WORD *)(v25 + 10) & 0x1C07) != 0 )
    {
LABEL_29:
      v10 = v44;
      v44[9] = v47;
      v44[0] = 2;
      v44[8] = v20;
      v45 = v9;
      return xxxInterSendMsgEx((_DWORD)a1, a2, a3, (_DWORD)a4, v24, *((_QWORD *)a1 + 2), (__int64)v10, v46, a9);
    }
    if ( (unsigned int)PsGetThreadFreezeCount(*v23) || (*(_DWORD *)(v30[48] + 12LL) & 0x40) != 0 )
    {
      v24 = gptiCurrent;
      goto LABEL_29;
    }
    return 0LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 608LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x20) != 0 )
  {
    v35 = *(_QWORD *)a1;
    v34 = a2;
    v33[1] = a3;
    v33[0] = a4;
    v36 = 0LL;
    if ( a2 - 577 > 3 && (a2 - 581 > 0x12 || a2 == 589) )
    {
      if ( a2 != 528 || (_WORD)a3 != 582 )
      {
LABEL_37:
        v26 = *(_QWORD *)(gptiCurrent + 832LL);
        if ( (v26 || (v26 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 72LL)) != 0)
          && (*(_DWORD *)(v26 + 64) & 0x80u) != 0 )
        {
          LODWORD(v26) = PhkNextValid(v26);
        }
        xxxCallHook2(v26, 0, 0, (unsigned int)v33, 0LL);
        goto LABEL_42;
      }
    }
    else if ( a2 == 595 )
    {
      goto LABEL_37;
    }
    xxxPointerCallHook(0, 0, (__int64)v33, 4u, 0);
  }
LABEL_42:
  if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
      return 0LL;
    v27 = *((_QWORD *)a1 + 18);
    if ( v27 >= 7 )
      return 0LL;
    result = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, struct _LARGE_STRING *))*(&gServerHandlers + v27))(
               a1,
               a2,
               a3,
               a4);
    if ( v9 )
    {
      *v9 = result;
      return 1LL;
    }
  }
  else
  {
    xxxSendMessageToClient(a1, a2, a3, (__int64)a4, 0LL, 0, &v29);
    v28 = v29;
    if ( ((*(_DWORD *)(gptiCurrent + 608LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 24LL)) & 0x2000) != 0 )
    {
      v41 = *(_QWORD *)a1;
      v40 = a2;
      v39[2] = a3;
      v39[1] = a4;
      v39[0] = v29;
      v42 = 0LL;
      xxxCallHook(0, 0, (__int64)v39, 0xCu);
    }
    if ( a2 == 576 )
    {
      FreeTouchInputInfo(a4, 1LL);
    }
    else if ( a2 == 281 )
    {
      FreeGestureInfo(a4, 1LL);
    }
    if ( v9 )
    {
      *v9 = v28;
      return 1LL;
    }
    else
    {
      return v28;
    }
  }
  return result;
}
