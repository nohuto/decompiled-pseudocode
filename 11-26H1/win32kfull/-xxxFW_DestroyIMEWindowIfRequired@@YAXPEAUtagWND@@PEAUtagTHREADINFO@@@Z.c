/*
 * XREFs of ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140179A14
 * Callers:
 *     ?xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14004544C (-xxxFreeWindow_Phase1@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 * Callees:
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14001A878 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z @ 0x14017AC38 (-ImeCanDestroyDefIMEforChild@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z @ 0x14017AD20 (-zzzImeCanDestroyDefIME@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall xxxFW_DestroyIMEWindowIfRequired(struct tagWND *a1, struct tagTHREADINFO *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  struct tagWND *v13; // rcx
  struct tagWND *v14; // rcx
  __int64 UserSessionState; // rax
  int CanDestroyDefIME; // ebx

  v4 = *(_BYTE *)(_HMPheFromObject(a1) + 25) & 1;
  if ( (**(_DWORD **)(W32GetUserSessionState(v6, v5) + 19904) & 4) == 0
    || (_InterlockedCompareExchange((volatile signed __int32 *)a2 + 130, 0, 0) & 1) != 0
    || !*((_QWORD *)a2 + 102)
    || (v9 = *((_QWORD *)a1 + 17), (*(_BYTE *)(*(_QWORD *)(v9 + 8) + 10LL) & 1) != 0)
    || (v10 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 19904),
        v11 = *(unsigned __int16 *)(v10 + 898),
        **(_WORD **)(v9 + 8) == (_WORD)v11) )
  {
    if ( v4 )
      return;
    goto LABEL_7;
  }
  if ( v4 )
    return;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x40) != 0 )
  {
    if ( !*((_QWORD *)a1 + 13) || !ImeCanDestroyDefIMEforChild(*((struct tagWND **)a2 + 102), a1) )
      goto LABEL_7;
    v14 = (struct tagWND *)*((_QWORD *)a2 + 102);
  }
  else
  {
    UserSessionState = W32GetUserSessionState(v10, v11);
    ++*(_DWORD *)(UserSessionState + 70592);
    CanDestroyDefIME = zzzImeCanDestroyDefIME(*((struct tagWND **)a2 + 102), a1);
    zzzEndDeferWinEventNotify();
    if ( !CanDestroyDefIME )
      goto LABEL_7;
    v14 = (struct tagWND *)*((_QWORD *)a2 + 102);
    if ( !v14 )
      goto LABEL_7;
  }
  xxxDestroyWindow(v14);
LABEL_7:
  v12 = *((_DWORD *)a1 + 95);
  if ( (v12 & 0x10000000) != 0 )
  {
    *((_DWORD *)a1 + 95) = v12 & 0xEFFFFFFF;
    --*((_DWORD *)a2 + 235);
  }
  v13 = (struct tagWND *)*((_QWORD *)a2 + 102);
  if ( v13 && !*((_DWORD *)a2 + 235) && a1 != v13 )
    xxxDestroyWindow(v13);
}
