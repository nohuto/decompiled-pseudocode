/*
 * XREFs of SeLocateProcessImageName @ 0x1404D6CDC
 * Callers:
 *     SepQueryNameString @ 0x1403BF450 (SepQueryNameString.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1405E3324 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14064E43C (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14064ED10 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14064EE84 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14064F034 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140650A04 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x1406511B4 (SepAdtTokenRightAdjusted.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  if ( Process[1].ActiveProcessors.Bitmap[15] )
    return PsGetAllocatedFullProcessImageName(Process, pImageFileName);
  else
    return -1073741275;
}
