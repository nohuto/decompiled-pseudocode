/*
 * XREFs of xxxEmptyClipboard @ 0x1401B2154
 * Callers:
 *     ForceEmptyClipboard @ 0x1401B18B0 (ForceEmptyClipboard.c)
 *     NtUserEmptyClipboard @ 0x1401B1980 (NtUserEmptyClipboard.c)
 *     xxxSnapWindow @ 0x140289660 (xxxSnapWindow.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1401B22B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     ?xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z @ 0x1401B2498 (-xxxSendClipboardMessage@@YAXPEAUtagWINDOWSTATION@@I@Z.c)
 *     ?ManualLock@?$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z @ 0x1401B255C (-ManualLock@-$Win32RawLockedNtObject@UtagWINDOWSTATION@@@@QEAAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxEmptyClipboard(__int64 BugCheckParameter3)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rcx
  struct tagTHREADINFO *v3; // rdi
  struct tagCLIP *v4; // rdi
  struct tagWINDOWSTATION *v6; // rax
  int v7; // esi
  __int64 v8; // rcx
  struct tagCLIP *v9; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v12 = -1LL;
  v1 = BugCheckParameter3;
  v10[2] = 0LL;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v3 = PtiCurrent(BugCheckParameter3);
  if ( v1 )
    goto LABEL_2;
  v6 = CheckClipboardAccess(v2);
  v1 = (ULONG_PTR)v6;
  if ( !v6 )
    return 0LL;
  if ( *((struct tagTHREADINFO **)v6 + 6) != v3 )
  {
    UserSetLastError(1418);
    return 0LL;
  }
LABEL_2:
  if ( (*(_DWORD *)(v1 + 32) & 0x10) == 0 && v3 )
  {
    Win32RawLockedNtObject<tagWINDOWSTATION>::ManualLock((ULONG_PTR)BugCheckParameter2, v1);
    xxxSendClipboardMessage((struct tagWINDOWSTATION *)v1, 0x307u);
  }
  v4 = *(struct tagCLIP **)(v1 + 96);
  if ( v4 )
  {
    v7 = *(_DWORD *)(v1 + 104);
    while ( v7 )
    {
      v8 = *(unsigned __int16 *)v4;
      --v7;
      if ( (unsigned __int16)v8 >= 0xC000u )
        UserDeleteAtom(v8);
      v9 = v4;
      v4 = (struct tagCLIP *)((char *)v4 + 32);
      UT_FreeCBFormat(v9);
    }
    Win32FreePool(*(void **)(v1 + 96));
    *(_QWORD *)(v1 + 96) = 0LL;
    *(_DWORD *)(v1 + 104) = 0;
  }
  *(_DWORD *)(v1 + 32) |= 0x40u;
  v10[0] = v1 + 80;
  v10[1] = *(_QWORD *)(v1 + 64);
  HMAssignmentLock(v10, 0LL);
  ++*(_DWORD *)(v1 + 108);
  ++*(_DWORD *)(v1 + 112);
  *(_DWORD *)(v1 + 32) &= ~0x80u;
  if ( v12 != -1 )
    PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
  return 1LL;
}
