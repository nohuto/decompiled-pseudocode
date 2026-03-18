/*
 * XREFs of xxxSendTransformableMessageTimeout @ 0x1C0087910
 * Callers:
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C0079810 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C007A660 (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxSendMessageEx @ 0x1C0087E10 (xxxSendMessageEx.c)
 *     ?xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00887A0 (-xxxWrapSendMessage@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxTranslateAccelerator @ 0x1C0095174 (xxxTranslateAccelerator.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxFlashWindow @ 0x1C0096FE8 (xxxFlashWindow.c)
 *     xxxActivateApp @ 0x1C0099540 (xxxActivateApp.c)
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C009C938 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxShowWindowEx @ 0x1C009E4B4 (xxxShowWindowEx.c)
 *     xxxSetWindowStyle @ 0x1C00A1758 (xxxSetWindowStyle.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     xxxGetWindowSmIcon @ 0x1C00AB130 (xxxGetWindowSmIcon.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxGetScrollBarInfo @ 0x1C00AF75C (xxxGetScrollBarInfo.c)
 *     xxxGetMenuBarInfo @ 0x1C00B7F60 (xxxGetMenuBarInfo.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BB4F4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxEnableScrollBar @ 0x1C00FFF6C (xxxEnableScrollBar.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxMouseActivate @ 0x1C0109300 (xxxMouseActivate.c)
 *     xxxHandleWindowPosChanged @ 0x1C010B33C (xxxHandleWindowPosChanged.c)
 *     xxxSendSizeMessage @ 0x1C010B400 (xxxSendSizeMessage.c)
 *     xxxWindowHitTest2 @ 0x1C011807C (xxxWindowHitTest2.c)
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     xxxSendMinRectMessages @ 0x1C0120D8C (xxxSendMinRectMessages.c)
 *     ?xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z @ 0x1C0125804 (-xxxKeyboardCorrectionCallout@@YAIPEBUtagMSG@@U_QMSG_POSTCHAR_FLAGS@@@Z.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxGetComboBoxInfo @ 0x1C01462D4 (xxxGetComboBoxInfo.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z @ 0x1C0150D68 (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@QEAUtagMENU@@IQEAPEAUHMENU__@@@Z.c)
 *     xxxChangeClipboardChain @ 0x1C015224C (xxxChangeClipboardChain.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01523EC (xxxDWP_ProcessVirtKey.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0152EF0 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     xxxSendMessageFF @ 0x1C01589D0 (xxxSendMessageFF.c)
 *     ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01CE020 (-xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z.c)
 *     xxxMetricsRecalc @ 0x1C01CEDD8 (xxxMetricsRecalc.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01D9958 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 *     ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01D9B5C (-xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z.c)
 *     xxxImmUnloadLayout @ 0x1C01DA638 (xxxImmUnloadLayout.c)
 *     xxxRequestOutOfFullScreenMode @ 0x1C01E598C (xxxRequestOutOfFullScreenMode.c)
 *     ?xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01E64B4 (-xxxGetRenderData@@YAPEAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z @ 0x1C01F77B4 (-xxxDrawSwitchWndHilite@@YAXPEAUtagSwitchWndInfo@@PEAUHDC__@@HHH@Z.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxHandleNCMouseGuys @ 0x1C01F9BA4 (xxxHandleNCMouseGuys.c)
 *     ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C0201E1C (-xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z.c)
 *     ?xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z @ 0x1C02222E0 (-xxxSendNCHitTest@@YAXPEAUtagWND@@UtagPOINT@@1PEAU2@PEAHPEAUtagPNTRWINDOWHITTTESTARGS@@@Z.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C0222C80 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 *     xxxPerformTargetingWithinPwnd @ 0x1C0223A7C (xxxPerformTargetingWithinPwnd.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 *     xxxGetListBoxInfo @ 0x1C0233CE4 (xxxGetListBoxInfo.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C02342CC (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 *     xxxSendHelpMessage @ 0x1C02351A4 (xxxSendHelpMessage.c)
 * Callees:
 *     xxxPointerCallHook @ 0x1C000D47C (xxxPointerCallHook.c)
 *     xxxDefWindowProc @ 0x1C007CE70 (xxxDefWindowProc.c)
 *     xxxCallHook2 @ 0x1C0083C30 (xxxCallHook2.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0084C90 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00851A0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     xxxCallHook @ 0x1C00A3C90 (xxxCallHook.c)
 *     xxxBroadcastMessageEx @ 0x1C00AA034 (xxxBroadcastMessageEx.c)
 *     PhkNextValid @ 0x1C00EE6A8 (PhkNextValid.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 *     _FreeTouchInputInfo @ 0x1C01D48A0 (_FreeTouchInputInfo.c)
 *     ValidateDDEConvPair @ 0x1C01E2B94 (ValidateDDEConvPair.c)
 *     xxxDDETrackSendHook @ 0x1C01E3110 (xxxDDETrackSendHook.c)
 *     _FreeGestureInfo @ 0x1C01FB7F0 (_FreeGestureInfo.c)
 */

__int64 __fastcall xxxSendTransformableMessageTimeout(
        struct tagWND *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 *BugCheckParameter3,
        int a8,
        int a9)
{
  __int64 v9; // r11
  __int64 v10; // r10
  unsigned int v11; // esi
  __int64 *v13; // r15
  __int64 v14; // rdi
  ULONG_PTR v15; // r9
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // r13d
  _QWORD *v21; // r12
  _DWORD *v22; // r12
  int v23; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 result; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 Valid; // rcx
  __int64 v31; // rbx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rax
  int ThreadFreezeCount; // eax
  _DWORD *v36; // rcx
  int v37; // r9d
  __int64 *v38; // rax
  int v39; // eax
  __int64 v40; // [rsp+50h] [rbp-108h] BYREF
  int v41; // [rsp+58h] [rbp-100h]
  unsigned __int64 HighLimit; // [rsp+60h] [rbp-F8h] BYREF
  unsigned __int64 LowLimit; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v44[2]; // [rsp+70h] [rbp-E8h] BYREF
  unsigned int v45; // [rsp+80h] [rbp-D8h]
  __int64 v46; // [rsp+88h] [rbp-D0h]
  __int64 v47; // [rsp+90h] [rbp-C8h]
  _DWORD v48[2]; // [rsp+98h] [rbp-C0h] BYREF
  __int64 *v49; // [rsp+A0h] [rbp-B8h]
  _QWORD v50[3]; // [rsp+B0h] [rbp-A8h] BYREF
  unsigned int v51; // [rsp+C8h] [rbp-90h]
  __int64 v52; // [rsp+D0h] [rbp-88h]
  __int64 v53; // [rsp+D8h] [rbp-80h]
  char v54; // [rsp+E0h] [rbp-78h] BYREF
  _DWORD v55[10]; // [rsp+E8h] [rbp-70h] BYREF
  __int64 *v56; // [rsp+110h] [rbp-48h]
  int BugCheckParameter2; // [rsp+160h] [rbp+8h]
  int BugCheckParameter3a; // [rsp+190h] [rbp+38h]

  v9 = a4;
  v10 = a3;
  v11 = a2;
  v13 = BugCheckParameter3;
  v14 = 0LL;
  if ( BugCheckParameter3 )
    *BugCheckParameter3 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
  {
    v36 = 0LL;
    v37 = 0;
    if ( BugCheckParameter3 )
    {
      v37 = 4;
      v48[0] = a5;
      v48[1] = a6;
      v49 = BugCheckParameter3;
      v36 = v48;
    }
    return (int)xxxBroadcastMessageEx(0LL, a2, a3, v9, v37, v36, a8, 0);
  }
  v15 = 0LL;
  if ( a1 )
    v16 = *(_QWORD *)a1;
  else
    LOWORD(v16) = 0;
  v17 = (unsigned __int16)v16;
  v41 = (unsigned __int16)v16;
  if ( (unsigned __int64)(unsigned __int16)v16 >= *(_QWORD *)(gpsi + 8LL)
    || (v18 = gSharedInfo,
        v15 = *((_QWORD *)&gSharedInfo + 1) + (unsigned int)(unsigned __int16)v16 * *((_DWORD *)&gSharedInfo + 4),
        *(struct tagWND **)v15 != a1)
    || *(_BYTE *)(v15 + 16) != 1 )
  {
    KeBugCheckEx(0x197u, 1uLL, (ULONG_PTR)a1, v15, 1uLL);
  }
  if ( v11 - 992 <= 8 )
  {
    if ( !(unsigned int)xxxDDETrackSendHook(a1) )
      return 0LL;
    if ( v11 == 992 && (BugCheckParameter2 = guDdeSendTimeout) != 0 )
    {
      v38 = (__int64 *)&v54;
      if ( BugCheckParameter3 )
        v38 = BugCheckParameter3;
      v13 = v38;
      v20 = a5 | 2;
    }
    else
    {
      BugCheckParameter2 = a6;
      v20 = a5;
    }
    v39 = ValidateDDEConvPair(a3, a1);
    v19 = a8;
    v17 = 1LL;
    if ( v39 )
      v19 = 1;
    v18 = gSharedInfo;
    v10 = a3;
    v9 = a4;
  }
  else
  {
    v19 = a8;
    BugCheckParameter2 = a6;
    v20 = a5;
  }
  BugCheckParameter3a = v19;
  v21 = (_QWORD *)*((_QWORD *)a1 + 2);
  if ( (_QWORD *)gptiCurrent == v21 )
  {
    v28 = *(_QWORD *)(gptiCurrent + 416LL);
    v29 = (unsigned int)(*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(v28 + 24));
    if ( ((*(_BYTE *)(gptiCurrent + 600LL) | *(_BYTE *)(v28 + 24)) & 0x20) == 0 )
      goto LABEL_36;
    v46 = *(_QWORD *)a1;
    v45 = v11;
    v44[1] = v10;
    v44[0] = v9;
    v47 = 0LL;
    if ( v11 - 577 <= 0xB || v11 - 590 <= 9 )
    {
      if ( v11 != 595 )
      {
LABEL_78:
        xxxPointerCallHook(0, 0, (__int64)v44, 4u, 0);
LABEL_35:
        v9 = a4;
        v10 = a3;
LABEL_36:
        if ( (*((_BYTE *)a1 + 42) & 4) != 0 )
        {
          IoGetStackLimits(&LowLimit, &HighLimit);
          if ( (unsigned __int64)&HighLimit - LowLimit < 0x2000 )
            return 0LL;
          v34 = *((_QWORD *)a1 + 18);
          if ( v34 >= 7 )
            return 0LL;
          result = ((__int64 (__fastcall *)(struct tagWND *, _QWORD, __int64, __int64))*(&gServerHandlers + v34))(
                     a1,
                     v11,
                     a3,
                     a4);
          if ( !v13 )
            return result;
          *v13 = result;
        }
        else
        {
          xxxSendMessageToClient(a1, v11, v10, v9, 0LL, 0, &v40);
          if ( ((*(_DWORD *)(gptiCurrent + 600LL) | *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 24LL)) & 0x2000) != 0 )
          {
            v52 = *(_QWORD *)a1;
            v51 = v11;
            v50[2] = a3;
            v50[1] = a4;
            v31 = v40;
            v50[0] = v40;
            v53 = 0LL;
            xxxCallHook(0LL, 0LL, v50, 12LL);
          }
          else
          {
            v31 = v40;
          }
          if ( v11 == 576 )
          {
            FreeTouchInputInfo(a4, 1LL);
          }
          else if ( v11 == 281 )
          {
            FreeGestureInfo(a4, 1LL);
          }
          if ( !v13 )
            return v31;
          *v13 = v31;
        }
        return 1LL;
      }
    }
    else if ( v11 == 528 && (_WORD)v10 == 582 )
    {
      goto LABEL_78;
    }
    Valid = *(_QWORD *)(gptiCurrent + 832LL);
    if ( (Valid || (Valid = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 72LL)) != 0)
      && (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
    {
      Valid = PhkNextValid(Valid, v29, v18);
    }
    xxxCallHook2(Valid, 0, 0LL, (int *)v44, 0LL, 0);
    goto LABEL_35;
  }
  v40 = 0LL;
  if ( (*(_BYTE *)(*(_DWORD *)(v18 + 16) * (unsigned int)(unsigned __int16)*(_DWORD *)a1 + *(_QWORD *)(v18 + 8) + 17LL) & 1) != 0 )
    return xxxDefWindowProc(a1, v11, v10, v9);
  if ( v13 )
  {
    if ( (v20 & 2) != 0 )
    {
      v33 = v21[50];
      v17 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - *(_DWORD *)(v33 + 12);
      if ( (unsigned int)v17 > gdwHungAppTimeout && (*(_WORD *)(v33 + 10) & 0x1C07) == 0 )
      {
        ThreadFreezeCount = PsGetThreadFreezeCount(*v21);
        if ( !ThreadFreezeCount && (*(_DWORD *)(v21[47] + 12LL) & 0x40) == 0 )
          return 0LL;
      }
    }
    v55[0] = 2;
    v55[8] = v20;
    v55[9] = BugCheckParameter2;
    v56 = v13;
    v22 = v55;
  }
  else
  {
    v22 = (_DWORD *)v40;
  }
  v23 = 18;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v17, v18, v15);
  if ( ThreadWin32Thread )
    v14 = *ThreadWin32Thread;
  if ( v14 )
  {
    if ( *(_QWORD *)(v14 + 352) )
      CaptureAndValidateUserModeDpiAwarenessContext(v14);
    if ( *(_DWORD *)(v14 + 340) )
    {
      v23 = *(_DWORD *)(v14 + 340);
    }
    else
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v26, v25);
      if ( CurrentProcessWin32Process )
        v23 = *(_DWORD *)(CurrentProcessWin32Process + 280);
    }
  }
  return xxxInterSendMsgEx(
           (__int64)a1,
           v11,
           a3,
           a4,
           gptiCurrent,
           v23,
           *((_QWORD *)a1 + 2),
           v22,
           BugCheckParameter3a,
           a9);
}
