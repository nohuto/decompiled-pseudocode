/*
 * XREFs of xxxWindowEvent @ 0x1C0070F10
 * Callers:
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C0008998 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxSwitchDesktop @ 0x1C0041C84 (xxxSwitchDesktop.c)
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     zzzReattachThreads @ 0x1C004392C (zzzReattachThreads.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C0045D90 (xxxSetForegroundWindow2.c)
 *     xxxSendFocusMessages @ 0x1C0046914 (xxxSendFocusMessages.c)
 *     xxxKeyEvent @ 0x1C00485C0 (xxxKeyEvent.c)
 *     xxxCapture @ 0x1C004F540 (xxxCapture.c)
 *     zzzUpdateLayeredWindow @ 0x1C0058F3C (zzzUpdateLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C005E828 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00665FC (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserNotifyWinEvent @ 0x1C0070E60 (NtUserNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCreateCaret @ 0x1C0077AD0 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0077F14 (zzzInternalDestroyCaret.c)
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 *     xxxDeactivate @ 0x1C007D9B8 (xxxDeactivate.c)
 *     xxxActivateThisWindow @ 0x1C007F264 (xxxActivateThisWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0080BA4 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00848E8 (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C0088250 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C0088BC8 (xxxFreeWindow.c)
 *     zzzUpdateCursorImage @ 0x1C00906F0 (zzzUpdateCursorImage.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0092654 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCalcClientRect @ 0x1C0094474 (xxxCalcClientRect.c)
 *     xxxSetScrollBar @ 0x1C00D55C0 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D59E4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMNStartMenu @ 0x1C0107794 (xxxMNStartMenu.c)
 *     xxxDCETrackCaptionButton @ 0x1C01082B0 (xxxDCETrackCaptionButton.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C010C838 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C010C8EC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C010CC10 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C010D008 (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C010DA10 (xxxSendMenuSelect.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117B2C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0117CEC (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0139D2C (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C013A750 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C013B2F0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01FFE60 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C0200BE4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0201158 (xxxCancelCoolSwitch.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0217754 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0231D4C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0231ED0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02321DC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02323CC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02336E4 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0233E70 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02387C8 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023C89C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C023CECC (xxxHelpLoop.c)
 *     ZapActiveAndFocus @ 0x1C0244700 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0071500 (xxxProcessNotifyWinEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
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
        if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x10000001) != 0 )
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
        v38 = *(_QWORD *)(v12 + 384);
        ThreadProcessId = PsGetThreadProcessId(v14);
        if ( (v10 & 0x20) != 0 )
          LODWORD(v34) = _InterlockedIncrement(&gcWinEvents);
        else
          v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v41[0] = *(_QWORD *)(gptiCurrent + 376LL);
        *(_QWORD *)(gptiCurrent + 376LL) = v41;
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
                && ((v22 & 4) == 0 || v38 != *(_QWORD *)(*(_QWORD *)(v21 + 16) + 384LL)) )
              {
                v28 = *(_DWORD *)(v21 + 56);
                if ( (!v28 || v28 == (_DWORD)v40) && ((v22 & 2) == 0 || v12 != *(_QWORD *)(v21 + 16)) )
                {
                  v29 = *(_QWORD *)(*(_QWORD *)(v21 + 16) + 416LL);
                  if ( v29 == *(_QWORD *)(v9 + 416) || a1 == 32 || v29 == *(_QWORD *)(v12 + 416) && a1 + 2147483646 <= 1 )
                  {
                    if ( (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v21
                                   + gSharedInfo[1]
                                   + 17LL) & 1) != 0 )
                      break;
                    if ( dword_1C0322C04 )
                    {
                      v30 = (_QWORD *)Win32AllocPool(64LL, 2037281621LL);
                      if ( !v30 )
                        break;
                    }
                    else
                    {
                      dword_1C0322C04 = 1;
                      v30 = &unk_1C03246E0;
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
