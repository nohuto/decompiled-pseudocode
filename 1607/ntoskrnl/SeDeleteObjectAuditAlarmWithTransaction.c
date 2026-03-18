/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1406913C0
 * Callers:
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x14054A4E0 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x1406913B8 (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 */

void __stdcall SeDeleteObjectAuditAlarmWithTransaction(PVOID Object, HANDLE Handle, GUID *TransactionId)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  SeCaptureSubjectContext(&SubjectContext);
  SepAdtDeleteObjectAuditAlarm(
    (const UNICODE_STRING *)&SeSubsystemName,
    (unsigned __int64)Handle,
    (__int64 *)&SubjectContext,
    (__int64)Object,
    (int *)TransactionId,
    1);
  SeReleaseSubjectContext(&SubjectContext);
}
