/*
 * XREFs of xxxEmptyClipboard @ 0x1C00F94F0
 * Callers:
 *     FreeWindowStation @ 0x1C00F92C0 (FreeWindowStation.c)
 *     xxxSnapWindow @ 0x1C014F320 (xxxSnapWindow.c)
 *     NtUserEmptyClipboard @ 0x1C02121A0 (NtUserEmptyClipboard.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01505B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1C0152EF0 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(_QWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 ThreadWin32Thread; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  BOOL v10; // edi
  int v11; // r14d
  struct tagCLIP *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  int v18; // ebp
  __int64 v19; // rcx
  _QWORD v20[5]; // [rsp+20h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v10 = Object != 0LL;
  if ( !Object )
  {
    Object = (_QWORD *)CheckClipboardAccess(v6, v5, v8, v9);
    if ( !Object )
      return 0LL;
  }
  if ( !v10 && Object[6] != ThreadWin32Thread )
  {
    UserSetLastError(1418LL);
    return 0LL;
  }
  if ( (Object[4] & 0x10) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    if ( ThreadWin32Thread )
    {
      PushW32ThreadLock((__int64)Object, v20, UserDereferenceObject, v9);
      ObfReferenceObject(Object);
      xxxSendClipboardMessage((struct tagWINDOWSTATION *)Object, 0x307u);
    }
  }
  v12 = (struct tagCLIP *)Object[12];
  if ( v12 )
  {
    v18 = *((_DWORD *)Object + 26);
    while ( v18 )
    {
      v19 = *(unsigned __int16 *)v12;
      --v18;
      if ( (unsigned __int16)v19 >= 0xC000u )
        UserDeleteAtom(v19);
      UT_FreeCBFormat(v12);
      v12 = (struct tagCLIP *)((char *)v12 + 32);
    }
    Win32FreePool(Object[12], v5, v8);
    Object[12] = 0LL;
    *((_DWORD *)Object + 26) = 0;
  }
  v13 = Object[8];
  *((_DWORD *)Object + 8) |= 0x40u;
  HMAssignmentLock(Object + 10, v13);
  ++*((_DWORD *)Object + 27);
  ++*((_DWORD *)Object + 28);
  *((_DWORD *)Object + 8) &= ~0x80u;
  if ( !v11 )
  {
    if ( ThreadWin32Thread )
      PopAndFreeW32ThreadLock((__int64)v20, v14, v15, v16);
  }
  return 1LL;
}
