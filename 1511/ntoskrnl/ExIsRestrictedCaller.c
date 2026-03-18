/*
 * XREFs of ExIsRestrictedCaller @ 0x1404C69D4
 * Callers:
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PspQueryWorkingSetWatch @ 0x14063F290 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x1406752BC (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 */

_BOOL8 __fastcall ExIsRestrictedCaller(char a1)
{
  BOOLEAN v1; // bl
  _BOOL8 result; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+80h] [rbp+8h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+10h] BYREF

  result = 0;
  if ( a1 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v1 = SeAccessCheck(
           SeMediumDaclSd,
           &SubjectContext,
           0,
           0x20000u,
           0,
           0LL,
           (PGENERIC_MAPPING)&ExpRestrictedGenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v1 != 1 || AccessStatus < 0 )
      return 1;
  }
  return result;
}
