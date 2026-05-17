/*
 * XREFs of EtwEventRegister @ 0x1800541A0
 * Callers:
 *     SbSelectProcedure @ 0x18000EFD0 (SbSelectProcedure.c)
 *     LdrpResReportResourceAccessInternalInitOnce @ 0x1800512B0 (LdrpResReportResourceAccessInternalInitOnce.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x18007E788 (LdrpLogDeprecatedDllEtwEvent.c)
 *     SbObtainTraceHandle @ 0x18007E850 (SbObtainTraceHandle.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800C7CF0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800C7D78 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800CA2F0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x1800541F0 (EtwNotificationRegister.c)
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
