/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C0058D90
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0054270 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUDCE_WINDOW_HIT_TEST_ARGS.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0056A14 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     xxxSetWindowStyle @ 0x1C0058020 (xxxSetWindowStyle.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0058830 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxSendMessageEx @ 0x1C0058B30 (xxxSendMessageEx.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxGetMenuBarInfo @ 0x1C00740E0 (xxxGetMenuBarInfo.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxGetScrollBarInfo @ 0x1C00776D8 (xxxGetScrollBarInfo.c)
 *     xxxShowWindowEx @ 0x1C00794D0 (xxxShowWindowEx.c)
 *     xxxGetWindowSmIcon @ 0x1C007EE70 (xxxGetWindowSmIcon.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C008E100 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxTranslateAccelerator @ 0x1C0092F94 (xxxTranslateAccelerator.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     xxxWindowHitTest2 @ 0x1C00962A0 (xxxWindowHitTest2.c)
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00C6534 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxFlashWindow @ 0x1C00C6ACC (xxxFlashWindow.c)
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     xxxMouseActivate @ 0x1C00E95C4 (xxxMouseActivate.c)
 *     xxxActivateApp @ 0x1C00EBFD0 (xxxActivateApp.c)
 *     xxxHandleWindowPosChanged @ 0x1C00EC0A4 (xxxHandleWindowPosChanged.c)
 *     xxxSendSizeMessage @ 0x1C00EC168 (xxxSendSizeMessage.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C00FC6FC (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSendMinRectMessages @ 0x1C00FF20C (xxxSendMinRectMessages.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxGetComboBoxInfo @ 0x1C013EA10 (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C014BEE8 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C014CC7C (xxxChangeClipboardChain.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C014CE1C (xxxDWP_ProcessVirtKey.c)
 *     xxxEnableScrollBar @ 0x1C014D0EC (xxxEnableScrollBar.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C014D784 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMessageFF @ 0x1C0150ED0 (xxxSendMessageFF.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01D716C (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01D7D60 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01E3094 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01E3298 (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01E3D88 (xxxImmUnloadLayout.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01EFC4C (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01F0774 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01FF50C (-DrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C0201554 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C0202890 (xxxHandleNCMouseGuys.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020AD20 (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C022C5F8 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CF48 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C022DD08 (xxxPerformTargetingWithinPwnd.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 *     xxxGetListBoxInfo @ 0x1C023C344 (xxxGetListBoxInfo.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C023C8CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 *     xxxSendHelpMessage @ 0x1C023D7CC (xxxSendHelpMessage.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000B9B8 (xxxPointerCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C0059200 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxCallHook2 @ 0x1C005BCC0 (xxxCallHook2.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     xxxDefWindowProc @ 0x1C006F890 (xxxDefWindowProc.c)
 *     xxxBroadcastMessageEx @ 0x1C0075B18 (xxxBroadcastMessageEx.c)
 *     xxxCallHook @ 0x1C00843C8 (xxxCallHook.c)
 *     PhkNextValid @ 0x1C0084AA4 (PhkNextValid.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01DCFC0 (_FreeTouchInputInfo.c)
 *     ValidateDDEConvPair @ 0x1C01EC014 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01EC584 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C02044A0 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagWND *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *a7,
        int a8,
        int a9)
{
  __int64 *v9; // rdi
  _DWORD *v10; // r14
  unsigned int v13; // ebx
  _DWORD *v15; // rcx
  int v16; // r9d
  __int64 result; // rax
  __int64 *v18; // rax
  int v19; // r13d
  int v20; // eax
  int v21; // ecx
  _QWORD *v22; // r9
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r13
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-A0h]
  unsigned __int64 HighLimit; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v32[2]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v33; // [rsp+88h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-70h]
  __int64 v35; // [rsp+98h] [rbp-68h]
  _DWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v37; // [rsp+A8h] [rbp-58h]
  _QWORD v38[3]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v39; // [rsp+D0h] [rbp-30h]
  __int64 v40; // [rsp+D8h] [rbp-28h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  char v42; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v43[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 *v44; // [rsp+118h] [rbp+18h]
  int v45; // [rsp+150h] [rbp+50h]
  int v46; // [rsp+180h] [rbp+80h]

  v9 = a7;
  v10 = 0LL;
  v13 = a2;
  if ( a7 )
    *a7 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
  {
    v15 = 0LL;
    v16 = 0;
    if ( a7 )
    {
      v15 = v36;
      v36[0] = a5;
      v16 = 4;
      v36[1] = a6;
      v37 = a7;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, a4, v16, v15, a8, 0);
  }
  if ( (unsigned int)(a2 - 992) > 8 )
  {
    v19 = a5;
    v45 = a8;
    v46 = a6;
  }
  else
  {
    if ( !(unsigned int)xxxDDETrackSendHook(a1) )
      return 0LL;
    if ( v13 == 992 && (v46 = guDdeSendTimeout) != 0 )
    {
      v18 = (__int64 *)&v42;
      if ( v9 )
        v18 = v9;
      v19 = a5 | 2;
      v9 = v18;
    }
    else
    {
      v19 = a5;
      v46 = a6;
    }
    v20 = ValidateDDEConvPair(a3, a1);
    v21 = a8;
    if ( v20 )
      v21 = 1;
    v45 = v21;
  }
  v22 = (_QWORD *)*((_QWORD *)a1 + 2);
  v29 = v22;
  v23 = gptiCurrent;
  if ( (_QWORD *)gptiCurrent != v22 )
  {
    if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)a1
                   + *((_QWORD *)&gSharedInfo + 1)
                   + 17LL) & 1) != 0 )
      return xxxDefWindowProc(a1);
    if ( !v9 )
      return xxxInterSendMsgEx((_DWORD)a1, v13, a3, a4, v23, *((_QWORD *)a1 + 2), (__int64)v10, v45, a9);
    if ( (v19 & 2) == 0
      || (v24 = v22[50],
          (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
        - *(_DWORD *)(v24 + 12) <= gdwHungAppTimeout)
      || (*(_WORD *)(v24 + 10) & 0x1C07) != 0 )
    {
LABEL_29:
      v10 = v43;
      v43[9] = v46;
      v43[0] = 2;
      v43[8] = v19;
      v44 = v9;
      return xxxInterSendMsgEx((_DWORD)a1, v13, a3, a4, v23, *((_QWORD *)a1 + 2), (__int64)v10, v45, a9);
    }
    if ( (unsigned int)PsGetThreadFreezeCount(*v22) || (*(_DWORD *)(v29[47] + 12LL) & 0x40) != 0 )
    {
      v23 = gptiCurrent;
      goto LABEL_29;
    }
    return 0LL;
  }
  if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x20) != 0 )
  {
    v34 = *(_QWORD *)a1;
    v33 = v13;
    v32[1] = a3;
    v32[0] = a4;
    v35 = 0LL;
    if ( v13 - 577 > 3 && (v13 - 581 > 0x12 || v13 == 589) )
    {
      if ( v13 != 528 || (_WORD)a3 != 582 )
      {
LABEL_37:
        v25 = *(_QWORD *)(gptiCurrent + 824LL);
        if ( (v25 || (v25 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
          && (*(_DWORD *)(v25 + 64) & 0x80u) != 0 )
        {
          LODWORD(v25) = PhkNextValid();
        }
        xxxCallHook2(v25, 0, 0, (unsigned int)v32, 0LL);
        goto LABEL_42;
      }
    }
    else if ( v13 == 595 )
    {
      goto LABEL_37;
    }
    xxxPointerCallHook(0, 0, (__int64)v32, 4u, 0);
  }
LABEL_42:
  if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
  {
    IoGetStackLimits(&LowLimit, &HighLimit);
    if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
      return 0LL;
    v26 = *((_QWORD *)a1 + 18);
    if ( v26 >= 7 )
      return 0LL;
    result = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, unsigned __int64, __int64))*(&gServerHandlers + v26))(
               a1,
               v13,
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
    xxxSendMessageToClient(a1, v13, a3, a4, 0LL, 0, &v28);
    v27 = v28;
    if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x2000) != 0 )
    {
      v40 = *(_QWORD *)a1;
      v39 = v13;
      v38[2] = a3;
      v38[1] = a4;
      v38[0] = v28;
      v41 = 0LL;
      xxxCallHook(0LL, 0LL, v38);
    }
    if ( v13 == 576 )
    {
      FreeTouchInputInfo(a4, 1LL);
    }
    else if ( v13 == 281 )
    {
      FreeGestureInfo(a4, 1LL);
    }
    if ( v9 )
    {
      *v9 = v27;
      return 1LL;
    }
    else
    {
      return v27;
    }
  }
  return result;
}
