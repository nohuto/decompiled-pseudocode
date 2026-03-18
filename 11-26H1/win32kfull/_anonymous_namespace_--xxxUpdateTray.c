/*
 * XREFs of _anonymous_namespace_::xxxUpdateTray @ 0x1401FD9F8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x140193984 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z @ 0x140271A30 (-xxxProcessActivationEvent@@YAXPEBUtagQMSG@@@Z.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x140271C80 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140010D00 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     ?IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z @ 0x140011324 (-IsTrayWindow@@YA_NPEBUtagWND@@W4TrayCheckOption@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x14004DFC0 (_IsTopLevelWindow.c)
 *     ?xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z @ 0x1401FDB80 (-xxxSetTrayWindow@@YAXPEAUtagDESKTOP@@PEAUtagWND@@@Z.c)
 */

void __fastcall anonymous_namespace_::xxxUpdateTray(struct tagWND *a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  struct tagWND *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  bool v12; // zf
  __int64 v13; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64)a1;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
  {
    v3 = *((_QWORD *)a1 + 15);
    while ( v3 )
    {
      v12 = (*(_BYTE *)(*(_QWORD *)(v3 + 40) + 31LL) & 0x10) == 0;
      v13 = v3;
      v3 = *(_QWORD *)(v3 + 120);
      if ( v12 )
        v13 = v2;
      v2 = v13;
    }
    v5 = *(_QWORD *)(W32GetUserSessionState(a1, 0LL) + 18928);
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 464LL) == v5 )
    {
      v6 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19904);
      if ( (*(_DWORD *)(v6 + 2120) & 8) != 0 )
      {
        v7 = *((_DWORD *)PtiCurrent(v6) + 178);
        if ( (((*(_DWORD *)(**((_QWORD **)PtiCurrent(v8) + 62) + 16LL) | v7) & 0x800) != 0
           || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 184LL))
          && IsTopLevelWindow(v2)
          && ((*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x10) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
        {
          if ( IsTrayWindow(a1, 1LL) )
            v9 = a1;
          else
            v9 = (struct tagWND *)(v2 & -(__int64)(IsTrayWindow((_QWORD *)v2, 1LL) != 0));
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v9);
          v10 = (__int64)v9;
          if ( !v9 )
            v10 = v2;
          xxxSetTrayWindow(*(struct tagDESKTOP **)(v10 + 24), v9);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
        }
      }
    }
    if ( !*((_QWORD *)a1 + 15) || (v11 = 23, (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 4) != 0) )
      v11 = 19;
    PostIAMShellHookMessage(v11, *(_QWORD *)a1);
  }
}
