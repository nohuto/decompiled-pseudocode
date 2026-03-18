/*
 * XREFs of _PostThreadMessageEx @ 0x1C0057D1C
 * Callers:
 *     _PostThreadMessage @ 0x1C0057CD8 (_PostThreadMessage.c)
 *     xxxDoHotKeyStuff @ 0x1C00A3680 (xxxDoHotKeyStuff.c)
 * Callees:
 *     ?AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z @ 0x1C0057CFC (-AdjustForCoalescing@@YAXPEAUtagMLIST@@PEAUHWND__@@I@Z.c)
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 *     SetWakeBit @ 0x1C005B6A0 (SetWakeBit.c)
 *     LogicalQmsgCursorPos @ 0x1C005C314 (LogicalQmsgCursorPos.c)
 *     AllocQEntry @ 0x1C005C498 (AllocQEntry.c)
 *     StoreQMessage @ 0x1C0080C10 (StoreQMessage.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ProcessSuspendedPostMessage @ 0x1C0120570 (ProcessSuspendedPostMessage.c)
 */

__int64 __fastcall PostThreadMessageEx(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax

  v8 = a1;
  if ( !a1 || (*(_DWORD *)(a1 + 440) & 0x1000001) != 0x1000000 )
  {
    v9 = 1444LL;
    goto LABEL_41;
  }
  if ( a2 < 0x400 && ((a1 = (unsigned __int16)MessageTable[a2], (a1 & 0x200) != 0) || a2 == 537 && (a3 & 0x8000) != 0)
    || a2 == 536 && (a3 & 0x8000) != 0 )
  {
    v9 = 1159LL;
LABEL_41:
    UserSetLastError(v9);
    return 0LL;
  }
  v10 = *(_QWORD *)(v8 + 376);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, 0x8000LL);
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
      v9 = 5LL;
      goto LABEL_41;
  }
  if ( a2 != 188 )
    goto LABEL_17;
LABEL_34:
  if ( (!gbEnforceUIPI || *(_QWORD *)v10 == gpepCSRSS)
    && (*(_DWORD *)(v10 + 732) != *(_DWORD *)(CurrentProcessWin32Process + 732)
     || *(_DWORD *)(v10 + 736) != *(_DWORD *)(CurrentProcessWin32Process + 736)) )
  {
    goto LABEL_38;
  }
LABEL_17:
  if ( a2 == 576 || a2 == 281 || (unsigned int)IsPointerInputMessage(a2, CurrentProcessWin32Process) )
  {
    v9 = 1002LL;
    goto LABEL_41;
  }
  AdjustForCoalescing((struct tagMLIST *)(v8 + 728), 0LL, a2);
  if ( (*(_DWORD *)(v8 + 1096) & 0x20) != 0
    && v8 != gptiCurrent
    && !(unsigned int)ProcessSuspendedPostMessage(v8, 0LL, a2, a3, a4) )
  {
    return 0LL;
  }
  v12 = AllocQEntry(v8 + 728);
  if ( !v12 )
    return 0LL;
  v13 = LogicalQmsgCursorPos(0LL, *(_QWORD *)(v8 + 384));
  StoreQMessage(v12, 0LL, a2, a3, a4, 0, 0LL, 0, 0LL, 0, a5, v13, 0LL, 0LL);
  SetWakeBit(v8, 264LL);
  if ( a2 == 786 )
    SetWakeBit(v8, 128LL);
  v14 = *(_QWORD *)(v8 + 384);
  if ( v8 == *(_QWORD *)(v14 + 32) )
    *(_QWORD *)(v14 + 40) = v12;
  return 1LL;
}
