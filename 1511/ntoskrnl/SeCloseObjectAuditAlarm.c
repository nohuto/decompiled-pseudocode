/*
 * XREFs of SeCloseObjectAuditAlarm @ 0x14065206C
 * Callers:
 *     ObCloseHandleTableEntry @ 0x14040C6C0 (ObCloseHandleTableEntry.c)
 *     ExSweepHandleTable @ 0x140488230 (ExSweepHandleTable.c)
 * Callees:
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 */

void __fastcall SeCloseObjectAuditAlarm(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+30h] [rbp-28h] BYREF

  if ( a3 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    SepAdtCloseObjectAuditAlarm((const UNICODE_STRING *)SeSubsystemName, a2, &SubjectContext, a1, 1);
    SeReleaseSubjectContext(&SubjectContext);
  }
}
