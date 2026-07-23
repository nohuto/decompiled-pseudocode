/*
 * XREFs of SepAdtAuditPrivilegeUseWithContext @ 0x140413B78
 * Callers:
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     SepAdtCheckPrivilegeForSensitivity @ 0x14021A0C0 (SepAdtCheckPrivilegeForSensitivity.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SepFilterPrivilegeAudits @ 0x1404B5F48 (SepFilterPrivilegeAudits.c)
 */

char __fastcall SepAdtAuditPrivilegeUseWithContext(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4, _WORD *a5)
{
  char v6; // bp
  char v8; // di
  char v9; // si
  char v10; // al
  __int64 v11; // r8
  __int64 v12; // rdx
  char v13; // r15
  char v14; // al
  char v15; // bl
  char v17; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v18[39]; // [rsp+21h] [rbp-27h] BYREF

  v6 = 0;
  v17 = 0;
  v18[0] = 0;
  v8 = a3;
  v9 = a2;
  v10 = SepAdtAuditThisEventWithContext(131LL, a2, a3, a4);
  LOBYTE(v11) = v8;
  LOBYTE(v12) = v9;
  v13 = v10;
  v14 = SepAdtAuditThisEventWithContext(132LL, v12, v11, a4);
  v15 = v14;
  if ( (v13 || v14) && (unsigned __int8)SepFilterPrivilegeAudits(0LL, a1) )
  {
    if ( v13 && v15 && a1 && *a1 || (SepAdtCheckPrivilegeForSensitivity(a1, &v17, v18), v13) && v17 )
    {
      *a5 = 131;
      return 1;
    }
    if ( v15 && v18[0] )
    {
      *a5 = 132;
      return 1;
    }
  }
  return v6;
}
