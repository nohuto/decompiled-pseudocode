/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x14055E090
 * Callers:
 *     PopSetSessionUserStatus @ 0x14055DFC0 (PopSetSessionUserStatus.c)
 *     PopUserPresentOverride @ 0x1406BCD58 (PopUserPresentOverride.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x140131E3C (PopPrintEx.c)
 *     PopDiagTraceSessionStates @ 0x14055DDB8 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x14055E118 (PopPrintUserActivityPresence.c)
 *     PopSetPowerSettingValueAcDc @ 0x14055E1B0 (PopSetPowerSettingValueAcDc.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  unsigned int v2; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  if ( !PopUserPresentOverrideCount && PopMaximumConnectionSessions )
    v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  if ( v0 != PopGlobalUserPresenceState )
  {
    v2 = v0;
    PopGlobalUserPresenceState = v0;
    v1 = (const wchar_t *)PopPrintUserActivityPresence(v0);
    PopPrintEx(3u, "PopAdaptive: Global user presence/activity state: %S\n", v1);
    PopDiagTraceSessionStates(&POP_ETW_ADPM_GLOBAL_INPUT_STATE, -1, v0);
    PopSetPowerSettingValueAcDc(&GUID_GLOBAL_USER_PRESENCE, 4LL, &v2);
  }
}
