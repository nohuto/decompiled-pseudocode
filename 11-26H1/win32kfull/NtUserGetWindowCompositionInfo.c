/*
 * XREFs of NtUserGetWindowCompositionInfo @ 0x1402B5370
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 NtUserGetWindowCompositionInfo()
{
  ULONG v0; // eax

  MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 18952);
  v0 = RtlNtStatusToDosError(-1073741816);
  UserSetLastError(v0);
  return 0LL;
}
