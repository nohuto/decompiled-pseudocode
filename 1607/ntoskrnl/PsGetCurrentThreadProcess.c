/*
 * XREFs of PsGetCurrentThreadProcess @ 0x1400B2E10
 * Callers:
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x140580038 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DAD4 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E6B4 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14069000C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
