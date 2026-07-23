/*
 * XREFs of RtlCheckTokenCapability @ 0x140210438
 * Callers:
 *     RtlCapabilityCheck @ 0x140683788 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwQueryInformationToken @ 0x14015A610 (ZwQueryInformationToken.c)
 *     ZwDuplicateToken @ 0x14015AA30 (ZwDuplicateToken.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     RtlIsCapabilitySid @ 0x14047B0A8 (RtlIsCapabilitySid.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048DBFC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048DC54 (RtlSetOwnerSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCheckTokenCapability(HANDLE TokenHandle, PSID CapabilitySidToCheck, PBOOLEAN HasCapability)
{
  char v4; // si
  int v7; // ebx
  PACCESS_TOKEN PrimaryToken; // rcx
  bool v9; // al
  int v10; // r14d
  HANDLE TokenHandlea; // [rsp+60h] [rbp-A0h] BYREF
  ULONG ReturnLength; // [rsp+68h] [rbp-98h] BYREF
  int v14; // [rsp+6Ch] [rbp-94h] BYREF
  int v15; // [rsp+70h] [rbp-90h] BYREF
  PVOID v16; // [rsp+78h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+A0h] [rbp-60h] BYREF
  char *v19; // [rsp+A8h] [rbp-58h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+E0h] [rbp-20h] BYREF
  _OWORD TokenInformation[6]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v23[2]; // [rsp+170h] [rbp+70h] BYREF
  __int16 v24; // [rsp+178h] [rbp+78h]
  ACL Acl; // [rsp+180h] [rbp+80h] BYREF
  char v26; // [rsp+220h] [rbp+120h] BYREF
  char v27; // [rsp+260h] [rbp+160h] BYREF

  TokenHandlea = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v4 = 0;
  *HasCapability = 0;
  v16 = &v27;
  if ( !RtlIsCapabilitySid(CapabilitySidToCheck) )
  {
    v7 = -1073741811;
    goto LABEL_22;
  }
  if ( TokenHandle )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.SecurityQualityOfService = v23;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    v23[0] = 12;
    v23[1] = 2;
    v24 = 1;
    v7 = ZwDuplicateToken(TokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &TokenHandlea);
    if ( v7 < 0 )
      goto LABEL_22;
    TokenHandle = 0LL;
    ReturnLength = 88;
    ZwQueryInformationToken(TokenHandlea, TokenUser, TokenInformation, 0x58u, &ReturnLength);
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    PrimaryToken = SubjectContext.PrimaryToken;
    v4 = 1;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeQueryInformationToken(PrimaryToken, TokenUser, &v16);
    TokenInformation[0] = *(_OWORD *)v16;
  }
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *(PSID *)&TokenInformation[0], 0);
  RtlSetGroupSecurityDescriptor(SecurityDescriptor, *(PSID *)&TokenInformation[0], 0);
  RtlCreateAcl(&Acl, 0xA0u, 2u);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, *(PSID *)&TokenInformation[0]);
  RtlAddAccessAllowedAce(&Acl, 2u, 0x10001u, CapabilitySidToCheck);
  RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
  v19 = &v26;
  if ( v4
    || (SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink,
        v7 = ObReferenceObjectByHandle(TokenHandlea, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL),
        SubjectContext.PrimaryToken = Object,
        v7 >= 0) )
  {
    v9 = SeAccessCheckWithHint(
           (ULONGLONG)SecurityDescriptor,
           0,
           (int *)&SubjectContext,
           0,
           0x10001u,
           0,
           &v19,
           (__int64)&RtlpCheckTokenCapabilityGenericMapping,
           KeGetCurrentThread()->PreviousMode,
           &v15,
           &v14);
    v10 = v14;
    v7 = v14;
    if ( !v9 )
      v7 = -1073741790;
    if ( !v4 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v7 >= 0 )
    {
      if ( !v10 && v15 == 65537 )
        *HasCapability = 1;
      v7 = 0;
    }
    if ( v4 )
    {
      SeReleaseSubjectContext(&SubjectContext);
LABEL_22:
      if ( TokenHandle )
        return v7;
    }
  }
  if ( TokenHandlea )
    ZwClose(TokenHandlea);
  return v7;
}
