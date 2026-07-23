/*
 * XREFs of KeSetPagePrivilege @ 0x140147314
 * Callers:
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiMarkPfnVerified @ 0x140108054 (MiMarkPfnVerified.c)
 *     MiDbgWriteCheck @ 0x14012CB4C (MiDbgWriteCheck.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1407CD090 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     HvlQueryVsmConnection @ 0x1400A8750 (HvlQueryVsmConnection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, char a3)
{
  int result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  __int64 v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h]
  __int128 v12; // [rsp+30h] [rbp-78h]

  if ( (a3 & 6) == 0 )
  {
    v8 = *a2;
    v9 = 227LL;
    v11 = a1;
    goto LABEL_11;
  }
  result = 0;
  if ( (a3 & 2) == 0
    || (v7 = *a2, v11 = a1, v12 = v7, result = VslpEnterIumSecureMode(1, 230LL, 0LL, (__int64)v10), result >= 0) )
  {
    if ( (a3 & 4) != 0 )
    {
      if ( !HvlQueryVsmConnection(0LL) )
        return 0;
      v8 = *a2;
      v11 = a1;
      v9 = 229LL;
LABEL_11:
      v12 = v8;
      return VslpEnterIumSecureMode(1, v9, 0LL, (__int64)v10);
    }
  }
  return result;
}
