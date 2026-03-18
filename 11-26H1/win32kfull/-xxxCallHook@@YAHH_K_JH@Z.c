/*
 * XREFs of ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510
 * Callers:
 *     xxxRedrawTitle @ 0x14001111C (xxxRedrawTitle.c)
 *     xxxCallMsgFilter @ 0x14002004C (xxxCallMsgFilter.c)
 *     xxxGetInputEvent @ 0x140022BD0 (xxxGetInputEvent.c)
 *     ?xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z @ 0x1400237A0 (-xxxRealSleepThread@@YAHIKHHPEAW4SLEEP_STATUS@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 *     xxxNotifyMonitorChanged @ 0x14004BDFC (xxxNotifyMonitorChanged.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z @ 0x14005DE80 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAUMOVESIZEDATA@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x14012B3C8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1401387F4 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     xxxIsDragging @ 0x14014A320 (xxxIsDragging.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x140164D34 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z @ 0x1401662D4 (-xxxNotifyShellOfWindowSwap@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     ?xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z @ 0x1401F28A0 (-xxxNotifyIMEStatus@@YAXPEAUtagWND@@KK@Z.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1401FDB80 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 *     xxxFlashWindow @ 0x140214FC0 (xxxFlashWindow.c)
 *     ?xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z @ 0x14021CBCC (-xxxHandleOwnerSwitch@@YAXPEAUtagWND@@00@Z.c)
 *     xxxSendMinRectMessages @ 0x14021D3B4 (xxxSendMinRectMessages.c)
 *     EditionNotifyShellLanguageHook @ 0x140239940 (EditionNotifyShellLanguageHook.c)
 *     EditionCallAccessibilityHook @ 0x1402588E0 (EditionCallAccessibilityHook.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x140272C18 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z @ 0x14027BDC8 (-xxxDestroyWindow_Prologue@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@PEAHPEA_N@Z.c)
 *     NtUserRedrawFrameAndHook @ 0x1402B9620 (NtUserRedrawFrameAndHook.c)
 *     xxxSysCommand @ 0x1402D135C (xxxSysCommand.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     xxxPointerCallHook @ 0x1401360C4 (xxxPointerCallHook.c)
 */

__int64 __fastcall xxxCallHook(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rdi
  unsigned int v7; // r15d
  struct _ERESOURCE *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rsi
  struct _ERESOURCE *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdi
  struct _ERESOURCE *v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 *v34; // rax

  v4 = a4;
  v7 = a1;
  v8 = *(struct _ERESOURCE **)(W32GetUserSessionState(a1, a2) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v12, v11) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v14, v13)
     || ExIsResourceAcquiredExclusiveLite(v8) != 1 && !ExIsResourceAcquiredSharedLite(v8)) )
  {
    __int2c();
  }
  if ( (_DWORD)v4 == 6 )
    goto LABEL_8;
  if ( (_DWORD)v4 != 4 )
  {
    if ( (_DWORD)v4 == 12 )
    {
      v15 = *(unsigned int *)(a3 + 24);
      goto LABEL_9;
    }
    if ( (_DWORD)v4 != 3 && (_DWORD)v4 != -1 )
    {
      v15 = 0LL;
      LOWORD(v16) = 0;
LABEL_12:
      if ( (_DWORD)v15 == 528 && (_WORD)v16 == 582 )
        return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
      goto LABEL_13;
    }
LABEL_8:
    v15 = *(unsigned int *)(a3 + 8);
LABEL_9:
    v16 = *(_QWORD *)(a3 + 16);
    goto LABEL_10;
  }
  v15 = *(unsigned int *)(a3 + 16);
  v16 = *(_QWORD *)(a3 + 8);
LABEL_10:
  if ( (unsigned int)(v15 - 577) <= 3 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
  if ( (unsigned int)v15 < 0x245 || (unsigned int)v15 > 0x257 || (_DWORD)v15 == 589 )
    goto LABEL_12;
  if ( (_DWORD)v15 != 595 )
    return xxxPointerCallHook(v7, a2, a3, (unsigned int)v4);
LABEL_13:
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v15);
  if ( CurrentThreadWin32Thread )
    v20 = *CurrentThreadWin32Thread;
  else
    v20 = 0LL;
  v21 = *(struct _ERESOURCE **)(W32GetUserSessionState(v19, v18) + 42336);
  if ( !*(_DWORD *)(W32GetUserSessionState(v23, v22) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION(v25, v24) != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION(v25, v24)
     || ExIsResourceAcquiredExclusiveLite(v21) != 1 && !ExIsResourceAcquiredSharedLite(v21)) )
  {
    __int2c();
  }
  v26 = v4;
  v27 = *(_QWORD *)(v20 + 8 * v4 + 960);
  if ( (v27 || (v27 = *(_QWORD *)(*(_QWORD *)(v20 + 496) + 8 * v26 + 48)) != 0) && (*(_DWORD *)(v27 + 64) & 0x80u) != 0 )
  {
    v28 = *(struct _ERESOURCE **)(W32GetUserSessionState(v25, v24) + 42336);
    if ( !*(_DWORD *)(W32GetUserSessionState(v30, v29) + 19792)
      && (unsigned int)GET_USERCRIT_DISPOSITION(v32, v31) != 2
      && (!(unsigned int)GET_USERCRIT_DISPOSITION(v32, v33)
       || ExIsResourceAcquiredExclusiveLite(v28) != 1 && !ExIsResourceAcquiredSharedLite(v28)) )
    {
      __int2c();
    }
    do
    {
      if ( *(_QWORD *)(v27 + 40) )
      {
        v27 = *(_QWORD *)(v27 + 40);
      }
      else
      {
        if ( (*(_DWORD *)(v27 + 64) & 1) != 0 )
        {
          v27 = 0LL;
          return xxxCallHook2(v27, v7, a2, a3, 1);
        }
        v34 = (__int64 *)PsGetCurrentThreadWin32Thread(v32);
        if ( v34 )
          v32 = *v34;
        else
          v32 = 0LL;
        v27 = *(_QWORD *)(*(_QWORD *)(v32 + 496) + 8LL * *(int *)(v27 + 48) + 48);
        if ( !v27 )
          return xxxCallHook2(v27, v7, a2, a3, 1);
      }
    }
    while ( (*(_DWORD *)(v27 + 64) & 0x80u) != 0 );
  }
  return xxxCallHook2(v27, v7, a2, a3, 1);
}
