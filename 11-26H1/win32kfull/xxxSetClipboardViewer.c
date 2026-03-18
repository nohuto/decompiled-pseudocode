/*
 * XREFs of xxxSetClipboardViewer @ 0x1401AF468
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1401AF3E0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1400573B0 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0?$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z @ 0x14017B358 (--0-$Win32RawLockedNtObject@UtagDESKTOP@@@@QEAA@PEAUtagDESKTOP@@@Z.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1401AF5E0 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  struct tagWINDOWSTATION *v2; // rax
  struct tagWINDOWSTATION *v3; // rdi
  _QWORD *v4; // rsi
  _QWORD v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+40h] [rbp-18h]

  if ( a1 && *(char *)(*(_QWORD *)(a1 + 40) + 19LL) < 0 )
    goto LABEL_12;
  v2 = CheckClipboardAccess(a1);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( a1 && *(struct tagWINDOWSTATION **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) + 656LL) != v2 )
  {
LABEL_12:
    UserSetLastError(87);
    return 0LL;
  }
  Win32RawLockedNtObject<tagDESKTOP>::Win32RawLockedNtObject<tagDESKTOP>(v7, v2);
  v4 = (_QWORD *)*((_QWORD *)v3 + 9);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v6[0] = (char *)v3 + 72;
  v6[1] = a1;
  HMAssignmentLock(v6, 0LL);
  xxxDrawClipboard(v3);
  if ( v8 != -1 )
  {
    PopAndFreeW32ThreadLock((__int64)v7);
    v8 = -1LL;
  }
  if ( !v4 )
    return 0LL;
  return HMValidateHandleNoSecure((__int64)v4, 1);
}
