/*
 * XREFs of xxxEmptyClipboard @ 0x1C00DC248
 * Callers:
 *     FreeWindowStation @ 0x1C00DC0E0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C01499F0 (xxxSnapWindow.c)
 *     NtUserEmptyClipboard @ 0x1C02195A0 (NtUserEmptyClipboard.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00DBFC0 (CheckClipboardAccess.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C014B094 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C014D784 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(_QWORD *Object)
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
  v3 = Object != 0LL;
  if ( !Object )
  {
    Object = (_QWORD *)CheckClipboardAccess();
    if ( !Object )
      return 0LL;
  }
  if ( !v3 && Object[6] != ThreadWin32Thread )
  {
    UserSetLastError(1418);
    return 0LL;
  }
  if ( (Object[4] & 0x10) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, v10, UserDereferenceObject);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v5 = (struct tagCLIP *)Object[12];
  if ( v5 )
  {
    v8 = *((_DWORD *)Object + 26);
    while ( v8 )
    {
      v9 = *(unsigned __int16 *)v5;
      --v8;
      if ( (unsigned __int16)v9 >= 0xC000u )
        UserDeleteAtom(v9);
      UT_FreeCBFormat(v5);
      v5 = (struct tagCLIP *)((char *)v5 + 32);
    }
    Win32FreePool(Object[12]);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  v6 = Object[8];
  *((_DWORD *)Object + 8) |= 0x40u;
  HMAssignmentLock(Object + 10, v6);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v4 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v10);
  }
  return 1LL;
}
