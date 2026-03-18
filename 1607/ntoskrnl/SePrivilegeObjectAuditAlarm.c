/*
 * XREFs of SePrivilegeObjectAuditAlarm @ 0x140414B04
 * Callers:
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     PspCreateObjectHandle @ 0x140516ED4 (PspCreateObjectHandle.c)
 *     SeCheckPrivilegedObject @ 0x14054757C (SeCheckPrivilegedObject.c)
 * Callees:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 */

__int64 __fastcall SePrivilegeObjectAuditAlarm(int a1, __int64 *a2, int a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax

  if ( a6 )
    return SepAdtPrivilegeObjectAuditAlarm((unsigned int)&SeSubsystemName, 0, 0, a1, *a2, a2[2], a2[3], a3, a4, a5);
  return result;
}
