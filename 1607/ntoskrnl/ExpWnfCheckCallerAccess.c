/*
 * XREFs of ExpWnfCheckCallerAccess @ 0x140462F14
 * Callers:
 *     ExpWnfSubscribeWnfStateChange @ 0x140461950 (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x140462EB8 (ExpWnfValidatePubSubPreconditions.c)
 *     NtQueryWnfStateNameInformation @ 0x1404DCB58 (NtQueryWnfStateNameInformation.c)
 * Callees:
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExpWnfCheckCallerAccess(PSECURITY_DESCRIPTOR SecurityDescriptor, ACCESS_MASK DesiredAccess)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  if ( !DesiredAccess )
    return 0LL;
  SeCaptureSubjectContext(&SubjectContext);
  SeAccessCheck(
    SecurityDescriptor,
    &SubjectContext,
    0,
    DesiredAccess,
    0,
    0LL,
    (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return (unsigned int)AccessStatus;
}
