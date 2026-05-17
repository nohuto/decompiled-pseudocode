/*
 * XREFs of RtlAdjustPrivilege @ 0x18006F4A0
 * Callers:
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x180080E50 (RtlpVerifyAndCommitUILanguageSettings.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenThreadToken @ 0x180093B40 (NtOpenThreadToken.c)
 *     NtAdjustPrivilegesToken @ 0x180093D10 (NtAdjustPrivilegesToken.c)
 *     NtOpenProcessToken @ 0x180094A40 (NtOpenProcessToken.c)
 */

__int64 __fastcall RtlAdjustPrivilege(unsigned int a1, bool a2, char a3, bool *a4)
{
  __int64 result; // rax
  int v8; // edi
  HANDLE Handle[2]; // [rsp+30h] [rbp-40h] BYREF
  int v10; // [rsp+48h] [rbp-28h] BYREF
  __int64 v11; // [rsp+4Ch] [rbp-24h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  char v14; // [rsp+64h] [rbp-Ch]

  if ( a3 == 1 )
    result = NtOpenThreadToken(-2LL, 40LL, 0LL, Handle);
  else
    result = NtOpenProcessToken(-1LL, 40LL, Handle);
  if ( (int)result >= 0 )
  {
    Handle[1] = (HANDLE)a1;
    v11 = a1;
    v10 = 1;
    v12 = a2 ? 2 : 0;
    v8 = NtAdjustPrivilegesToken(Handle[0], 0LL, &v10);
    NtClose(Handle[0]);
    if ( v8 == 262 )
      v8 = -1073741727;
    if ( v8 >= 0 )
    {
      if ( v13 )
        *a4 = (v14 & 2) != 0;
      else
        *a4 = a2;
    }
    return (unsigned int)v8;
  }
  return result;
}
