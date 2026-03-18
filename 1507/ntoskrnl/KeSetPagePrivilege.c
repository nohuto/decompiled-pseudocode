/*
 * XREFs of KeSetPagePrivilege @ 0x1401FF2DC
 * Callers:
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     MiDeletePerSessionProtos @ 0x14021BD68 (MiDeletePerSessionProtos.c)
 *     MiDbgWriteCheck @ 0x1402236C0 (MiDbgWriteCheck.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1407F8044 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlMakeProtectedPageWritable @ 0x1401EDDC8 (HvlMakeProtectedPageWritable.c)
 */

int __fastcall KeSetPagePrivilege(__int64 a1, __int128 *a2, char a3)
{
  int result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  unsigned __int8 v9[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h]
  __int128 v11; // [rsp+30h] [rbp-78h]

  if ( (a3 & 6) != 0 )
  {
    result = 0;
    if ( (a3 & 2) == 0 || (v7 = *a2, v10 = a1, v11 = v7, result = HvlpEnterIumSecureMode(1u, 230, 0, v9), result >= 0) )
    {
      if ( (a3 & 4) != 0 )
        return HvlMakeProtectedPageWritable(a1, a2);
    }
  }
  else
  {
    v8 = *a2;
    v10 = a1;
    v11 = v8;
    return HvlpEnterIumSecureMode(1u, 227, 0, v9);
  }
  return result;
}
