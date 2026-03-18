/*
 * XREFs of PopSetSessionUserStatus @ 0x14055DFC0
 * Callers:
 *     PopConsoleSessionPassiveInput @ 0x14055DA2C (PopConsoleSessionPassiveInput.c)
 *     PopSessionInputChange @ 0x14055DA90 (PopSessionInputChange.c)
 *     PopRemoteSessionActiveInput @ 0x140564564 (PopRemoteSessionActiveInput.c)
 *     PopSessionDisconnected @ 0x1405698C0 (PopSessionDisconnected.c)
 *     PopCheckConsoleTimeouts @ 0x1406BC9F0 (PopCheckConsoleTimeouts.c)
 *     PopInputDisabled @ 0x1406BCB30 (PopInputDisabled.c)
 * Callees:
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     PopDiagTraceSessionStates @ 0x14055DDB8 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x14055E118 (PopPrintUserActivityPresence.c)
 *     PopExtendConnectionState @ 0x140599D40 (PopExtendConnectionState.c)
 */

__int64 __fastcall PopSetSessionUserStatus(unsigned int a1, unsigned int a2)
{
  const wchar_t *v4; // rax
  int v5; // eax
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  if ( PopConsoleContext == a1 && a1 != -1 )
    dword_14032D360 = a2;
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
