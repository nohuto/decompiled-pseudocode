/*
 * XREFs of xxxWindowEvent @ 0x1C00608D0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 *     zzzUpdateCursorImage @ 0x1C0053910 (zzzUpdateCursorImage.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0054A5C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserNotifyWinEvent @ 0x1C0060820 (NtUserNotifyWinEvent.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006C148 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0071278 (xxxCalcClientRect.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00747C4 (zzzSetWindowCompositionCloak.c)
 *     xxxSendFocusMessages @ 0x1C0080EB8 (xxxSendFocusMessages.c)
 *     xxxKeyEvent @ 0x1C008345C (xxxKeyEvent.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     zzzReattachThreads @ 0x1C008B6B4 (zzzReattachThreads.c)
 *     xxxDeactivate @ 0x1C008C738 (xxxDeactivate.c)
 *     xxxSetForegroundWindow2 @ 0x1C008D958 (xxxSetForegroundWindow2.c)
 *     xxxCapture @ 0x1C008E5F8 (xxxCapture.c)
 *     xxxActivateThisWindow @ 0x1C008E8B8 (xxxActivateThisWindow.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSwitchDesktop @ 0x1C0093754 (xxxSwitchDesktop.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0097694 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0098598 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0099BB8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     xxxCreateCaret @ 0x1C00C6E54 (xxxCreateCaret.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     zzzInternalDestroyCaret @ 0x1C00CA2FC (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 *     xxxSetScrollBar @ 0x1C00CA7B4 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00CABF0 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 *     xxxDCETrackCaptionButton @ 0x1C00CDE6C (xxxDCETrackCaptionButton.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00DB8C0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C00F852C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 *     xxxMNOpenHierarchy @ 0x1C0133768 (xxxMNOpenHierarchy.c)
 *     xxxMNStartMenu @ 0x1C01347DC (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C0138524 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C01385D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0138900 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0138CE0 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0139480 (xxxSendMenuSelect.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C0200250 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200F84 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C02014FC (xxxCancelCoolSwitch.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C02083DC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C02175B8 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C023217C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0232300 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C023260C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02327FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0233B14 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0238BDC (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023CA6C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023D09C (xxxHelpLoop.c)
 *     ZapActiveAndFocus @ 0x1C0244890 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0060EC0 (xxxProcessNotifyWinEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0152950 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWindowEvent(unsigned int a1, __int64 *a2, int a3, int a4, int a5)
{
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // r12d
  __int64 v11; // rbp
  __int64 v12; // r13
  HANDLE ThreadId; // rax
  struct _KTHREAD *v14; // rcx
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v18; // rcx
  unsigned int v19; // ebx
  int v20; // edx
  __int64 v21; // rbx
  int v22; // ecx
  __int64 v23; // rdi
  __int64 *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  HANDLE v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  _QWORD *v30; // r14
  __int64 v31; // rax
  unsigned __int8 v32; // al
  int v33; // eax
  unsigned __int64 v34; // [rsp+28h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-88h] BYREF
  __int64 v36; // [rsp+38h] [rbp-80h]
  void (*v37)(void); // [rsp+40h] [rbp-78h]
  __int64 v38; // [rsp+48h] [rbp-70h]
  HANDLE ThreadProcessId; // [rsp+50h] [rbp-68h]
  HANDLE v40; // [rsp+58h] [rbp-60h]
  _QWORD v41[4]; // [rsp+60h] [rbp-58h] BYREF

  if ( a1 < 0x8005 && a1 >= 0x4008 )
    goto LABEL_3;
  if ( a1 > 0x800E )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
      {
        v7 = 512;
        goto LABEL_4;
      }
      if ( a1 > 0x80000007 )
        goto LABEL_3;
    }
    else if ( a1 < 0x80000000 && (a1 < 0x7FFFFF10 || a1 != 2147483440 && a1 > 0x7FFFFF12 && a1 != 2147483424) )
    {
      goto LABEL_3;
    }
    v7 = 256;
    goto LABEL_4;
  }
  if ( a1 == 32782 )
  {
    v7 = 16;
    goto LABEL_4;
  }
  if ( a1 <= 0x800A )
  {
    if ( a1 == 32778 )
    {
      v7 = 32;
      goto LABEL_4;
    }
    if ( a1 >= 4 )
    {
      if ( a1 <= 7 )
      {
        v7 = 1;
        goto LABEL_4;
      }
      if ( a1 > 0x4000 )
      {
        if ( a1 <= 0x4007 )
        {
          v7 = 2;
          goto LABEL_4;
        }
        if ( a1 == 32773 )
        {
          v7 = 4;
          goto LABEL_4;
        }
      }
    }
  }
  else
  {
    if ( a1 == 32779 )
    {
      v7 = 64;
      goto LABEL_4;
    }
    if ( a1 == 32780 )
    {
      v7 = 8;
      goto LABEL_4;
    }
  }
LABEL_3:
  v7 = 0x8000;
LABEL_4:
  result = gpsi;
  if ( (v7 & *(_DWORD *)(gpsi + 1876LL)) != 0 )
  {
    result = gptiCurrent;
    v9 = gptiCurrent;
    if ( gptiCurrent )
    {
      v10 = a5;
      if ( (a5 & 0x11) == 0x11 || !a2 || (result = *((unsigned __int8 *)a2 + 43), (result & 0x80u) == 0LL) )
      {
        if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10000001) != 0 )
          v10 = a5 | 2;
        v11 = 0LL;
        if ( (v10 & 1) != 0 && a2 )
        {
          v12 = a2[2];
          if ( (v10 & 0x10) != 0 )
            a2 = 0LL;
        }
        else
        {
          v12 = gptiCurrent;
        }
        ThreadId = PsGetThreadId(*(PETHREAD *)v12);
        v14 = *(struct _KTHREAD **)v12;
        v40 = ThreadId;
        v38 = *(_QWORD *)(v12 + 376);
        ThreadProcessId = PsGetThreadProcessId(v14);
        if ( (v10 & 0x20) != 0 )
          LODWORD(v34) = _InterlockedIncrement(&gcWinEvents);
        else
          v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v41[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v41;
        v41[1] = a2;
        if ( a2 )
          ++*((_DWORD *)a2 + 2);
        v15 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( ThreadWin32Thread )
          v15 = *ThreadWin32Thread;
        v35 = *(_QWORD *)(v15 + 16);
        *(_QWORD *)(v15 + 16) = &v35;
        v37 = (void (*)(void))DereferenceW32Thread;
        v36 = v12;
        ObfReferenceObject(*(PVOID *)v12);
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        _InterlockedIncrement64((volatile signed __int64 *)(v12 + 344));
        if ( (v10 & 2) == 0 )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          v18 = gpPendingNotifies;
          v19 = CurrentThreadId;
          while ( v18 )
          {
            v20 = *((_DWORD *)v18 + 12);
            if ( (v20 & 2) != 0 && *((_DWORD *)v18 + 10) == v19 )
            {
              *((_DWORD *)v18 + 12) = v20 & 0xFFFFFFFD;
              ((void (*)(void))xxxProcessNotifyWinEvent)();
              v18 = gpPendingNotifies;
            }
            else
            {
              v18 = (struct tagNOTIFY **)*v18;
            }
          }
        }
        v21 = gpWinEventHooks;
        if ( gpWinEventHooks )
        {
          do
          {
            v22 = *(_DWORD *)(v21 + 40);
            v23 = *(_QWORD *)(v21 + 24);
            if ( (v22 & 1) == 0 && *(_DWORD *)(v21 + 32) <= a1 && a1 <= *(_DWORD *)(v21 + 36) )
            {
              v27 = *(HANDLE *)(v21 + 48);
              if ( (!v27 || v27 == ThreadProcessId)
                && ((v22 & 4) == 0 || v38 != *(_QWORD *)(*(_QWORD *)(v21 + 16) + 376LL)) )
              {
                v28 = *(_DWORD *)(v21 + 56);
                if ( (!v28 || v28 == (_DWORD)v40) && ((v22 & 2) == 0 || v12 != *(_QWORD *)(v21 + 16)) )
                {
                  v29 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 408LL);
                  if ( v29 == *(_QWORD *)(v9 + 408) || a1 == 32 || v29 == *(_QWORD *)(v12 + 408) && a1 + 2147483646 <= 1 )
                  {
                    if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v21
                                   + *((_QWORD *)&gSharedInfo + 1)
                                   + 17LL) & 1) != 0 )
                      break;
                    if ( dword_1C03234F0 )
                    {
                      v30 = (_QWORD *)Win32AllocPool(64LL);
                      if ( !v30 )
                        break;
                    }
                    else
                    {
                      dword_1C03234F0 = 1;
                      v30 = &unk_1C03277A0;
                    }
                    v30[1] = 0LL;
                    HMAssignmentLock(v30 + 1, v21);
                    if ( a2 )
                      v31 = *a2;
                    else
                      v31 = 0LL;
                    v30[3] = v31;
                    *((_DWORD *)v30 + 8) = a3;
                    *((_DWORD *)v30 + 9) = a4;
                    *((_DWORD *)v30 + 4) = a1;
                    *((_DWORD *)v30 + 10) = (unsigned int)PsGetThreadId(*(PETHREAD *)v12);
                    *((_DWORD *)v30 + 11) = v34;
                    v32 = ~*(_BYTE *)(v21 + 40);
                    *v30 = 0LL;
                    v30[7] = 0LL;
                    *((_DWORD *)v30 + 12) = (v32 >> 1) & 4;
                    if ( (*(_DWORD *)(v21 + 40) & 8) != 0
                      && a1 + 2147483646 <= 3
                      && *(_QWORD *)(v21 + 16) != gptiCurrent )
                    {
                      *((_DWORD *)v30 + 12) = 4;
                    }
                    if ( gpPendingNotifies )
                      *(_QWORD *)gpLastPendingNotify = v30;
                    else
                      gpPendingNotifies = (struct tagNOTIFY **)v30;
                    *((_DWORD *)v30 + 12) |= v10;
                    v33 = *((_DWORD *)v30 + 12);
                    gpLastPendingNotify = (__int64)v30;
                    if ( (v33 & 4) != 0 )
                      *((_DWORD *)v30 + 12) = v33 & 0xFFFFFFFD;
                    if ( (v30[6] & 2) == 0 )
                      v23 = xxxProcessNotifyWinEvent(v30);
                    v9 = gptiCurrent;
                  }
                }
              }
            }
            v21 = v23;
          }
          while ( v23 );
        }
        v24 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v24 )
          v11 = *v24;
        *(_QWORD *)(v11 + 16) = v35;
        v26 = v36;
        if ( v36 )
          v37();
        return ThreadUnlock1(v26, v25);
      }
    }
  }
  return result;
}
