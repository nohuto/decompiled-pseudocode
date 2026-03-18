/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x14047896C
 * Callers:
 *     PspCreateObjectHandle @ 0x1403EFA94 (PspCreateObjectHandle.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     SeCheckPrivilegedObject @ 0x14050C338 (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
