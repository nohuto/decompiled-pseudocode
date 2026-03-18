/*
 * XREFs of IsPrivileged @ 0x1C00F983C
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0090EE0 (NtUserPostThreadMessage.c)
 *     xxxWrapSendMessageBSM @ 0x1C00F9760 (xxxWrapSendMessageBSM.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0100C80 (NtUserRegisterBSDRWindow.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0131514 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     _RegisterDManipHook @ 0x1C0152690 (_RegisterDManipHook.c)
 *     _RegisterUserApiHook @ 0x1C0153660 (_RegisterUserApiHook.c)
 *     NtUserRegisterServicesProcess @ 0x1C021F0F0 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall IsPrivileged(PPRIVILEGE_SET RequiredPrivileges)
{
  BOOLEAN v2; // di
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SeLockSubjectContext(&SubjectContext);
  v2 = SePrivilegeCheck(RequiredPrivileges, &SubjectContext, 1);
  SePrivilegeObjectAuditAlarm(0LL, &SubjectContext, 0LL, RequiredPrivileges, v2, 1);
  SeUnlockSubjectContext(&SubjectContext);
  SeReleaseSubjectContext(&SubjectContext);
  if ( !v2 )
    UserSetLastError(1314);
  return v2;
}
