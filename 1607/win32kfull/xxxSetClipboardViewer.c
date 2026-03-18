/*
 * XREFs of xxxSetClipboardViewer @ 0x1C0151B64
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C0151AD0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     CheckClipboardAccess @ 0x1C00F9194 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0151C14 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __int64 v6; // r9
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 && *(char *)(a1 + 43) < 0 )
    goto LABEL_10;
  v5 = (_QWORD *)CheckClipboardAccess(a1, a2, a3, a4);
  if ( !v5 )
    return 0LL;
  if ( a1 && *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL) + 632LL) != v5 )
  {
LABEL_10:
    UserSetLastError(87LL);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v5, v15, UserDereferenceObject, v6);
  ObfReferenceObject(v5);
  v7 = (_QWORD *)v5[9];
  if ( v7 )
    v7 = (_QWORD *)*v7;
  HMAssignmentLock(v5 + 9, a1);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v5);
  PopAndFreeW32ThreadLock((__int64)v15, v8, v9, v10);
  if ( !v7 )
    return 0LL;
  LOBYTE(v11) = 1;
  return HMValidateHandleNoSecure((unsigned __int64)v7, v11, v12, v13);
}
