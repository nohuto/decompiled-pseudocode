/*
 * XREFs of NtUserNavigateFocus @ 0x1402B88D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxSendNotifyMessage @ 0x140044970 (xxxSendNotifyMessage.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1401A3738 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1401CB2E8 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1402719BC (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z @ 0x1402C89EC (-IsPwndComponentWebview@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall NtUserNavigateFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _LARGE_STRING **TopLevelWindow; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-28h] BYREF
  ULONG_PTR v27[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = v3;
  if ( !v3 || (v4 = *(_QWORD *)(v3 + 40), v6 = *(_WORD *)(v4 + 42) & 0x2FFF, v6 == 669) || v6 == 671 )
  {
    v7 = 0LL;
    goto LABEL_31;
  }
  Win32HM_LockIntoThread<0>(v2, v5, BugCheckParameter3);
  v7 = 0LL;
  if ( *(_QWORD *)(W32GetUserSessionState(v9, v8) + 18928)
    && !(unsigned int)CoreWindowProp::CompositeAppHasForeground((const struct tagWND *)v5, v10) )
  {
    goto LABEL_6;
  }
  v11 = *((_QWORD *)CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v5, v10) + 2);
  if ( *(_QWORD *)(v11 + 464) == *(_QWORD *)(W32GetUserSessionState(v13, v12) + 18928) )
  {
    if ( *(_QWORD *)(v11 + 704) )
      goto LABEL_6;
  }
  v14 = *(_QWORD *)(v5 + 16);
  if ( v14 == v2 )
  {
    if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v14 + 456)) && (*(_DWORD *)(v5 + 380) & 0x1000) != 0 )
    {
LABEL_20:
      TopLevelWindow = (struct _LARGE_STRING **)GetTopLevelWindow(v5);
      if ( *(_QWORD *)(W32GetUserSessionState(v20, v19) + 18928)
        && (v23 = *(_QWORD *)(W32GetUserSessionState(v22, v21) + 18928),
            *(struct _LARGE_STRING ***)(v23 + 128) == TopLevelWindow) )
      {
        v24 = *((_QWORD *)PtiCurrent(v23) + 58);
        if ( *(_QWORD *)(v24 + 120) )
          v7 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v24) + 58) + 120LL);
        else
          v7 = 0LL;
        if ( IsPwndComponentWebview((const struct tagWND *)v5) )
          xxxSendNotifyMessage((struct tagWND *)v5, 6u, 1uLL, *TopLevelWindow, 0);
      }
      else if ( TopLevelWindow == (struct _LARGE_STRING **)v5 )
      {
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8);
      }
      else
      {
        Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(v27, (__int64)TopLevelWindow);
        xxxForceForegroundWindowNoRestoreFocus((__int64)TopLevelWindow, 8);
        Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)v27);
      }
      goto LABEL_7;
    }
  }
  else
  {
    if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v2 + 456)) )
    {
      v15 = IsImmersiveAppRestricted(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 456LL));
    }
    else
    {
      if ( !(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v2 + 456)) )
        goto LABEL_6;
      v15 = IsImmersiveBroker(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 456LL));
    }
    if ( v15 )
    {
      v17 = *((_QWORD *)PtiCurrent(v16) + 58);
      if ( *(_QWORD *)(v17 + 120) )
        v7 = **(_QWORD **)(*((_QWORD *)PtiCurrent(v17) + 58) + 120LL);
      goto LABEL_20;
    }
  }
LABEL_6:
  UserSetLastError(5);
LABEL_7:
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
LABEL_31:
  UserSessionSwitchLeaveCrit(v4);
  return v7;
}
