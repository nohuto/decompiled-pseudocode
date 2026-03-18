/*
 * XREFs of RtlCheckTokenMembershipEx @ 0x1400852B0
 * Callers:
 *     RtlCheckTokenMembership @ 0x1400852A4 (RtlCheckTokenMembership.c)
 *     RtlCapabilityCheck @ 0x1406836A4 (RtlCapabilityCheck.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwDuplicateToken @ 0x14015A4C0 (ZwDuplicateToken.c)
 *     RtlInitializeSidEx @ 0x140210E30 (RtlInitializeSidEx.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140413E70 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140413ED0 (RtlCreateSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     RtlCreateAcl @ 0x140420AB8 (RtlCreateAcl.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 *     RtlAddAccessAllowedAce @ 0x14048D14C (RtlAddAccessAllowedAce.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14048D16C (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14048D1C4 (RtlSetOwnerSecurityDescriptor.c)
 */

__int64 __fastcall RtlCheckTokenMembershipEx(HANDLE ExistingTokenHandle, PSID Owner, int a3, _BYTE *a4)
{
  NTSTATUS v4; // edi
  char v6; // r12
  HANDLE v8; // r14
  char v9; // si
  NTSTATUS v11; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+64h] [rbp-9Ch] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+90h] [rbp-70h] BYREF
  char *v16; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+D0h] [rbp-30h] BYREF
  _DWORD v19[2]; // [rsp+F8h] [rbp-8h] BYREF
  __int16 v20; // [rsp+100h] [rbp+0h]
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
LABEL_13:
        if ( v8 )
          return (unsigned int)v4;
LABEL_14:
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
        goto LABEL_14;
      v4 = 0;
    }
    SeAccessCheckWithHint(
      (ULONGLONG)SecurityDescriptor,
      0,
      (int *)&SubjectContext,
      0,
      1u,
      0,
      &v16,
      (__int64)&RtlpCheckTokenMembershipGenericMapping,
      KeGetCurrentThread()->PreviousMode,
      &v12,
      &v11);
    if ( !v9 )
      ObfDereferenceObjectWithTag(SubjectContext.PrimaryToken, 0x746C6644u);
    if ( v11 )
    {
      if ( v11 == -1073741790 )
      {
LABEL_11:
        if ( !v9 )
          goto LABEL_14;
        SeReleaseSubjectContext(&SubjectContext);
        goto LABEL_13;
      }
    }
    else if ( v12 == 1 )
    {
      *a4 = 1;
      goto LABEL_11;
    }
    v4 = v11;
    goto LABEL_11;
  }
  return 3221225485LL;
}
