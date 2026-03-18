/*
 * XREFs of SepAdtAuditObjectAccessWithContext @ 0x140479708
 * Callers:
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x14043C2B0 (RtlPrefixUnicodeString.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140478C20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAdtClassifyObjectIntoSubCategory @ 0x140651738 (SepAdtClassifyObjectIntoSubCategory.c)
 */

char __fastcall SepAdtAuditObjectAccessWithContext(
        __int64 a1,
        const UNICODE_STRING *a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        struct _SECURITY_SUBJECT_CONTEXT *a5,
        char a6,
        unsigned __int16 *a7)
{
  int v8; // edx
  char result; // al
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int16 v15; // ax

  v8 = 0;
  *a7 = 118;
  if ( a3 )
    v8 = 3;
  if ( a4 )
    v8 |= 0x30u;
  result = SepAdtAuditThisEventByCategoryWithContext(2u, v8, a5);
  if ( result )
  {
    if ( a1 || a6 )
    {
      LOBYTE(v14) = a4;
      LOBYTE(v13) = a3;
      v15 = SepAdtClassifyObjectIntoSubCategory(a1, a2, v13, v14);
    }
    else if ( a2 && RtlPrefixUnicodeString(&SepSamTypeNamePrefix, a2, 0) )
    {
      v15 = 119;
    }
    else
    {
      v15 = 120;
    }
    *a7 = v15;
    return SepAdtAuditThisEventWithContext(v15, a3, a4, (__int64)a5);
  }
  return result;
}
