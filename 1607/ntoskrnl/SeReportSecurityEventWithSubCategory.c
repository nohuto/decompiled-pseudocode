/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x14007622C
 * Callers:
 *     SeReportSecurityEvent @ 0x140219EE4 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAuditingForSubCategory @ 0x140076484 (SepAuditingForSubCategory.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  __int64 v7; // r8
  PUNICODE_STRING v8; // rbx
  unsigned __int8 *v9; // rdi
  USHORT Type; // cx
  unsigned __int8 CurrentIrql; // r13
  PACCESS_TOKEN PrimaryToken; // rcx
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r9
  ULONG AuditId; // edx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  v7 = 0LL;
  v8 = SourceName;
  v9 = 0LL;
  if ( Flags )
    return -1073741811;
  if ( !SourceName )
    return -1073741811;
  if ( !SourceName->Buffer )
    return -1073741811;
  if ( !SourceName->Length )
    return -1073741811;
  if ( !AuditParameters )
    return -1073741811;
  if ( AuditSubcategoryId - 100 > 0x3B )
    return -1073741811;
  if ( AuditParameters->ParameterCount > 0x1C )
    return -1073741811;
  Type = AuditParameters->Type;
  if ( (Type & 0x18) == 0 )
    return -1073741811;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
  {
    LOBYTE(SourceName) = Type == 8;
    if ( !(unsigned __int8)SepAuditingForSubCategory(AuditSubcategoryId, SourceName) )
      goto LABEL_11;
    v9 = (unsigned __int8 *)SeLocalSystemSid;
    if ( UserSid )
      v9 = (unsigned __int8 *)UserSid;
LABEL_19:
    memset(Src, 0, 0x418uLL);
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    WORD1(Src[2]) = AuditParameters->Type;
    v16 = 2;
    v17 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    LOWORD(Src[2]) = AuditSubcategoryId;
    LODWORD(Src[3]) = 4;
    Src[6] = v9;
    HIDWORD(Src[3]) = 4 * v17 + 8;
    Src[10] = &SeSubsystemName;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    if ( AuditSubcategoryId == 123 )
    {
      HIDWORD(Src[2]) |= 6u;
      v16 = 3;
      Length = v8->Length;
      LODWORD(Src[11]) = 1;
      HIDWORD(Src[11]) = Length + 16;
      Src[14] = v8;
      LODWORD(Src[1]) = 3;
    }
    else
    {
      v18 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v18 | 2;
    }
    ParameterCount = AuditParameters->ParameterCount;
    memmove(&Src[4 * v16 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
    goto LABEL_11;
  }
  if ( UserSid )
  {
    v9 = (unsigned __int8 *)UserSid;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    v7 = 0LL;
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    v9 = (unsigned __int8 *)**((_QWORD **)PrimaryToken + 19);
    if ( v9 )
    {
      p_SubjectContext = &SubjectContext;
      goto LABEL_18;
    }
  }
  p_SubjectContext = 0LL;
LABEL_18:
  LOBYTE(v7) = AuditParameters->Type == 16;
  LOBYTE(SourceName) = AuditParameters->Type == 8;
  if ( (unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, SourceName, v7, p_SubjectContext) )
    goto LABEL_19;
LABEL_11:
  if ( CurrentIrql < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
