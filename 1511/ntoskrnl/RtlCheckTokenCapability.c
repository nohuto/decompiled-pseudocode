/*
 * XREFs of RtlCheckTokenCapability @ 0x1401F6378
 * Callers:
 *     RtlCapabilityCheck @ 0x140646790 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x140150A40 (ZwQueryInformationToken.c)
 *     ZwOpenThreadTokenEx @ 0x140150C00 (ZwOpenThreadTokenEx.c)
 *     ZwOpenProcessTokenEx @ 0x140150C20 (ZwOpenProcessTokenEx.c)
 *     ZwDuplicateToken @ 0x140150E60 (ZwDuplicateToken.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     RtlIsCapabilitySid @ 0x1403C1068 (RtlIsCapabilitySid.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  int v6; // ebx
  bool v7; // al
  NTSTATUS v8; // edi
  HANDLE TokenHandlea; // [rsp+60h] [rbp-A0h] BYREF
  NTSTATUS v11; // [rsp+68h] [rbp-98h] BYREF
  ULONG ReturnLength; // [rsp+6Ch] [rbp-94h] BYREF
  int v13; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ExistingTokenHandle; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+80h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  char *v17; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+C0h] [rbp-40h] BYREF
  PVOID v19; // [rsp+D0h] [rbp-30h]
  struct _LIST_ENTRY *Blink; // [rsp+D8h] [rbp-28h]
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  PSID TokenInformation[12]; // [rsp+110h] [rbp+10h] BYREF
  int v23; // [rsp+170h] [rbp+70h] BYREF
  int v24; // [rsp+174h] [rbp+74h]
  __int16 v25; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v27; // [rsp+220h] [rbp+120h] BYREF

  TokenHandlea = 0LL;
  v18[0] = 0LL;
  v18[1] = 0LL;
  v19 = 0LL;
  Blink = 0LL;
  *HasCapability = 0;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v6 = -1073741811;
    goto LABEL_18;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v23 = 12;
    v24 = 2;
    v25 = 1;
    v6 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v6 < 0 )
      goto LABEL_18;
    TokenHandle = 0LL;
LABEL_10:
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, TokenInformation[0], 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, TokenInformation[0]);
    RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v17 = &v27;
    Blink = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
    v6 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
    v19 = Object;
    if ( v6 >= 0 )
    {
      v7 = SeAccessCheckWithHint(
             (__int64)SecurityDescriptor,
             0,
             (int *)v18,
             0,
             0x10001u,
             0,
             &v17,
             (__int64)&RtlpCheckTokenCapabilityGenericMapping,
             KeGetCurrentThread()->PreviousMode,
             &v13,
             &v11);
      v8 = v11;
      v6 = v11;
      if ( !v7 )
        v6 = -1073741790;
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      if ( v6 >= 0 )
      {
        if ( !v8 && v13 == 65537 )
          *HasCapability = 1;
        v6 = 0;
LABEL_18:
        if ( TokenHandle )
          return v6;
        goto LABEL_19;
      }
    }
    goto LABEL_19;
  }
  v6 = ZwOpenThreadTokenEx((HANDLE)0xFFFFFFFFFFFFFFFELL, 8u, 1u, 0x200u, &TokenHandlea);
  if ( v6 == -1073741700 )
  {
    v6 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 0xAu, 0x200u, &ExistingTokenHandle);
    if ( v6 < 0 )
      goto LABEL_19;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = &v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v23 = 12;
    v24 = 2;
    v25 = 1;
    v6 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    ZwClose(ExistingTokenHandle);
  }
  if ( v6 >= 0 )
    goto LABEL_10;
LABEL_19:
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v6;
}
