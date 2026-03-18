/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x140235A40
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x14000FD98 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _SetTouchWindowFlags @ 0x14029356C (_SetTouchWindowFlags.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ebx
  __int64 v9; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 UserSessionState; // rax
  int v14; // ecx

  EnterCrit(0LL, 0LL);
  v6 = ValidateHwnd(a1);
  v8 = 0;
  v9 = v6;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v14 = 1004;
    }
    else
    {
      if ( PtiCurrent(v7) == *(struct tagTHREADINFO **)(v6 + 16) )
      {
        if ( a3 )
        {
          v8 = SetTouchWindowFlags(v9, a2 | 0x10000u);
        }
        else
        {
          UserSessionState = W32GetUserSessionState(v12, v11);
          v8 = 1;
          InternalRemoveProp(v9, *(unsigned __int16 *)(UserSessionState + 41386), 1u);
        }
        goto LABEL_2;
      }
      v14 = 5;
    }
    UserSetLastError(v14);
  }
LABEL_2:
  UserSessionSwitchLeaveCrit(v7);
  return v8;
}
