/*
 * XREFs of ObNormalizeHandleValue @ 0x140587094
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  if ( (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 < 0xFFFFFFFFFFFFFFFEuLL )
    a1 ^= 0xFFFFFFFF80000000uLL;
  return a1 & 0xFFFFFFFFFFFFFFFCuLL;
}
