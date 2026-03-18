/*
 * XREFs of xxxEmptyClipboard @ 0x1C0128CAC
 * Callers:
 *     xxxSnapWindow @ 0x1C0120278 (xxxSnapWindow.c)
 *     FreeWindowStation @ 0x1C0131DB0 (FreeWindowStation.c)
 *     NtUserEmptyClipboard @ 0x1C0219710 (NtUserEmptyClipboard.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C0121384 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C01247E4 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(struct tagWINDOWSTATION *a1)
{
  __int64 ThreadWin32Thread; // rsi
  BOOL v3; // edi
  int v4; // r14d
  struct tagCLIP *v5; // rdi
  __int64 v6; // rdx
  int v8; // ebp
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v3 = a1 != 0LL;
  if ( !a1 )
  {
    a1 = (struct tagWINDOWSTATION *)CheckClipboardAccess();
    if ( !a1 )
      return 0LL;
  }
  if ( !v3 && *((_QWORD *)a1 + 6) != ThreadWin32Thread )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  if ( (*((_DWORD *)a1 + 8) & 0x10) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)a1, v10, UserDereferenceObject);
      ObfReferenceObject(a1);
      xxxSendClipboardMessage(a1, 0x307u);
    }
  }
  v5 = (struct tagCLIP *)*((_QWORD *)a1 + 12);
  if ( v5 )
  {
    v8 = *((_DWORD *)a1 + 26);
    while ( v8 )
    {
      v9 = *(unsigned __int16 *)v5;
      --v8;
      if ( (unsigned __int16)v9 >= 0xC000u )
        UserDeleteAtom(v9);
      UT_FreeCBFormat(v5);
      v5 = (struct tagCLIP *)((char *)v5 + 32);
    }
    Win32FreePool(*((_QWORD *)a1 + 12));
    *((_QWORD *)a1 + 12) = 0LL;
    *((_DWORD *)a1 + 26) = 0;
  }
  v6 = *((_QWORD *)a1 + 8);
  *((_DWORD *)a1 + 8) |= 0x40u;
  HMAssignmentLock((char *)a1 + 80, v6);
  ++*((_DWORD *)a1 + 27);
  ++*((_DWORD *)a1 + 28);
  *((_DWORD *)a1 + 8) &= ~0x80u;
  if ( !v4 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v10);
  }
  return 1LL;
}
