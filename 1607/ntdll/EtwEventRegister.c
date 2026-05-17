/*
 * XREFs of EtwEventRegister @ 0x18002A3C0
 * Callers:
 *     CentennialIssueTracker_EnsureRegistration @ 0x180009310 (CentennialIssueTracker_EnsureRegistration.c)
 *     SbSelectProcedure @ 0x18002E9C0 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826C0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x1800827E4 (SbObtainTraceHandle.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180087720 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D17A0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18002A410 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwEventRegister(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
