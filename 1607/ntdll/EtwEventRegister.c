/*
 * XREFs of EtwEventRegister @ 0x18002A3B0
 * Callers:
 *     CentennialIssueTracker_EnsureRegistration @ 0x180009300 (CentennialIssueTracker_EnsureRegistration.c)
 *     SbSelectProcedure @ 0x18002E9B0 (SbSelectProcedure.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800826B0 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x1800827D4 (SbObtainTraceHandle.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x180087710 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800CF0D0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800CF158 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800D1860 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     EtwNotificationRegister @ 0x18002A400 (EtwNotificationRegister.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 */

NTSTATUS __cdecl EtwEventRegister(
        LPCGUID ProviderId,
        PENABLECALLBACK EnableCallback,
        PVOID CallbackContext,
        PREGHANDLE RegHandle)
{
  LONG v4; // eax
  NTSTATUS v5; // ebx

  if ( !EnableCallback && CallbackContext )
    return 87;
  v4 = EtwNotificationRegister(ProviderId, 3u, (PETW_NOTIFICATION_CALLBACK)EnableCallback, CallbackContext, RegHandle);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
