/*
 * XREFs of xxxWindowEvent @ 0x1C0087F70
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     zzzUpdateCursorImage @ 0x1C005C620 (zzzUpdateCursorImage.c)
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006CB00 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCalcClientRect @ 0x1C006D964 (xxxCalcClientRect.c)
 *     xxxDestroyWindow @ 0x1C0071700 (xxxDestroyWindow.c)
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0079418 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     NtUserNotifyWinEvent @ 0x1C0088910 (NtUserNotifyWinEvent.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSwitchDesktop @ 0x1C0095924 (xxxSwitchDesktop.c)
 *     xxxDeactivate @ 0x1C0098E24 (xxxDeactivate.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C009B08C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxActivateThisWindow @ 0x1C009BBAC (xxxActivateThisWindow.c)
 *     xxxSetForegroundWindow2 @ 0x1C009D654 (xxxSetForegroundWindow2.c)
 *     xxxKeyEvent @ 0x1C00A2818 (xxxKeyEvent.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00A5D80 (zzzSetWindowCompositionCloak.c)
 *     xxxSendFocusMessages @ 0x1C00A85CC (xxxSendFocusMessages.c)
 *     xxxCapture @ 0x1C00AACF4 (xxxCapture.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 *     xxxSetScrollBar @ 0x1C00ACED4 (xxxSetScrollBar.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BB630 (xxxDCETrackCaptionButton.c)
 *     zzzReattachThreads @ 0x1C00DB9C8 (zzzReattachThreads.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00E7090 (xxxInternalActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C00E84C0 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C00F96D4 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00FFF8C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     xxxCreateCaret @ 0x1C0122D94 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0123150 (zzzInternalDestroyCaret.c)
 *     xxxMNStartMenu @ 0x1C013B778 (xxxMNStartMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C013C724 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxMNCancel @ 0x1C013C7D8 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C013CBF0 (xxxMNCloseHierarchy.c)
 *     xxxMNSelectItem @ 0x1C013EEDC (xxxMNSelectItem.c)
 *     xxxSendMenuSelect @ 0x1C0140374 (xxxSendMenuSelect.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01485F0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0148844 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F7A6C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F82AC (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C01F8800 (xxxCancelCoolSwitch.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FF724 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxMoveSize @ 0x1C0204D60 (xxxMoveSize.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0210154 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C022AF3C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C022B0C0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022B3CC (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C022B5BC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C022C684 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0230C3C (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C023446C (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0234AF4 (xxxHelpLoop.c)
 *     ZapActiveAndFocus @ 0x1C023A7E0 (ZapActiveAndFocus.c)
 * Callees:
 *     xxxProcessNotifyWinEvent @ 0x1C0085350 (xxxProcessNotifyWinEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C015A020 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxWindowEvent(unsigned int a1, __int64 *a2, int a3, int a4, int a5)
{
  int v7; // edx
  __int64 result; // rax
  __int64 v9; // r14
  int v10; // ebp
  __int64 v11; // r13
  __int64 v12; // r12
  HANDLE ThreadId; // rax
  struct _KTHREAD *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v24; // rcx
  unsigned int v25; // ebx
  LARGE_INTEGER *v26; // rbx
  DWORD LowPart; // ecx
  LARGE_INTEGER v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  HANDLE QuadPart; // rax
  DWORD v33; // eax
  __int64 v34; // rcx
  _QWORD *v35; // r14
  __int64 v36; // rax
  unsigned __int8 v37; // al
  int v38; // eax
  __int64 v39; // rdx
  unsigned __int64 v40; // [rsp+20h] [rbp-98h]
  __int64 v41; // [rsp+30h] [rbp-88h] BYREF
  __int64 v42; // [rsp+38h] [rbp-80h]
  void (*v43)(void); // [rsp+40h] [rbp-78h]
  HANDLE ThreadProcessId; // [rsp+48h] [rbp-70h]
  __int64 v45; // [rsp+50h] [rbp-68h]
  HANDLE v46; // [rsp+58h] [rbp-60h]
  _QWORD v47[4]; // [rsp+60h] [rbp-58h] BYREF

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
        v46 = ThreadId;
        v45 = *(_QWORD *)(v12 + 376);
        ThreadProcessId = PsGetThreadProcessId(v14);
        if ( (v10 & 0x20) != 0 )
          LODWORD(v40) = _InterlockedIncrement(&gcWinEvents);
        else
          v40 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
        *(_QWORD *)(gptiCurrent + 368LL) = v47;
        v47[1] = a2;
        if ( a2 )
          ++*((_DWORD *)a2 + 2);
        v18 = 0LL;
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v15, v16, v17);
        if ( ThreadWin32Thread )
          v18 = *ThreadWin32Thread;
        v41 = *(_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 16) = &v41;
        v43 = (void (*)(void))DereferenceW32Thread;
        v42 = v12;
        ObfReferenceObject(*(PVOID *)v12);
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
        if ( (v10 & 2) == 0 )
        {
          CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
          v24 = gpPendingNotifies;
          v25 = CurrentThreadId;
          while ( v24 )
          {
            v20 = *((unsigned int *)v24 + 12);
            if ( (v20 & 2) != 0 && *((_DWORD *)v24 + 10) == v25 )
            {
              v39 = (unsigned int)v20 & 0xFFFFFFFD;
              *((_DWORD *)v24 + 12) = v39;
              xxxProcessNotifyWinEvent((LARGE_INTEGER)v24, v39, v21, v22);
              v24 = gpPendingNotifies;
            }
            else
            {
              v24 = (struct tagNOTIFY **)*v24;
            }
          }
        }
        v26 = (LARGE_INTEGER *)gpWinEventHooks;
        if ( gpWinEventHooks )
        {
          do
          {
            LowPart = v26[5].LowPart;
            v28 = v26[3];
            if ( (LowPart & 1) == 0 && v26[4].LowPart <= a1 && a1 <= v26[4].HighPart )
            {
              QuadPart = (HANDLE)v26[6].QuadPart;
              if ( !QuadPart || QuadPart == ThreadProcessId )
              {
                if ( (LowPart & 4) == 0 || (v20 = v45, v45 != *(_QWORD *)(v26[2].QuadPart + 376)) )
                {
                  v33 = v26[7].LowPart;
                  if ( (!v33 || v33 == (_DWORD)v46) && ((LowPart & 2) == 0 || v12 != v26[2].QuadPart) )
                  {
                    v34 = *(_QWORD *)(v26[2].QuadPart + 408);
                    if ( v34 == *(_QWORD *)(v9 + 408)
                      || a1 == 32
                      || v34 == *(_QWORD *)(v12 + 408) && a1 + 2147483646 <= 1 )
                    {
                      if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)v26->LowPart
                                     + *((_QWORD *)&gSharedInfo + 1)
                                     + 17LL) & 1) != 0 )
                        break;
                      if ( dword_1C0328B9C )
                      {
                        v35 = (_QWORD *)Win32AllocPool(64LL, 2037281621LL);
                        if ( !v35 )
                          break;
                      }
                      else
                      {
                        dword_1C0328B9C = 1;
                        v35 = &unk_1C032DAB0;
                      }
                      v35[1] = 0LL;
                      HMAssignmentLock(v35 + 1, v26);
                      if ( a2 )
                        v36 = *a2;
                      else
                        v36 = 0LL;
                      v35[3] = v36;
                      *((_DWORD *)v35 + 8) = a3;
                      *((_DWORD *)v35 + 9) = a4;
                      *((_DWORD *)v35 + 4) = a1;
                      *((_DWORD *)v35 + 10) = (unsigned int)PsGetThreadId(*(PETHREAD *)v12);
                      *((_DWORD *)v35 + 11) = v40;
                      v37 = ~LOBYTE(v26[5].LowPart);
                      *v35 = 0LL;
                      v20 = (v37 >> 1) & 4;
                      v35[7] = 0LL;
                      *((_DWORD *)v35 + 12) = v20;
                      if ( (v26[5].LowPart & 8) != 0 && a1 + 2147483646 <= 3 && v26[2].QuadPart != gptiCurrent )
                      {
                        v20 = 4LL;
                        *((_DWORD *)v35 + 12) = 4;
                      }
                      if ( gpPendingNotifies )
                        *(_QWORD *)gpLastPendingNotify = v35;
                      else
                        gpPendingNotifies = (struct tagNOTIFY **)v35;
                      *((_DWORD *)v35 + 12) |= v10;
                      v38 = *((_DWORD *)v35 + 12);
                      gpLastPendingNotify = (__int64)v35;
                      if ( (v38 & 4) != 0 )
                        *((_DWORD *)v35 + 12) = v38 & 0xFFFFFFFD;
                      if ( (v35[6] & 2) == 0 )
                        v28 = xxxProcessNotifyWinEvent((LARGE_INTEGER)v35, v20, v21, v22);
                      v9 = gptiCurrent;
                    }
                  }
                }
              }
            }
            v26 = (LARGE_INTEGER *)v28.QuadPart;
          }
          while ( v28.QuadPart );
        }
        v29 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread(), v20, v21, v22);
        if ( v29 )
          v11 = *v29;
        *(_QWORD *)(v11 + 16) = v41;
        v31 = v42;
        if ( v42 )
          v43();
        return ThreadUnlock1(v31, v30);
      }
    }
  }
  return result;
}
