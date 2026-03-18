/*
 * XREFs of SeCheckPrivilegedObject @ 0x140583928
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspSetProcessPriorityClass @ 0x14041BFC8 (PspSetProcessPriorityClass.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     SePrivilegeObjectAuditAlarm @ 0x140435954 (SePrivilegeObjectAuditAlarm.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall SeCheckPrivilegedObject(LUID a1, __int64 a2, unsigned int a3, KPROCESSOR_MODE a4)
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
    SePrivilegeObjectAuditAlarm(a2, (__int64 *)&SubjectContext, a3, &RequiredPrivileges.PrivilegeCount, v7, a4);
  SeReleaseSubjectContext(&SubjectContext);
  return v8;
}
