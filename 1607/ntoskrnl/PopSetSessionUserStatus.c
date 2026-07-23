/*
 * XREFs of PopSetSessionUserStatus @ 0x14052EBB4
 * Callers:
 *     PopSessionInputChange @ 0x14052E6DC (PopSessionInputChange.c)
 *     PopConsoleSessionPassiveInput @ 0x14052E804 (PopConsoleSessionPassiveInput.c)
 *     PopRemoteSessionActiveInput @ 0x14052EB54 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x140534858 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x140674A84 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x140674BC4 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140084C64 (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x1404D27C4 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x14052EDAC (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x14057FE48 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  int v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_140302400 = a2;
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
