/*
 * XREFs of xxxMNSetCapture @ 0x14028B3D4
 * Callers:
 *     xxxMNStartMenu @ 0x140176B5C (xxxMNStartMenu.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x14026C3B0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14014ABAC (-xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 */

void __fastcall xxxMNSetCapture(__int64 a1, __int64 a2)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = PtiCurrent(a1);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(
    BugCheckParameter3,
    *(_QWORD *)(**(_QWORD **)a1 + 8LL));
  xxxCapture(v4, *(struct tagWND **)(**(_QWORD **)a1 + 8LL), 4);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v5 = *((_QWORD *)v4 + 58);
  *(_DWORD *)(v5 + 436) |= 0x100000u;
  *(_DWORD *)(a2 + 8) |= 0x40000u;
  if ( *(_QWORD *)(W32GetUserSessionState(v5, v6) + 18928) )
  {
    v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 18928);
    if ( *(_QWORD *)(v10 + 120) )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18928);
      if ( *(struct tagTHREADINFO **)(*(_QWORD *)(v12 + 120) + 16LL) == v4 )
      {
        UserSessionState = W32GetUserSessionState(v12, v11);
        xxxWindowEvent(0x80000004, *(struct tagWND **)(*(_QWORD *)(UserSessionState + 18928) + 120LL), 0, 1, 33);
      }
    }
  }
}
