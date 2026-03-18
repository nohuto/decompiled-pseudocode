/*
 * XREFs of NtCloseObjectAuditAlarm @ 0x14053C610
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x140526BA8 (SeCheckAuditPrivilege.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 */

NTSTATUS __stdcall NtCloseObjectAuditAlarm(PUNICODE_STRING SubsystemName, PVOID HandleId, BOOLEAN GenerateOnClose)
{
  int v3; // edi
  char PreviousMode; // si
  NTSTATUS v7; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+38h] [rbp-30h] BYREF
  PVOID P; // [rsp+88h] [rbp+20h] BYREF

  v3 = (int)HandleId;
  P = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !GenerateOnClose )
    return 0;
  SeCaptureSubjectContext(&SubjectContext);
  if ( SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v7 = SepProbeAndCaptureString_U((ULONG64)SubsystemName, (__int64)&P);
    if ( v7 >= 0 )
      SepAdtCloseObjectAuditAlarm((_DWORD)P, v3, (unsigned int)&SubjectContext, 0, 0);
  }
  else
  {
    v7 = -1073741727;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v7 == -1073741670 )
    SepAuditFailed(3221225626LL);
  return v7;
}
