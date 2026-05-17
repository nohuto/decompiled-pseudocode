/*
 * XREFs of RtlAdjustPrivilege @ 0x180078F20
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180088F80 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A5540 (NtOpenThreadToken.c)
 *     NtAdjustPrivilegesToken @ 0x1800A58E0 (NtAdjustPrivilegesToken.c)
 *     NtOpenProcessToken @ 0x1800A7390 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlAdjustPrivilege(unsigned int a1, bool a2, char a3, bool *a4)
{
  __int64 result; // rax
  int v8; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-40h] BYREF
  char v10[8]; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  __int64 v12; // [rsp+4Ch] [rbp-24h]
  int v13; // [rsp+54h] [rbp-1Ch]
  int v14[3]; // [rsp+58h] [rbp-18h] BYREF
  char v15; // [rsp+64h] [rbp-Ch]

  if ( a3 == 1 )
    result = NtOpenThreadToken(-2LL, 40LL, 0LL, Handle);
  else
    result = NtOpenProcessToken(-1LL, 40LL, Handle);
  if ( (int)result >= 0 )
  {
    Handle[1] = (HANDLE)a1;
    v12 = a1;
    v11 = 1;
    v13 = a2 ? 2 : 0;
    v8 = NtAdjustPrivilegesToken(Handle[0], 0LL, &v11, 16LL, v14, v10);
    NtClose(Handle[0]);
    if ( v8 == 262 )
      v8 = -1073741727;
    if ( v8 >= 0 )
    {
      if ( v14[0] )
        *a4 = (v15 & 2) != 0;
      else
        *a4 = a2;
    }
    return (unsigned int)v8;
  }
  return result;
}
