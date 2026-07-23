/*
 * XREFs of ExIsRestrictedCaller @ 0x1404D3730
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspQueryWorkingSetWatch @ 0x14067DAC4 (PspQueryWorkingSetWatch.c)
 *     ExpProfileCreate @ 0x1406B7D44 (ExpProfileCreate.c)
 * Callees:
 *     SeAccessCheck @ 0x140062690 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
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
