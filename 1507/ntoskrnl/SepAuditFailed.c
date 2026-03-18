/*
 * XREFs of SepAuditFailed @ 0x1406D8BC0
 * Callers:
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140250868 (SepAuditFailedRaisedIrql.c)
 *     NtDeleteObjectAuditAlarm @ 0x14040A600 (NtDeleteObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x140432F30 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140432FA0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x14053C610 (NtCloseObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x14017FBF0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x140180B30 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1406D2D08 (SepAdtLogAuditFailureEvent.c)
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
