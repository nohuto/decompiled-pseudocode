/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x140762BBC
 * Callers:
 *     SeRmInitPhase1 @ 0x140762928 (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x14042F470 (NtSetEvent.c)
 *     SepAdtInitializeBounds @ 0x14049B55C (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14049B5D8 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14049B63C (SepAdtInitializeCrashOnFail.c)
 *     NtClose @ 0x1404DAF00 (NtClose.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14052EE38 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14052EEBC (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x14052EF34 (AdtpInitializeAuditingCommon.c)
 */

int SepAdtInitializeAuditingOptions()
{
  int result; // eax
  NTSTATUS v1; // ebx
  HANDLE EventHandle; // [rsp+30h] [rbp+8h] BYREF

  EventHandle = 0LL;
  result = AdtpInitializeAuditingCommon();
  if ( result >= 0 )
  {
    result = SepAdtOpenEtwReadyEvent(&EventHandle);
    if ( result >= 0 )
    {
      v1 = NtSetEvent(EventHandle, 0LL);
      NtClose(EventHandle);
      if ( v1 >= 0 )
      {
        result = SepAdtOpenRegAndSetupNotification();
        v1 = result;
        if ( result < 0 )
          return result;
        SepAdtInitializeCrashOnFail();
        SepAdtInitializePrivilegeAuditing();
        SepAdtInitializeBounds();
      }
      return v1;
    }
  }
  return result;
}
