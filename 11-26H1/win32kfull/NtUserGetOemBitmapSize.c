/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1402349D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     RtlWriteULong64ToUser @ 0x1403E2324 (RtlWriteULong64ToUser.c)
 */

_BOOL8 __fastcall NtUserGetOemBitmapSize(unsigned int a1, __int64 a2)
{
  BOOL v4; // edi
  char *OemBitmapInfo; // rax
  int v6; // r14d
  int v7; // esi
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v4 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87);
  }
  else
  {
    OemBitmapInfo = GetOemBitmapInfo(a1);
    v6 = *((__int16 *)OemBitmapInfo + 2);
    LODWORD(v10) = v6;
    v7 = *((__int16 *)OemBitmapInfo + 3);
    HIDWORD(v10) = v7;
    RtlWriteULong64ToUser(a2, v10);
    if ( v6 )
      v4 = v7 != 0;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
