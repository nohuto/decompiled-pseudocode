/*
 * XREFs of RtlInitializeSidEx @ 0x140245844
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x1400083BC (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

NTSTATUS RtlInitializeSidEx(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount, ...)
{
  NTSTATUS result; // eax
  UCHAR *v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // r8
  UCHAR v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = SubAuthorityCount;
  result = RtlInitializeSid(Sid, IdentifierAuthority, SubAuthorityCount);
  if ( result >= 0 )
  {
    if ( SubAuthorityCount )
    {
      v6 = &v9;
      v7 = (char *)Sid + 8;
      v8 = SubAuthorityCount;
      do
      {
        v6 += 8;
        *v7++ = *(_DWORD *)v6;
        --v8;
      }
      while ( v8 );
    }
    return 0;
  }
  return result;
}
