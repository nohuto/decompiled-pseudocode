/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1406520E0
 * Callers:
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x140494204 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1406520D8 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
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
