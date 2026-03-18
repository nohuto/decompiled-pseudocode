/*
 * XREFs of NtUserGetClipboardMetadata @ 0x140225E90
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     InternalGetClipboardMetadata @ 0x140225F64 (InternalGetClipboardMetadata.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1403E20B8 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetClipboardMetadata(unsigned int a1, void *a2)
{
  __int64 v4; // rcx
  int ClipboardMetadata; // ebx
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 Src; // [rsp+48h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-18h]

  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  Src = 0LL;
  v10 = 0;
  v7 = 0LL;
  v8 = 0;
  RtlCopyFromUser(&v7, a2, 0xCuLL);
  Src = v7;
  v10 = v8;
  ClipboardMetadata = InternalGetClipboardMetadata(a1);
  if ( ClipboardMetadata == 1 )
    RtlCopyToUser(a2, &Src, 0xCuLL);
  UserSessionSwitchLeaveCrit(v4);
  return ClipboardMetadata;
}
