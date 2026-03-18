/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x140179ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z @ 0x14017A04C (-zzzImeSetOwnerWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?ImeCheckTopmost@@YAXPEAUtagWND@@@Z @ 0x14017A93C (-ImeCheckTopmost@@YAXPEAUtagWND@@@Z.c)
 *     ?zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z @ 0x14017A9B4 (-zzzImeSetFutureOwner@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  struct tagWND *v10; // rsi
  __int64 UserSessionState; // rax
  __int64 v12; // rdx
  __int64 v14; // rbp
  __int16 *v15; // rcx
  __int16 v16; // bx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( (**(_DWORD **)(W32GetUserSessionState(v6, v5) + 19904) & 4) == 0 )
    {
      UserSetLastError(120);
      goto LABEL_10;
    }
    v6 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF;
    if ( (_DWORD)v6 == 681 )
    {
      if ( !a2 )
      {
        v10 = 0LL;
        goto LABEL_6;
      }
      v10 = (struct tagWND *)ValidateHwnd(a2);
      if ( v10 )
      {
LABEL_6:
        UserSessionState = W32GetUserSessionState(v6, v9);
        ++*(_DWORD *)(UserSessionState + 70592);
        if ( v10 )
          goto LABEL_7;
        v14 = *(_QWORD *)(v8 + 16);
        v10 = *(struct tagWND **)(*(_QWORD *)(v14 + 464) + 128LL);
        if ( !v10 )
          goto LABEL_13;
        if ( v10 == *(struct tagWND **)(v8 + 120) )
          goto LABEL_9;
        v15 = *(__int16 **)(*((_QWORD *)v10 + 17) + 8LL);
        v16 = *v15;
        if ( v16 != *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v15, v12) + 19904) + 898LL)
          && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v10 + 17) + 8LL) + 10LL) & 1) == 0
          && v14 == *((_QWORD *)v10 + 2) )
        {
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v8, v10);
        }
        else
        {
LABEL_13:
          zzzImeSetFutureOwner((struct tagWND *)v8, *(struct tagWND **)(v8 + 120));
        }
        ImeCheckTopmost((struct tagWND *)v8);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v7 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
