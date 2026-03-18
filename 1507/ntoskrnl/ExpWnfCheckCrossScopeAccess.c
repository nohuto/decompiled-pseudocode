/*
 * XREFs of ExpWnfCheckCrossScopeAccess @ 0x140554F94
 * Callers:
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     SeAccessCheck @ 0x1400CAB80 (SeAccessCheck.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x14046D4B8 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 */

__int64 __fastcall ExpWnfCheckCrossScopeAccess(unsigned __int64 a1)
{
  __int64 v1; // rbx
  int v2; // ebx
  PVOID v3; // rdi
  void *v4; // rbx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-38h] BYREF
  NTSTATUS AccessStatus; // [rsp+98h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+A0h] [rbp+18h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  v1 = (a1 >> 6) & 0xF;
  if ( (_DWORD)v1 == 3 || SeSinglePrivilegeCheck(SeTcbPrivilege, KeGetCurrentThread()->PreviousMode) )
    return 0LL;
  if ( (_DWORD)v1 != 1 || ((a1 >> 4) & 3) != 0 )
    return 3221225569LL;
  v2 = ExpWnfLookupPermanentName(a1, &P);
  if ( v2 >= 0 )
  {
    v3 = P;
    v4 = (void *)*((_QWORD *)P + 2);
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      v4,
      &SubjectContext,
      0,
      0x10u,
      0,
      0LL,
      (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    v2 = AccessStatus;
    ExFreePoolWithTag(v3, 0x20666E57u);
  }
  if ( v2 == -1073741790 )
    return (unsigned int)-1073741727;
  return (unsigned int)v2;
}
