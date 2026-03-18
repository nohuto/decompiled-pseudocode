/*
 * XREFs of PiAuDoesClientHavePrivilege @ 0x14058B044
 * Callers:
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14058ACF4 (PiCMDeviceAction.c)
 *     PiCMSetDeviceProblem @ 0x1406936F4 (PiCMSetDeviceProblem.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SePrivilegeCheck @ 0x140432040 (SePrivilegeCheck.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 */

BOOLEAN __fastcall PiAuDoesClientHavePrivilege(unsigned int a1)
{
  KPROCESSOR_MODE PreviousMode; // bl
  BOOLEAN v2; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+28h] [rbp-48h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-28h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Luid = (LUID)a1;
  SeCaptureSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(&RequiredPrivileges, &SubjectContext, PreviousMode);
  SeReleaseSubjectContext(&SubjectContext);
  return v2;
}
