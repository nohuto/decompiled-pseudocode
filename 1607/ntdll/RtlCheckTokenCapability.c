/*
 * XREFs of RtlCheckTokenCapability @ 0x18000DDE0
 * Callers:
 *     RtlCapabilityCheck @ 0x18000DA00 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlIsCapabilitySid @ 0x18000DD10 (RtlIsCapabilitySid.c)
 *     RtlCreateSecurityDescriptor @ 0x180010EC0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x180010F00 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180010F60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180010FC0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x1800149A0 (RtlAddAccessAllowedAce.c)
 *     RtlCreateAcl @ 0x1800409F0 (RtlCreateAcl.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A6420 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A6840 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A6A00 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A6A20 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A6C60 (NtDuplicateToken.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  HANDLE v6; // rcx
  int v7; // ebx
  HANDLE ClientToken; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ReturnLength; // [rsp+48h] [rbp-B8h] BYREF
  ULONG PrivilegeSetLength; // [rsp+4Ch] [rbp-B4h] BYREF
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE TokenHandlea; // [rsp+58h] [rbp-A8h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+90h] [rbp-70h] BYREF
  PSID TokenInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v18[2]; // [rsp+120h] [rbp+20h] BYREF
  __int16 v19; // [rsp+128h] [rbp+28h]
  ACL Acl; // [rsp+130h] [rbp+30h] BYREF
  _PRIVILEGE_SET PrivilegeSet; // [rsp+1D0h] [rbp+D0h] BYREF

  ClientToken = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_9;
  }
  if ( TokenHandle )
  {
    v6 = TokenHandle;
    ClientToken = TokenHandle;
    goto LABEL_4;
  }
  v7 = NtOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0, &ClientToken);
  if ( v7 == -1073741700 )
  {
    v7 = NtOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_16;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v18;
    ObjectAttributes.Length = 48;
    v18[0] = 12;
    v18[1] = 2;
    v19 = 1;
    v7 = NtDuplicateToken(TokenHandlea, 8u, &ObjectAttributes, 0, TokenImpersonation, &ClientToken);
    NtClose(TokenHandlea);
  }
  if ( v7 >= 0 )
  {
    v6 = ClientToken;
LABEL_4:
    ReturnLength = 88;
    NtQueryInformationToken(v6, 1u, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    PrivilegeSetLength = 56;
    v7 = ZwAccessCheck(
           SecurityDescriptor,
           ClientToken,
           0x10001u,
           (PGENERIC_MAPPING)&RtlpCheckTokenCapabilityGenericMapping,
           &PrivilegeSet,
           &PrivilegeSetLength,
           &GrantedAccess,
           &AccessStatus);
    if ( v7 >= 0 )
    {
      if ( !AccessStatus && GrantedAccess == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
LABEL_9:
    if ( TokenHandle )
      return v7;
  }
LABEL_16:
  if ( ClientToken )
    NtClose(ClientToken);
  return v7;
}
