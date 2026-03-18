/*
 * XREFs of CmpExamineSaclForAuditEvent @ 0x1405E321C
 * Callers:
 *     CmpDoCreate @ 0x1403DEBC8 (CmpDoCreate.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1403E2B08 (RtlGetSaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeExamineSacl @ 0x140652140 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x140655D28 (SeExamineGlobalSacl.c)
 */

__int64 __fastcall CmpExamineSaclForAuditEvent(PSECURITY_DESCRIPTOR SecurityDescriptor, _BYTE *a2)
{
  NTSTATUS SaclSecurityDescriptor; // ebx
  PACCESS_TOKEN PrimaryToken; // r14
  PACCESS_TOKEN ClientToken; // r8
  BOOLEAN SaclDefaulted[8]; // [rsp+40h] [rbp-40h] BYREF
  PACL Sacl; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-30h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-20h] BYREF
  BOOLEAN GenerateAudit; // [rsp+A8h] [rbp+28h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+B0h] [rbp+30h] BYREF
  BOOLEAN SaclPresent; // [rsp+B8h] [rbp+38h] BYREF

  Sacl = 0LL;
  GenerateAudit = 0;
  GenerateAlarm = 0;
  *a2 = 0;
  SeCaptureSubjectContext(&SubjectContext);
  SaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &SaclPresent, &Sacl, SaclDefaulted);
  if ( SaclSecurityDescriptor >= 0 )
  {
    PrimaryToken = SubjectContext.PrimaryToken;
    if ( SaclPresent )
    {
      ClientToken = SubjectContext.PrimaryToken;
      if ( SubjectContext.ClientToken )
        ClientToken = SubjectContext.ClientToken;
      SeExamineSacl(Sacl, Sacl, ClientToken, 0xF003Fu, 1u, &GenerateAudit, &GenerateAlarm);
    }
    RtlInitUnicodeString(&DestinationString, L"Key");
    if ( SubjectContext.ClientToken )
      PrimaryToken = SubjectContext.ClientToken;
    SeExamineGlobalSacl(&DestinationString, Sacl, PrimaryToken, 0xF003Fu, 1u, &GenerateAudit, &GenerateAlarm);
    if ( GenerateAudit || GenerateAlarm )
      *a2 = 1;
  }
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)SaclSecurityDescriptor;
}
