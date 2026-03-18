/*
 * XREFs of IsPrivileged @ 0x1C0111B6C
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0057130 (NtUserPostThreadMessage.c)
 *     _RegisterUserApiHook @ 0x1C0111014 (_RegisterUserApiHook.c)
 *     _RegisterDManipHook @ 0x1C0111294 (_RegisterDManipHook.c)
 *     xxxWrapSendMessageBSM @ 0x1C0111A90 (xxxWrapSendMessageBSM.c)
 *     ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0130460 (-InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z.c)
 *     NtUserRegisterBSDRWindow @ 0x1C0130780 (NtUserRegisterBSDRWindow.c)
 *     NtUserRegisterServicesProcess @ 0x1C0218B30 (NtUserRegisterServicesProcess.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
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
    UserSetLastError(1314LL);
  return v2;
}
