/*
 * XREFs of SepAdtInitializeAuditingOptions @ 0x1407BC3AC
 * Callers:
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 * Callees:
 *     NtSetEvent @ 0x14048FDC0 (NtSetEvent.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     SepAdtInitializeBounds @ 0x14055C094 (SepAdtInitializeBounds.c)
 *     SepAdtInitializePrivilegeAuditing @ 0x14055C110 (SepAdtInitializePrivilegeAuditing.c)
 *     SepAdtInitializeCrashOnFail @ 0x14055C174 (SepAdtInitializeCrashOnFail.c)
 *     SepAdtOpenRegAndSetupNotification @ 0x1405929F4 (SepAdtOpenRegAndSetupNotification.c)
 *     SepAdtOpenEtwReadyEvent @ 0x140592A78 (SepAdtOpenEtwReadyEvent.c)
 *     AdtpInitializeAuditingCommon @ 0x140592AF0 (AdtpInitializeAuditingCommon.c)
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
