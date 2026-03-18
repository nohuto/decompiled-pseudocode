/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x1407B2FB4
 * Callers:
 *     SeRmInitPhase1 @ 0x1407B2DB0 (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x140447A00 (NtSetEvent.c)
 *     NtClose @ 0x14050B0E0 (NtClose.c)
 *     SepAdtInitializeBounds @ 0x14056F990 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14056FA0C (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14056FA64 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x14056FABC (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x14056FB40 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x14056FBB8 (AdtpInitializeAuditingCommon.c)
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
