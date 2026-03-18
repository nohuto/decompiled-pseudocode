/*
 * XREFs of SeCheckPrivilegedObject @ 0x14050C338
 * Callers:
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PspSetProcessPriorityClass @ 0x1404523AC (PspSetProcessPriorityClass.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAssignPrimaryToken @ 0x140640D98 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SePrivilegeCheck @ 0x140472B50 (SePrivilegeCheck.c)
 *     SePrivilegeObjectAuditAlarm @ 0x14047896C (SePrivilegeObjectAuditAlarm.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, int a2, int a3, KPROCESSOR_MODE a4)
{
  BOOLEAN v7; // al
  BOOLEAN v8; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-58h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+50h] [rbp-38h] BYREF

  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.Privilege[0].Luid = a1;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  SeCaptureSubjectContext(&SubjectContext);
  v7 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, a4);
  v8 = v7;
  if ( a4 )
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, (__int64)&RequiredPrivileges, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
