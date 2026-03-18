/*
 * XREFs of ObNormalizeHandleValue @ 0x14066609C
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14068DC98 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14069000C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 * Callees:
 *     ObpIsKernelHandle @ 0x1400CFD28 (ObpIsKernelHandle.c)
 */

unsigned __int64 __fastcall ObNormalizeHandleValue(unsigned __int64 a1)
{
  __int64 v1; // rcx

  if ( ObpIsKernelHandle(a1, 0) )
    v1 ^= 0xFFFFFFFF80000000uLL;
  return v1 & 0xFFFFFFFFFFFFFFFCuLL;
}
