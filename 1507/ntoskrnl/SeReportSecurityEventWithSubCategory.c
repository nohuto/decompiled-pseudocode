/*
 * XREFs of SeReportSecurityEventWithSubCategory @ 0x140111680
 * Callers:
 *     SeReportSecurityEvent @ 0x14024F6C4 (SeReportSecurityEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

NTSTATUS __stdcall SeReportSecurityEventWithSubCategory(
        ULONG Flags,
        PUNICODE_STRING SourceName,
        PSID UserSid,
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        ULONG AuditSubcategoryId)
{
  unsigned __int8 v5; // r15
  unsigned __int8 *v9; // r12
  USHORT Type; // ax
  unsigned __int8 CurrentIrql; // si
  __int64 v12; // rcx
  char v13; // al
  PACCESS_TOKEN ClientToken; // rax
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // r9
  USHORT v17; // ax
  unsigned int v18; // ecx
  ULONG AuditId; // edx
  int v20; // eax
  int v21; // eax
  ULONG ParameterCount; // ebx
  int Length; // eax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD Src[132]; // [rsp+48h] [rbp-C0h] BYREF

  v5 = 0;
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
  if ( AuditSubcategoryId - 100 > 0x39 )
    return -1073741811;
  if ( AuditParameters->ParameterCount > 0x1C )
    return -1073741811;
  Type = AuditParameters->Type;
  if ( (Type & 0x18) == 0 )
    return -1073741811;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    if ( UserSid )
    {
      v9 = (unsigned __int8 *)UserSid;
    }
    else
    {
      SeCaptureSubjectContext(&SubjectContext);
      ClientToken = SubjectContext.ClientToken;
      if ( !SubjectContext.ClientToken )
        ClientToken = SubjectContext.PrimaryToken;
      v9 = (unsigned __int8 *)**((_QWORD **)ClientToken + 19);
      if ( v9 )
      {
        p_SubjectContext = &SubjectContext;
        goto LABEL_23;
      }
    }
    p_SubjectContext = 0LL;
LABEL_23:
    v17 = AuditParameters->Type;
    if ( v17 == 8 )
      v5 = 1;
    if ( !(unsigned __int8)SepAdtAuditThisEventWithContext(AuditSubcategoryId, v5, v17 == 16, p_SubjectContext) )
      goto LABEL_13;
    goto LABEL_26;
  }
  v12 = AuditSubcategoryId - 100;
  if ( Type == 8 )
    v13 = SeAuditingState[2 * v12];
  else
    v13 = SeAuditingState[2 * v12 + 1];
  if ( v13 )
  {
    v9 = (unsigned __int8 *)SeLocalSystemSid;
    if ( UserSid )
      v9 = (unsigned __int8 *)UserSid;
LABEL_26:
    memset(Src, 0, 0x418uLL);
    v18 = 2;
    AuditId = AuditParameters->AuditId;
    LODWORD(Src[0]) = AuditParameters->CategoryId;
    WORD1(Src[2]) = AuditParameters->Type;
    v20 = v9[1];
    HIDWORD(Src[0]) = AuditId;
    LOWORD(Src[2]) = AuditSubcategoryId;
    LODWORD(Src[3]) = 4;
    Src[6] = v9;
    HIDWORD(Src[3]) = 4 * v20 + 8;
    Src[10] = &SeSubsystemName;
    Src[7] = 0x2000000001LL;
    LODWORD(Src[1]) = 2;
    if ( AuditSubcategoryId == 122 )
    {
      HIDWORD(Src[2]) |= 6u;
      v18 = 3;
      Length = SourceName->Length;
      LODWORD(Src[11]) = 1;
      HIDWORD(Src[11]) = Length + 16;
      Src[14] = SourceName;
      LODWORD(Src[1]) = 3;
    }
    else
    {
      v21 = HIDWORD(Src[2]) | 8;
      HIDWORD(Src[2]) |= 8u;
      if ( AuditId < 0x5FF )
        HIDWORD(Src[2]) = v21 | 2;
    }
    ParameterCount = AuditParameters->ParameterCount;
    memmove(&Src[4 * v18 + 3], AuditParameters->Parameters, 32LL * ParameterCount);
    LODWORD(Src[1]) += ParameterCount;
    SepAdtLogAuditRecord(Src);
  }
LABEL_13:
  if ( CurrentIrql < 2u && v9 && v9 != UserSid )
    SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
