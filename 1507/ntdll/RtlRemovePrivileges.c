/*
 * XREFs of RtlRemovePrivileges @ 0x18007FEF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x180093B10 (NtQueryInformationToken.c)
 *     NtAdjustPrivilegesToken @ 0x180093D10 (NtAdjustPrivilegesToken.c)
 */

NTSTATUS __cdecl RtlRemovePrivileges(HANDLE TokenHandle, PULONG PrivilegesToKeep, ULONG PrivilegeCount)
{
  __int64 v3; // rbx
  ULONG v4; // r9d
  NTSTATUS result; // eax
  DWORD v7; // edx
  __int64 i; // rcx
  unsigned __int64 LowPart; // r9
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-1C8h] BYREF
  _TOKEN_PRIVILEGES TokenInformation[26]; // [rsp+40h] [rbp-1B8h] BYREF

  v3 = 0LL;
  v4 = 0;
  if ( PrivilegeCount )
  {
    while ( *PrivilegesToKeep - 2 <= 0x21 )
    {
      v3 |= 1LL << *PrivilegesToKeep;
      ++v4;
      ++PrivilegesToKeep;
      if ( v4 >= PrivilegeCount )
        goto LABEL_4;
    }
    return -1073741811;
  }
  else
  {
LABEL_4:
    result = NtQueryInformationToken(TokenHandle, 3u, TokenInformation, 0x1A0u, ReturnLength);
    if ( result >= 0 )
    {
      v7 = TokenInformation[0].PrivilegeCount;
      for ( i = 0LL; (unsigned int)i < v7; i = (unsigned int)(i + 1) )
      {
        LowPart = TokenInformation[0].Privileges[i].Luid.LowPart;
        if ( _bittest64(&v3, LowPart) )
        {
          v3 &= ~(1LL << LowPart);
        }
        else
        {
          TokenInformation[0].Privileges[i].Attributes = 4;
          v7 = TokenInformation[0].PrivilegeCount;
        }
      }
      if ( v3 )
        return 262;
      else
        return NtAdjustPrivilegesToken(TokenHandle, 0, TokenInformation, 0x1A0u, 0LL, 0LL);
    }
  }
  return result;
}
