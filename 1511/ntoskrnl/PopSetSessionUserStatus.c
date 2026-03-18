/*
 * XREFs of PopSetSessionUserStatus @ 0x1404F30C8
 * Callers:
 *     PopRemoteSessionActiveInput @ 0x1404F2D04 (PopRemoteSessionActiveInput.c)
 *     PopSessionInputChange @ 0x1404F2D64 (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x1404F2E8C (PopConsoleSessionPassiveInput.c)
 *     PopSessionDisconnected @ 0x1404F53C4 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x14063C394 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x14063C4D4 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1404C62E8 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x1404F3274 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x140530AE8 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  int v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_1402DD000 = a2;
  v7 = a2;
  v4 = (const wchar_t *)PopPrintUserActivityPresence(a2);
  PopPrintEx(3u, "PopAdaptive: Session %u user presence/activity state: %S\n", a1, v4);
  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_INPUT_STATE, a1, a2);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 0, 4u, &v7);
  PopSetPowerSettingValue(&GUID_SESSION_USER_PRESENCE, a1, 1, 4u, &v7);
  v5 = PopMaximumConnectionSessions;
  if ( PopMaximumConnectionSessions )
  {
    if ( a1 >= PopMaximumConnectionSessions )
    {
      PopExtendConnectionState(a1);
      v5 = PopMaximumConnectionSessions;
    }
    if ( v5 )
    {
      if ( a2 )
        _bittestandreset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
      else
        _bittestandset((signed __int32 *)PopConnectionBitmap.Buffer, a1);
    }
  }
  return PopEvaluateGlobalUserStatus();
}
