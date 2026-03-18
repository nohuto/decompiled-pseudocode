/*
 * XREFs of NtUserShellRegisterHotKey @ 0x1401A16F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsShellProcess @ 0x1401A1AF8 (IsShellProcess.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x1401A24FC (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 */

_BOOL8 __fastcall NtUserShellRegisterHotKey(__int64 a1, int a2, int a3, unsigned int a4, HWND a5)
{
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct tagWND *v13; // rdi
  bool v14; // al
  __int64 v15; // rcx
  _BOOL8 v16; // rbx
  bool v18; // bl
  bool v19; // di
  __int64 UserSessionState; // rax
  int v21; // r8d
  int v22; // edx
  int v23; // ecx
  char v24[8]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v25; // [rsp+48h] [rbp-10h]

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v24);
  if ( (a3 & 0xFFFF9FF0) != 0 )
  {
    UserSetLastError(1004);
    goto LABEL_13;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
  v11 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v11 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  if ( !(unsigned int)IsShellProcess(v11) )
  {
    v18 = WPP_GLOBAL_Control != (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
       && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80000) != 0
       && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v18 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v12);
      LOBYTE(v21) = v19;
      LOBYTE(v22) = v18;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v22,
        v21,
        *(_QWORD *)(UserSessionState + 69152),
        3,
        20,
        93,
        (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids);
    }
    v23 = 5;
    goto LABEL_28;
  }
  if ( !a1 )
  {
    v13 = 0LL;
    goto LABEL_7;
  }
  v13 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v13 )
  {
LABEL_13:
    v16 = 0LL;
    goto LABEL_9;
  }
LABEL_7:
  if ( a5 && !ValidateHwnd(a5) )
    goto LABEL_13;
  v14 = _RegisterHotKey(v13, 0LL, a2, a3 | 0x80, a4, a5);
  v16 = v14;
  if ( v14 )
    goto LABEL_9;
  v23 = 5023;
LABEL_28:
  v16 = 0LL;
  UserSetLastError(v23);
LABEL_9:
  if ( v24[0] )
  {
    v15 = v25;
    --*(_DWORD *)(v25 + 28);
  }
  UserSessionSwitchLeaveCrit(v15);
  return v16;
}
