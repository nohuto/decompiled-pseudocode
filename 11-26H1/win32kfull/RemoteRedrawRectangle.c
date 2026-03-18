/*
 * XREFs of RemoteRedrawRectangle @ 0x1402CB024
 * Callers:
 *     NtUserRemoteRedrawRectangle @ 0x1402BA9F0 (NtUserRemoteRedrawRectangle.c)
 *     CtxDisplayIOCtl @ 0x1402D297C (CtxDisplayIOCtl.c)
 * Callees:
 *     GetThreadDesktopWindow @ 0x140009BD0 (GetThreadDesktopWindow.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     xxxRedrawWindow @ 0x14002CA0C (xxxRedrawWindow.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     vDrvInvalidateRect @ 0x1403367D8 (vDrvInvalidateRect.c)
 */

__int64 __fastcall RemoteRedrawRectangle(__int64 a1)
{
  struct MOVESIZEDATA *v2; // rdx
  bool v3; // bl
  bool v4; // di
  __int64 UserSessionState; // rax
  int v6; // r8d
  int v7; // edx
  __int64 result; // rax
  struct tagWND *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v4 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v3 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(a1, WPP_GLOBAL_Control);
    LOBYTE(v6) = v4;
    LOBYTE(v7) = v3;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v7,
      v6,
      *(_QWORD *)(UserSessionState + 69152),
      4,
      3,
      12,
      (__int64)&WPP_3ec08e089dee332c19828920b6c3c996_Traceguids);
  }
  result = W32GetUserSessionState(a1, v2);
  if ( !*(_QWORD *)(result + 19184) )
  {
    result = GetThreadDesktopWindow(0LL);
    v9 = (struct tagWND *)result;
    if ( result )
    {
      Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, result);
      v12 = W32GetUserSessionState(v11, v10);
      vDrvInvalidateRect(*(_QWORD *)(*(_QWORD *)(v12 + 56968) + 40LL), a1);
      xxxRedrawWindow(v9, a1, 0LL, 645);
      return Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    }
  }
  return result;
}
