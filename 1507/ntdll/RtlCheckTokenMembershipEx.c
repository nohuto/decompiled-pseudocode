/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x18004AF00
 * Callers:
 *     RtlCapabilityCheck @ 0x18004A7A0 (RtlCapabilityCheck.c)
 *     RtlCheckTokenMembership @ 0x1800CE760 (RtlCheckTokenMembership.c)
 * Callees:
 *     RtlAddAccessAllowedAce @ 0x18001FD50 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180020084 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18004B180 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x18004CBD0 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x18004E790 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x18004E7F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18004E850 (RtlCreateSecurityDescriptor.c)
 *     RtlInitializeSidEx @ 0x18004F0B0 (RtlInitializeSidEx.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x180093900 (ZwAccessCheck.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtOpenThreadTokenEx @ 0x180093BF0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180093C00 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x180093D20 (NtDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembershipEx(HANDLE TokenHandle, PSID SidToCheck, ULONG Flags, PBOOLEAN IsMember)
{
  char v5; // r14
  int v8; // ebx
  PPRIVILEGE_SET PrivilegeSet; // [rsp+20h] [rbp-E0h]
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+48h] [rbp-B8h] BYREF
  NTSTATUS AccessStatus; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG PrivilegeSetLength; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD v18[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int16 v19; // [rsp+C0h] [rbp-40h]
  _BYTE Sid[80]; // [rsp+D0h] [rbp-30h] BYREF
  ACL Acl; // [rsp+120h] [rbp+20h] BYREF
  _PRIVILEGE_SET v22; // [rsp+1C0h] [rbp+C0h] BYREF

  ClientToken = 0LL;
  *IsMember = 0;
  v5 = Flags;
  if ( (Flags & 0xFFFFFFFE) == 0 )
  {
    if ( TokenHandle )
    {
      ClientToken = TokenHandle;
    }
    else
    {
      v8 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 0, 0, &ClientToken);
      if ( v8 == -1073741700 )
      {
        v8 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
        if ( v8 < 0 )
          goto LABEL_17;
        memset(&ObjectAttributes.RootDirectory, 0, 20);
        ObjectAttributes.SecurityDescriptor = 0LL;
        ObjectAttributes.SecurityQualityOfService = v18;
        ObjectAttributes.Length = 48;
        v18[1] = 2;
        v18[0] = 12;
        v19 = 1;
        v8 = NtDuplicateToken(TokenHandlea, 0xCu, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
        NtClose(TokenHandlea);
      }
      if ( v8 < 0 )
      {
LABEL_17:
        if ( ClientToken )
          NtClose(ClientToken);
        return v8;
      }
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, SidToCheck, 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlpAddKnownAce(&Acl, 2u, 0, 1, (unsigned __int8 *)SidToCheck, 0);
    if ( (v5 & 1) != 0 )
    {
      LODWORD(PrivilegeSet) = 1;
      RtlInitializeSidEx(Sid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u, 2LL, PrivilegeSet);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v8 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           1u,
           (PGENERIC_MAPPING)&RtlpCheckTokenMembershipGenericMapping,
           &v22,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v8 >= 0 )
    {
      v8 = 0;
      if ( AccessStatus )
      {
        if ( AccessStatus == -1073741790 )
          goto LABEL_9;
      }
      else if ( GrantedAccess == 1 )
      {
        *IsMember = 1;
        goto LABEL_9;
      }
      v8 = AccessStatus;
    }
LABEL_9:
    if ( TokenHandle )
      return v8;
    goto LABEL_17;
  }
  return -1073741811;
}
