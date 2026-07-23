/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84
 * Callers:
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SepIsAclEqual @ 0x1406957AC (SepIsAclEqual.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  int v8; // r15d
  void *v9; // rdi
  void *v10; // r14
  _QWORD **PrimaryToken; // r13
  char IsAclEqual; // al
  __int64 v13; // r8
  __int64 v14; // r9
  char v15; // cl
  int v16; // eax
  int v17; // ebx
  int v18; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v20; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v23[88]; // [rsp+B0h] [rbp-9h] BYREF
  void *v24; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v25; // [rsp+128h] [rbp+6Fh]

  v25 = a3;
  v5 = 0LL;
  P = 0LL;
  v8 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v23, 0, 0x28uLL);
  v9 = 0LL;
  v10 = 0LL;
  v24 = 0LL;
  v20 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(142LL, 1u, 0, (__int64)&SubjectContext) )
      goto LABEL_5;
    IsAclEqual = SepIsAclEqual(a4, Dacl);
    v15 = 0;
    if ( !IsAclEqual )
      v15 = 4;
    if ( (v15 & 4) == 0 )
      goto LABEL_5;
    if ( a2 )
    {
      v16 = SepQueryTypeString(a2, &P, v13, v14);
      v5 = P;
      v17 = v16;
      if ( v16 < 0 )
      {
LABEL_22:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v9 )
          SeReleaseSecurityDescriptor(v9, 0, 1);
        if ( v10 )
          SeReleaseSecurityDescriptor(v10, 0, 1);
        if ( v17 < 0 )
          SepAuditFailed((unsigned int)v17);
LABEL_5:
        SeReleaseSubjectContext(&SubjectContext);
        return;
      }
      if ( P )
        v8 = (int)P;
    }
    v17 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v17 >= 0 )
    {
      v17 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v17 >= 0 )
      {
        v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v24);
        if ( v17 < 0
          || (v17 = RtlCreateSecurityDescriptor(v23, 1u), v17 < 0)
          || (v17 = RtlSetDaclSecurityDescriptor(v23, 1u, Dacl, 0), v17 < 0) )
        {
          v9 = v24;
        }
        else
        {
          v18 = SeCaptureSecurityDescriptor((__int64)v23, 0, PagedPool, 1, &v20);
          v10 = v20;
          v17 = v18;
          v9 = v24;
          if ( v18 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)&SeSubsystemName,
              v8,
              0,
              v25,
              *PrimaryToken[19],
              (__int64)v24,
              4,
              (__int64)v20);
        }
      }
    }
    goto LABEL_22;
  }
  SepAuditFailed(3221225596LL);
}
