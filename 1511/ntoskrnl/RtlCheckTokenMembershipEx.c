/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x140003E78
 * Callers:
 *     RtlCheckTokenMembership @ 0x140003E6C (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x140646790 (RtlCapabilityCheck.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     SeAccessCheckWithHint @ 0x14008AE20 (SeAccessCheckWithHint.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwDuplicateToken @ 0x140150E60 (ZwDuplicateToken.c)
 *     RtlInitializeSidEx @ 0x1401F6C0C (RtlInitializeSidEx.c)
 *     RtlAddAccessAllowedAce @ 0x1403C01BC (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1403C01DC (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1403C0234 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x14043549C (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Owner, int a3, _BYTE *a4)
{
  NTSTATUS v4; // edi
  char v6; // r12
  HANDLE v8; // r14
  char v9; // si
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  NTSTATUS v13; // [rsp+70h] [rbp-90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-88h] BYREF
  PVOID Object; // [rsp+98h] [rbp-68h] BYREF
  char *v16; // [rsp+A0h] [rbp-60h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D8h] [rbp-28h] BYREF
  _DWORD v19[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v20; // [rsp+108h] [rbp+8h]
  _BYTE Sid[80]; // [rsp+110h] [rbp+10h] BYREF
  ACL Acl; // [rsp+160h] [rbp+60h] BYREF
  char v23; // [rsp+200h] [rbp+100h] BYREF

  v4 = 0;
  Handle = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v6 = a3;
  v8 = ExistingTokenHandle;
  *a4 = 0;
  if ( (a3 & 0xFFFFFFFE) == 0 )
  {
    v9 = 0;
    if ( ExistingTokenHandle )
    {
      v19[1] = 2;
      ObjectAttributes.SecurityQualityOfService = v19;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityDescriptor = 0LL;
      v19[0] = 12;
      v20 = 1;
      v4 = ZwDuplicateToken(ExistingTokenHandle, 8u, &ObjectAttributes, 0, TokenImpersonation, &Handle);
      if ( v4 < 0 )
      {
LABEL_14:
        if ( v8 )
          return (unsigned int)v4;
LABEL_15:
        if ( Handle )
          ZwClose(Handle);
        return (unsigned int)v4;
      }
      v4 = 0;
      v8 = 0LL;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      v9 = 1;
    }
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlSetGroupSecurityDescriptor(SecurityDescriptor, Owner, 0);
    RtlCreateAcl(&Acl, 0xA0u, 2u);
    RtlAddAccessAllowedAce(&Acl, 2u, 1u, Owner);
    if ( (v6 & 1) != 0 )
    {
      RtlInitializeSidEx(Sid, &RtlpAppPackageAuthority, 2LL, 2LL, 1);
      RtlAddAccessAllowedAce(&Acl, 2u, 1u, Sid);
    }
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    v16 = &v23;
    if ( !v9 )
    {
      SubjectContext.ProcessAuditId = KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Blink;
      v4 = ObReferenceObjectByHandle(Handle, 8u, (POBJECT_TYPE)SeTokenObjectType, 0, &Object, 0LL);
      SubjectContext.PrimaryToken = Object;
      if ( v4 < 0 )
        goto LABEL_15;
      v4 = 0;
    }
    SeAccessCheckWithHint(
      SecurityDescriptor,
      0LL,
      &SubjectContext,
      0LL,
      1,
      0,
      &v16,
      &RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      &v11,
      &v13);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v13 )
    {
      if ( v13 == -1073741790 )
        goto LABEL_12;
    }
    else if ( v11 == 1 )
    {
      *a4 = 1;
LABEL_12:
      if ( !v9 )
        goto LABEL_15;
      SeReleaseSubjectContext(&SubjectContext);
      goto LABEL_14;
    }
    v4 = v13;
    goto LABEL_12;
  }
  return 3221225485LL;
}
