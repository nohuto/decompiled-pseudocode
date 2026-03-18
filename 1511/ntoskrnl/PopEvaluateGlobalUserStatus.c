/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x1404F3198
 * Callers:
 *     PopSetSessionUserStatus @ 0x1404F30C8 (PopSetSessionUserStatus.c)
 *     PopUserPresentOverride @ 0x14063C6E8 (PopUserPresentOverride.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140021E20 (RtlNumberOfSetBits.c)
 *     PopUmpoSendPowerMessage @ 0x140098C28 (PopUmpoSendPowerMessage.c)
 *     PopPrintEx @ 0x1400E6908 (PopPrintEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x1404C1D24 (PopSetPowerSettingValueAcDc.c)
 *     PopDiagTraceSessionStates @ 0x1404C62E8 (PopDiagTraceSessionStates.c)
 *     PopPrintUserActivityPresence @ 0x1404F3274 (PopPrintUserActivityPresence.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  _DWORD Src[22]; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v3; // [rsp+80h] [rbp+8h] BYREF

  if ( PopUserPresentOverrideCount || !PopMaximumConnectionSessions )
    v0 = 0;
  else
    v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  if ( v0 != PopGlobalUserPresenceState )
  {
    v3 = v0;
    PopGlobalUserPresenceState = v0;
    v1 = (const wchar_t *)PopPrintUserActivityPresence(v0);
    PopPrintEx(3u, "PopAdaptive: Global user presence/activity state: %S\n", v1);
    PopDiagTraceSessionStates(&POP_ETW_ADPM_GLOBAL_INPUT_STATE, -1, v0);
    PopSetPowerSettingValueAcDc(&GUID_GLOBAL_USER_PRESENCE, 4u, &v3);
    memset(Src, 0, 0x48uLL);
    Src[2] = v0 != 0;
    Src[0] = 14;
    PopUmpoSendPowerMessage(Src, 0x48uLL);
  }
}
