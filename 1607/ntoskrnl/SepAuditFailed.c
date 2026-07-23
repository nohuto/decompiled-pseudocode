/*
 * XREFs of SepAuditFailed @ 0x14069615C
 * Callers:
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x14013CB7C (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x14021B208 (SepAuditFailedRaisedIrql.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403E30B4 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140413C10 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140413C80 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404A084C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1404B6EF4 (NtCloseObjectAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14054328C (NtPrivilegeObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DBB8 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14068E478 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E5F0 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068ECE0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EEDC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F3E8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14015ADF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x14015BD90 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x14068F1FC (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
