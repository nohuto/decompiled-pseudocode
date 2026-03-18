/*
 * XREFs of ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30
 * Callers:
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     xxxCancelTracking @ 0x14005359C (xxxCancelTracking.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x140153364 (zzzInputFocusReceivedWindowEvent.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8 (_anonymous_namespace_--xxxUpdateTray.c)
 *     _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0 (_anonymous_namespace_--xxxSendNCActivateMessage.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x140289CEC (_anonymous_namespace_--RemoveForegroundActivate.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     zzzActiveCursorTracking @ 0x1402A0BB8 (zzzActiveCursorTracking.c)
 */

void __fastcall xxxProcessActivationEvent(const struct tagQMSG *a1)
{
  struct tagTHREADINFO *v2; // rax
  __int64 v3; // rcx
  struct tagTHREADINFO *v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+40h] [rbp-28h] BYREF

  if ( *((_DWORD *)a1 + 24) != 6 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3634LL);
  v2 = PtiCurrent((__int64)a1);
  v3 = *((_QWORD *)a1 + 5);
  v4 = v2;
  v5 = *((_QWORD *)v2 + 58);
  if ( v3 )
  {
    v14 = HMValidateHandleNoSecure(v3, 1);
    v12 = (struct tagWND *)v14;
    if ( !v14 )
      return;
    if ( v4 != *(struct tagTHREADINFO **)(v14 + 16) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3698LL);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v12);
    if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 18928) )
    {
      if ( v12 != *(struct tagWND **)(v5 + 128) )
      {
        if ( anonymous_namespace_::xxxLocalActivateWindow(v12, *((_DWORD *)a1 + 8), 2 * (*((_WORD *)a1 + 12) & 1) + 132)
          && (*(_DWORD *)(W32GetUserSessionState(v20, v19) + 66796) & 1) != 0 )
        {
          zzzActiveCursorTracking(v12);
        }
        goto LABEL_24;
      }
      v21 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 18928);
      anonymous_namespace_::xxxSendNCActivateMessage(v12, v5 == v21);
      if ( v5 == v21 )
      {
        anonymous_namespace_::xxxUpdateTray(v12);
        if ( (*((_DWORD *)a1 + 6) & 1) == 0 )
          goto LABEL_23;
      }
    }
    else
    {
      xxxSetForegroundWindow2(v12, v4, 0LL);
    }
LABEL_24:
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    return;
  }
  xxxCancelTracking();
  UserSessionState = W32GetUserSessionState(v7, v6);
  CCursorClip::ClearClip(*(CCursorClip **)(UserSessionState + 36272));
  v11 = *((_QWORD *)v4 + 58);
  if ( *((_QWORD *)a1 + 4) && *(_QWORD *)(v11 + 128) && v11 == *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928) )
  {
    v12 = *(struct tagWND **)(v11 + 128);
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v12);
    if ( *(_QWORD *)(v11 + 120) )
      zzzInputFocusReceivedWindowEvent(7LL, v13);
    anonymous_namespace_::xxxSendNCActivateMessage(v12, 1uLL);
    anonymous_namespace_::xxxUpdateTray(v12);
LABEL_23:
    xxxSetWindowPos(v12, 0LL, 0LL, 0LL, 0, 0, 3);
    goto LABEL_24;
  }
  if ( v11 != *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928) )
    anonymous_namespace_::RemoveForegroundActivate();
}
