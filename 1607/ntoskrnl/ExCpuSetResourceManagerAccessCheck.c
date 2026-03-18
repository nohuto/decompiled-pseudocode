/*
 * XREFs of ExCpuSetResourceManagerAccessCheck @ 0x14010FFEC
 * Callers:
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 * Callees:
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     SeSinglePrivilegeCheck @ 0x140413F70 (SeSinglePrivilegeCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ExCpuSetResourceManagerAccessCheck(KPROCESSOR_MODE a1)
{
  struct _KTHREAD *CurrentThread; // rcx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+60h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+90h] [rbp+8h] BYREF
  int v6; // [rsp+98h] [rbp+10h] BYREF

  if ( !a1 || SeSinglePrivilegeCheck(SeIncreaseBasePriorityPrivilege, a1) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  SeCaptureSubjectContextEx(CurrentThread, CurrentThread->ApcState.Process, &SubjectContext);
  SeAccessCheckWithHint(
    (ULONGLONG)ExpCpuSetSecurityDescriptor,
    3,
    (int *)&SubjectContext,
    0,
    1u,
    0,
    0LL,
    (__int64)&ExpRestrictedGenericMapping,
    a1,
    &v6,
    (int *)&v5);
  SeReleaseSubjectContext(&SubjectContext);
  return v5;
}
