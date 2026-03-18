/*
 * XREFs of SepAuditFailed @ 0x140656708
 * Callers:
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1400D513C (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x140134478 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140201890 (SepAuditFailedRaisedIrql.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403B584C (NtDeleteObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404789C0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140478A74 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140478BB0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140478C20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140495460 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1404AC788 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404BB38C (NtPrivilegedServiceAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1404C0094 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140509D38 (NtPrivilegeObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     SepAuditAssignPrimaryToken @ 0x14054A524 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14064DE24 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14064E43C (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14064ED10 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14064EE84 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x14064F278 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14064F5A4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14064F7B4 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14064FCDC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x140650A04 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140151220 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140152180 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x14064FAEC (SepAdtLogAuditFailureEvent.c)
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
