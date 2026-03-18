/*
 * XREFs of KeSetPagePrivilege @ 0x1401C3384
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiMarkPfnVerified @ 0x1400FE088 (MiMarkPfnVerified.c)
 *     MiDbgWriteCheck @ 0x1401DE0F4 (MiDbgWriteCheck.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140781C70 (ExpRevokeBootLoaderPagePrivileges.c)
 * Callees:
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     HvlMakeProtectedPageWritable @ 0x1401B319C (HvlMakeProtectedPageWritable.c)
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
