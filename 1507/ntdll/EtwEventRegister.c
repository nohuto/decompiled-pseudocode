/*
 * XREFs of EtwEventRegister @ 0x180039340
 * Callers:
 *     SbSelectProcedure @ 0x180041D20 (SbSelectProcedure.c)
 *     SbObtainTraceHandle @ 0x180043F78 (SbObtainTraceHandle.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x1800739D8 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800BAFD0 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800BB058 (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800BD5D0 (LdrpLogFatalUserCallbackException.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     EtwNotificationRegister @ 0x180038BC0 (EtwNotificationRegister.c)
 */

__int64 __fastcall EtwEventRegister(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 *a4)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( !a2 && a3 )
    return 87LL;
  v4 = EtwNotificationRegister(a1, 3u, a2, a3, a4);
  v5 = v4;
  if ( v4 )
    RtlSetLastWin32Error(v4);
  return v5;
}
