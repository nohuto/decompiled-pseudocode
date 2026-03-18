/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x140434B7C
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtCheckPrivilegeForSensitivity @ 0x14024F8A0 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SepFilterPrivilegeAudits @ 0x1405416C0 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SepAdtAuditPrivilegeUseWithContext(
        unsigned int *a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        __int64 a4,
        _WORD *a5)
{
  char v6; // bp
  char v10; // r15
  char v11; // al
  char v12; // bl
  char v14; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v15[39]; // [rsp+21h] [rbp-27h] BYREF

  v6 = 0;
  v14 = 0;
  v15[0] = 0;
  v10 = SepAdtAuditThisEventWithContext(130LL, a2, a3, a4);
  v11 = SepAdtAuditThisEventWithContext(131LL, a2, a3, a4);
  v12 = v11;
  if ( (v10 || v11) && (unsigned __int8)SepFilterPrivilegeAudits(0LL, a1) )
  {
    if ( v10 && v12 && a1 && *a1 || (SepAdtCheckPrivilegeForSensitivity(a1, &v14, v15), v10) && v14 )
    {
      *a5 = 130;
      return 1;
    }
    if ( v12 && v15[0] )
    {
      *a5 = 131;
      return 1;
    }
  }
  return v6;
}
