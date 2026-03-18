/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1403E6A00
 * Callers:
 *     SeLocateProcessImageName @ 0x1403E69F8 (SeLocateProcessImageName.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x1404754CC (SepQueryNameString.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x140580038 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602880 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DAD4 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14068E394 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E6B4 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14069000C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageName @ 0x1403E6A2C (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 1808) )
  {
    if ( xmmword_1403013E0 )
      return xmmword_1403013E0();
  }
  else if ( *(_QWORD *)(a1 + 1128) )
  {
    return PsGetAllocatedFullProcessImageName(a1, a2);
  }
  return result;
}
