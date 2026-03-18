/*
 * XREFs of SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094
 * Callers:
 *     NtSetInformationToken @ 0x1403C45C8 (NtSetInformationToken.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1403C091C (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSecurityDescriptor @ 0x14043429C (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140478384 (RtlSetDaclSecurityDescriptor.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140650A04 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryTypeString @ 0x140651514 (SepQueryTypeString.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 *     SepIsAclEqual @ 0x140656ECC (SepIsAclEqual.c)
 */

void __fastcall SeTokenDefaultDaclChangedAuditAlarm(__int64 a1, __int64 a2, __int64 a3, ACL *a4, PACL Dacl)
{
  PVOID v5; // rsi
  int v8; // r15d
  void *v9; // rdi
  void *v10; // r14
  _QWORD **PrimaryToken; // r13
  char IsAclEqual; // al
  char v13; // cl
  int v14; // eax
  int v15; // ebx
  int v16; // eax
  PVOID P; // [rsp+58h] [rbp-61h] BYREF
  void *v18; // [rsp+60h] [rbp-59h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-51h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v21[88]; // [rsp+B0h] [rbp-9h] BYREF
  void *v22; // [rsp+118h] [rbp+5Fh] BYREF
  __int64 v23; // [rsp+128h] [rbp+6Fh]

  v23 = a3;
  v5 = 0LL;
  P = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v8 = 0;
  memset(v21, 0, 40);
  v9 = 0LL;
  v10 = 0LL;
  v22 = 0LL;
  v18 = 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  PrimaryToken = (_QWORD **)SubjectContext.PrimaryToken;
  if ( SubjectContext.ClientToken )
    PrimaryToken = (_QWORD **)SubjectContext.ClientToken;
  if ( PrimaryToken )
  {
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(141LL, 1u, 0, (__int64)&SubjectContext) )
      goto LABEL_5;
    IsAclEqual = SepIsAclEqual(a4, Dacl);
    v13 = 0;
    if ( !IsAclEqual )
      v13 = 4;
    if ( (v13 & 4) == 0 )
      goto LABEL_5;
    if ( a2 )
    {
      v14 = SepQueryTypeString(a2, &P);
      v5 = P;
      v15 = v14;
      if ( v14 < 0 )
      {
LABEL_22:
        if ( v5 )
          ExFreePoolWithTag(v5, 0);
        if ( v9 )
          SeReleaseSecurityDescriptor(v9, 0, 1);
        if ( v10 )
          SeReleaseSecurityDescriptor(v10, 0, 1);
        if ( v15 < 0 )
          SepAuditFailed((unsigned int)v15);
LABEL_5:
        SeReleaseSubjectContext(&SubjectContext);
        return;
      }
      if ( P )
        v8 = (int)P;
    }
    v15 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( v15 >= 0 )
    {
      v15 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, a4, 0);
      if ( v15 >= 0 )
      {
        v15 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, 0, PagedPool, 1, &v22);
        if ( v15 < 0
          || (v15 = RtlCreateSecurityDescriptor(v21, 1u), v15 < 0)
          || (v15 = RtlSetDaclSecurityDescriptor(v21, 1u, Dacl, 0), v15 < 0) )
        {
          v9 = v22;
        }
        else
        {
          v16 = SeCaptureSecurityDescriptor((__int64)v21, 0, PagedPool, 1, &v18);
          v10 = v18;
          v15 = v16;
          v9 = v22;
          if ( v16 >= 0 )
            SepAdtSecurityDescriptorChangedAuditAlarm(
              (unsigned int)&SubjectContext,
              (unsigned int)SeSubsystemName,
              v8,
              0,
              v23,
              *PrimaryToken[19],
              (__int64)v22,
              4,
              (__int64)v18);
        }
      }
    }
    goto LABEL_22;
  }
  SepAuditFailed(3221225596LL);
}
