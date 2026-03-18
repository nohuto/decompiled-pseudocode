/*
 * XREFs of SeLocateProcessImageName @ 0x140443A20
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406D2250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  if ( Process[1].ActiveProcessors.Bitmap[14] )
    return PsGetAllocatedFullProcessImageName(Process, pImageFileName);
  else
    return -1073741275;
}
