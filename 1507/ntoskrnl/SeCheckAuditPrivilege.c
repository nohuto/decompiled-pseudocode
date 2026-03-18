/*
 * XREFs of SeCheckAuditPrivilege @ 0x140526BA8
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x14040A600 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x14053C610 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140014C60 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x1404359A8 (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // di
  unsigned int v8[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h] BYREF
  int v10; // [rsp+40h] [rbp-18h]

  v8[0] = 1;
  v4 = a1[2];
  v8[1] = 1;
  v9 = SeAuditPrivilege;
  v10 = 0;
  v5 = SepPrivilegeCheck(v4, (__int64)&v9, 1u, 1, a2);
  v6 = v5;
  if ( a2 )
    SePrivilegedServiceAuditAlarm(0LL, a1, v8, v5);
  return v6;
}
