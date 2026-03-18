/*
 * XREFs of _anonymous_namespace_::xxxSendNCActivateMessage @ 0x1402060B0
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x140153BB4 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxSendMessage @ 0x140036F50 (xxxSendMessage.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140039400 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x140046254 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 */

bool __fastcall anonymous_namespace_::xxxSendNCActivateMessage(struct tagWND *a1, unsigned __int64 a2)
{
  struct tagWND *TopLevelWindow; // rbx
  char v4; // di
  bool v5; // zf
  __int64 v7; // rdx
  struct tagWND *TopLevelHostForComponent; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ebx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  TopLevelWindow = a1;
  v4 = 1;
  if ( !(_WORD)a2 || !(unsigned int)CoreWindowProp::IsComponent(a1, a2) )
  {
    v5 = xxxSendMessage(TopLevelWindow, 0x86u) == 0;
    return !v5;
  }
  TopLevelHostForComponent = CoreWindowProp::GetTopLevelHostForComponent(TopLevelWindow, v7);
  if ( TopLevelHostForComponent )
    TopLevelWindow = (struct tagWND *)GetTopLevelWindow((__int64)TopLevelHostForComponent);
  if ( TopLevelWindow
    && *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18936)
    && *(struct tagWND **)(*(_QWORD *)(W32GetUserSessionState(v12, v11) + 18936) + 136LL) != TopLevelWindow )
  {
    Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)TopLevelWindow);
    v13 = xxxSendNotifyMessage(TopLevelWindow, 0x86u, a2, 0LL, 1);
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
    v5 = v13 == 0;
    return !v5;
  }
  return v4;
}
