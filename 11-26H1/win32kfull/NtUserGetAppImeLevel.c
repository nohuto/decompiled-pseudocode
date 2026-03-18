/*
 * XREFs of NtUserGetAppImeLevel @ 0x1402B2310
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetProp @ 0x14003A810 (_GetProp.c)
 */

__int64 __fastcall NtUserGetAppImeLevel(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int Prop; // ebx
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 UserSessionState; // rax

  EnterSharedCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  Prop = 0;
  v6 = v2;
  if ( v2 )
  {
    v7 = *(_DWORD **)(W32GetUserSessionState(v4, v3) + 19904);
    if ( (*v7 & 4) != 0 )
    {
      v8 = PtiCurrent((__int64)v7);
      v4 = *(_QWORD *)(v6 + 16);
      if ( *(_QWORD *)(v4 + 456) == *((_QWORD *)v8 + 57) )
      {
        UserSessionState = W32GetUserSessionState(v4, v9);
        Prop = GetProp(v6, *(unsigned __int16 *)(UserSessionState + 41384), 1u);
      }
    }
    else
    {
      UserSetLastError(120);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return Prop;
}
