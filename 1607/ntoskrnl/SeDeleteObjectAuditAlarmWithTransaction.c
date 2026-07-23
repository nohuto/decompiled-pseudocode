/*
 * XREFs of SeDeleteObjectAuditAlarmWithTransaction @ 0x1406914A4
 * Callers:
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     NtMakeTemporaryObject @ 0x14054AA20 (NtMakeTemporaryObject.c)
 *     SeDeleteObjectAuditAlarm @ 0x14069149C (SeDeleteObjectAuditAlarm.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EEDC (SepAdtDeleteObjectAuditAlarm.c)
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
