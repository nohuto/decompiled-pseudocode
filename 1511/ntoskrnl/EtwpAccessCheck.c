/*
 * XREFs of EtwpAccessCheck @ 0x140435590
 * Callers:
 *     NtTraceEvent @ 0x1400741D0 (NtTraceEvent.c)
 *     EtwpRegisterUMGuid @ 0x140435640 (EtwpRegisterUMGuid.c)
 *     EtwpCheckLoggerControlAccess @ 0x14046D32C (EtwpCheckLoggerControlAccess.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404CCB9C (EtwpNotifyGuid.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall EtwpAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ACCESS_MASK DesiredAccess,
        struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectContext; // rdx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+90h] [rbp+18h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+98h] [rbp+20h] BYREF

  if ( a3 )
  {
    p_SubjectContext = a3;
  }
  else
  {
    SeCaptureSubjectContext(&SubjectContext);
    p_SubjectContext = &SubjectContext;
  }
  SeAccessCheck(
    SecurityDescriptor,
    p_SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  if ( !a3 )
    SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
