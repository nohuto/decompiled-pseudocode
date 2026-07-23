/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1403E8030
 * Callers:
 *     SeLocateProcessImageName @ 0x1403E8028 (SeLocateProcessImageName.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14045F320 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DBB8 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14068E478 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E5F0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E798 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068ECE0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EEDC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageName @ 0x1403E805C (PsGetAllocatedFullProcessImageName.c)
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
