/*
 * XREFs of SeCheckAuditPrivilege @ 0x1404B7FD0
 * Callers:
 *     NtDeleteObjectAuditAlarm @ 0x1403E30B4 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404B646C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1404D3454 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140542D4C (NtPrivilegeObjectAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F5B0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14041537C (SePrivilegedServiceAuditAlarm.c)
 */

char __fastcall SeCheckAuditPrivilege(__int64 *a1, char a2)
{
  __int64 v4; // rcx
  char v5; // al
  char v6; // di
  int v8[2]; // [rsp+30h] [rbp-28h] BYREF
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
