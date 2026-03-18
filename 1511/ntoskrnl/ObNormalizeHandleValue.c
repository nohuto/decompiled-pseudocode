/*
 * XREFs of ObNormalizeHandleValue @ 0x14062DFC4
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14064E610 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140650A04 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x140038748 (ObpIsKernelHandle.c)
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( ObpIsKernelHandle(a1, 0) )
    v1 ^= 0xFFFFFFFF80000000uLL;
  return v1 & 0xFFFFFFFFFFFFFFFCuLL;
}
