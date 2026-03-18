/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1406D4790
 * Callers:
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140539A98 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1406D4788 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (int *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
