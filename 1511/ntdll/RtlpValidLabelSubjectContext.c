/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x1800D877C
 * Callers:
 *     RtlpSetSecurityObject @ 0x18005D220 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x18005DA90 (RtlSidDominates.c)
 *     RtlInitializeSid @ 0x180062030 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A54E0 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A7550 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidLabelSubjectContext(HANDLE ClientToken, _BYTE *Sid2, char a3, NTSTATUS *a4)
{
  _BYTE *v8; // rdi
  NTSTATUS InformationToken; // eax
  _BYTE *v11; // rax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  BOOLEAN v14; // cl
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-D0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Sid[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h]
  PSID TokenInformation[12]; // [rsp+B0h] [rbp-50h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  Dominates[0] = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v20 = 0x2000;
  v8 = Sid;
  if ( Sid2 )
    v8 = Sid2;
  InformationToken = NtQueryInformationToken(
                       ClientToken,
                       0x19u,
                       TokenInformation,
                       0x54u,
                       (PULONG)IdentifierAuthority.Value);
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(v8, Sid, Dominates) < 0 )
      return 0;
    v11 = Sid;
    if ( Dominates[0] )
      v11 = v8;
    v8 = v11;
  }
  v12 = RtlSidDominates(TokenInformation[0], v8, Dominates);
  *a4 = v12;
  if ( v12 < 0 )
    return 0;
  if ( !Dominates[0] )
  {
    v17 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v13 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Dominates);
    v14 = Dominates[0];
    if ( v13 < 0 )
      v14 = 0;
    if ( !v14 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
