/*
 * XREFs of NtUserDisableThreadIme @ 0x140086250
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z @ 0x14023AA84 (-UserDisableImeForThread@@YAXPEAUtagTHREADINFO@@_N@Z.c)
 *     ?UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z @ 0x140295B28 (-UserDisableImeForProcess@@YAXPEAUtagPROCESSINFO@@@Z.c)
 */

__int64 __fastcall NtUserDisableThreadIme(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct tagWND *v5; // rcx
  __int64 v6; // rbx
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // rdi
  struct tagTHREADINFO *v10; // rax

  EnterCrit(0LL, 0LL);
  if ( (**(_DWORD **)(W32GetUserSessionState(v3, v2) + 19904) & 4) == 0 )
  {
    UserSetLastError(120);
    v6 = 0LL;
    goto LABEL_3;
  }
  v8 = PtiCurrent(v4);
  v9 = v8;
  if ( a1 == -1 )
  {
    UserDisableImeForProcess(*((struct tagPROCESSINFO **)v8 + 57));
    goto LABEL_8;
  }
  v6 = 0LL;
  if ( !a1 )
  {
    _InterlockedOr((volatile signed __int32 *)v8 + 130, 0x2000000u);
    v5 = (struct tagWND *)*((_QWORD *)v8 + 102);
    if ( v5 )
      xxxDestroyWindow(v5);
    goto LABEL_8;
  }
  v10 = (struct tagTHREADINFO *)PtiFromThreadId(a1);
  if ( v10 )
  {
    v5 = (struct tagWND *)*((_QWORD *)v9 + 57);
    if ( *((struct tagWND **)v10 + 57) == v5 )
    {
      UserDisableImeForThread(v10, v10 == v9);
LABEL_8:
      v6 = 1LL;
    }
  }
LABEL_3:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
