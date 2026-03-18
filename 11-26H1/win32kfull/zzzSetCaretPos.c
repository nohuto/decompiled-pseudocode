/*
 * XREFs of zzzSetCaretPos @ 0x140129180
 * Callers:
 *     NtUserSetCaretPos @ 0x140127890 (NtUserSetCaretPos.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     GreLPtoDP @ 0x140127948 (GreLPtoDP.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127A3C (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x140127B74 (-RemoveCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_CaretSet@@YAHPEAUtagWND@@@Z @ 0x1401290CC (-UT_CaretSet@@YAHPEAUtagWND@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140129354 (-UT_InvertCaret@@YAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall zzzSetCaretPos(LONG a1, LONG a2)
{
  __int64 v4; // rcx
  __int64 y; // rdx
  __int64 v6; // rdi
  LONG *v7; // rsi
  __int64 x; // rcx
  int v9; // edx
  int v10; // edx
  HDC DC; // rbx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // eax
  __int64 UserSessionState; // rax
  struct tagPOINT v17; // [rsp+30h] [rbp-48h] BYREF
  int v18; // [rsp+38h] [rbp-40h]
  int v19; // [rsp+3Ch] [rbp-3Ch]

  if ( (unsigned int)UT_CaretSet(0LL) )
  {
    v6 = *((_QWORD *)PtiCurrent(v4) + 58);
    v7 = (LONG *)(v6 + 368);
    if ( *(_DWORD *)(v6 + 364) != a1 || *v7 != a2 )
    {
      x = *(_QWORD *)(v6 + 344);
      if ( x )
      {
        y = *(_QWORD *)(*(_QWORD *)(x + 136) + 8LL);
        if ( (*(_DWORD *)(y + 8) & 0x20) != 0 )
        {
          v9 = a1 + *(_DWORD *)(v6 + 376);
          v17.x = a1;
          v18 = v9;
          v10 = a2 + *(_DWORD *)(v6 + 372);
          v17.y = a2;
          v19 = v10;
          DC = (HDC)_GetDC(x);
          GreLPtoDP(DC, (struct _POINTL *)&v17);
          _ReleaseDC(DC);
          x = (unsigned int)v17.x;
          y = (unsigned int)v17.y;
          v12 = v18 - v17.x;
          *(_DWORD *)(v6 + 404) = v17.x;
          *(_DWORD *)(v6 + 412) = v12;
          v13 = v19 - y;
          *(_DWORD *)(v6 + 408) = y;
          *(_DWORD *)(v6 + 416) = v13;
        }
      }
      if ( (*(_DWORD *)(v6 + 352) & 1) != 0 )
        UT_InvertCaret();
      *(_DWORD *)(v6 + 364) = a1;
      *v7 = a2;
      if ( *(_QWORD *)(v6 + 392) )
      {
        RemoveCaretTimer(*(struct tagWND **)(v6 + 344), (struct tagQ *)v6);
        CreateCaretTimer(*(struct tagWND **)(v6 + 344), (struct tagQ *)v6);
      }
      v14 = *(_DWORD *)(v6 + 352) & 0xFFFFFFFC | 2;
      *(_DWORD *)(v6 + 352) = v14;
      if ( !*(_DWORD *)(v6 + 356) )
      {
        *(_DWORD *)(v6 + 352) = v14 | 1;
        UT_InvertCaret();
      }
      UserSessionState = W32GetUserSessionState(x, y);
      xxxWindowEvent(0x800Bu, *(struct tagWND **)(v6 + 344), -8, 0, *(_DWORD *)(UserSessionState + 70592) != 0 ? 2 : 0);
    }
    return 1LL;
  }
  else
  {
    UserSetLastError(5);
    return 0LL;
  }
}
