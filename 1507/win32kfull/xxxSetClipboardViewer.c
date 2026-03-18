/*
 * XREFs of xxxSetClipboardViewer @ 0x1C0123880
 * Callers:
 *     NtUserSetClipboardViewer @ 0x1C01237F0 (NtUserSetClipboardViewer.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     CheckClipboardAccess @ 0x1C00D6580 (CheckClipboardAccess.c)
 *     ?xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C0123930 (-xxxDrawClipboard@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 */

__int64 __fastcall xxxSetClipboardViewer(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  _QWORD v5[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 && *(char *)(a1 + 43) < 0 )
    goto LABEL_10;
  v2 = (_QWORD *)CheckClipboardAccess();
  if ( !v2 )
    return 0LL;
  if ( a1 && *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 384LL) + 640LL) != v2 )
  {
LABEL_10:
    UserSetLastError(87);
    return 0LL;
  }
  PushW32ThreadLock((__int64)v2, v5, UserDereferenceObject);
  ObfReferenceObject(v2);
  v3 = (_QWORD *)v2[9];
  if ( v3 )
    v3 = (_QWORD *)*v3;
  HMAssignmentLock(v2 + 9, a1);
  xxxDrawClipboard((struct tagWINDOWSTATION *)v2);
  PopAndFreeW32ThreadLock((__int64)v5);
  if ( !v3 )
    return 0LL;
  return HMValidateHandleNoSecure((unsigned __int64)v3, 1);
}
