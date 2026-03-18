/*
 * XREFs of _PostThreadMessageEx @ 0x1C0065470
 * Callers:
 *     _PostThreadMessage @ 0x1C0065710 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C0083DBC (xxxDoHotKeyStuff.c)
 * Callees:
 *     ProcessSuspendedPostMessage @ 0x1C0001650 (ProcessSuspendedPostMessage.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetWakeBit @ 0x1C00535C0 (SetWakeBit.c)
 *     LogicalCursorPos @ 0x1C0056358 (LogicalCursorPos.c)
 *     AllocQEntry @ 0x1C0057810 (AllocQEntry.c)
 *     StoreQMessage @ 0x1C0060180 (StoreQMessage.c)
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C00656F0 (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 */

__int64 __fastcall PostThreadMessageEx(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4, DWORD *a5)
{
  __int64 v8; // rdi
  int v9; // ecx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rdx
  LARGE_INTEGER *v12; // rsi
  LONGLONG v13; // rax
  __int64 v14; // rax

  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 440) & 0x1000001) != 0x1000000 )
  {
    v9 = 1444;
    goto LABEL_41;
  }
  if ( a2 < 0x400 && ((a1 = (unsigned __int16)MessageTable[a2], (a1 & 0x200) != 0) || a2 == 537 && (a3 & 0x8000) != 0)
    || a2 == 536 && (a3 & 0x8000) != 0 )
  {
    v9 = 1159;
LABEL_41:
    UserSetLastError(v9);
    return 0LL;
  }
  v10 = *(_QWORD *)(v8 + 376);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( v10 == CurrentProcessWin32Process )
    goto LABEL_17;
  if ( a2 > 0xD0 )
  {
    if ( a2 != 272 )
    {
      if ( a2 != 353 && a2 != 424 && a2 != 563 && a2 != 648 )
        goto LABEL_17;
      goto LABEL_34;
    }
    goto LABEL_38;
  }
  switch ( a2 )
  {
    case 0xD0u:
    case 0xCu:
      goto LABEL_34;
    case 0xDu:
      goto LABEL_17;
    case 0x4Eu:
LABEL_38:
      v9 = 5;
      goto LABEL_41;
  }
  if ( a2 != 188 )
    goto LABEL_17;
LABEL_34:
  if ( (!gbEnforceUIPI || *(_QWORD *)v10 == gpepCSRSS)
    && (*(_DWORD *)(v10 + 740) != *(_DWORD *)(CurrentProcessWin32Process + 740)
     || *(_DWORD *)(v10 + 744) != *(_DWORD *)(CurrentProcessWin32Process + 744)) )
  {
    goto LABEL_38;
  }
LABEL_17:
  if ( a2 == 576 || a2 == 281 || IsPointerInputMessage(a2) )
  {
    v9 = 1002;
    goto LABEL_41;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 728), 0LL, a2);
  if ( (*(_DWORD *)(v8 + 1072) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v12 = (LARGE_INTEGER *)AllocQEntry(v8 + 728);
  if ( !v12 )
    return 0LL;
  v13 = LogicalCursorPos(v8);
  StoreQMessage(v12, 0LL, a2, (LARGE_INTEGER)a3, (LARGE_INTEGER)a4, 0, 0LL, 0, 0LL, 0, a5, v13, 0LL, 0LL);
  SetWakeBit(v8, 0x108u);
  if ( a2 == 786 )
    SetWakeBit(v8, 0x80u);
  v14 = *(_QWORD *)(v8 + 384);
  if ( v8 == *(_QWORD *)(v14 + 24) )
    *(_QWORD *)(v14 + 32) = v12;
  return 1LL;
}
