/*
 * XREFs of PopEvaluateGlobalUserStatus @ 0x14052E744
 * Callers:
 *     PopSetSessionUserStatus @ 0x14052E674 (PopSetSessionUserStatus.c)
 *     PopUserPresentOverride @ 0x140674D04 (PopUserPresentOverride.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400767D0 (RtlNumberOfSetBits.c)
 *     PopPrintEx @ 0x140081AE0 (PopPrintEx.c)
 *     PopUmpoSendPowerMessage @ 0x1400FB738 (PopUmpoSendPowerMessage.c)
 *     ZwUpdateWnfStateData @ 0x14015D3C0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     PopSetPowerSettingValueAcDc @ 0x1403F5BE4 (PopSetPowerSettingValueAcDc.c)
 *     PopPrintUserActivityPresence @ 0x14052E86C (PopPrintUserActivityPresence.c)
 *     PopDiagTraceSessionStateCounted @ 0x14052E8F8 (PopDiagTraceSessionStateCounted.c)
 */

void PopEvaluateGlobalUserStatus()
{
  unsigned int v0; // ebx
  const wchar_t *v1; // rax
  int v2; // r9d
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD Src[20]; // [rsp+40h] [rbp+7h] BYREF
  unsigned int v6; // [rsp+A0h] [rbp+67h] BYREF
  int v7; // [rsp+A8h] [rbp+6Fh] BYREF
  int v8; // [rsp+ACh] [rbp+73h]

  if ( PopUserPresentOverrideCount || !PopMaximumConnectionSessions )
    v0 = 0;
  else
    v0 = RtlNumberOfSetBits(&PopConnectionBitmap) == 0 ? 2 : 0;
  if ( v0 != PopGlobalUserPresenceState )
  {
    v6 = v0;
    ++PopGlobalUserPresenceStateTransitions;
    PopGlobalUserPresenceState = v0;
    v1 = (const wchar_t *)PopPrintUserActivityPresence(v0);
    PopPrintEx(3u, "PopAdaptive: Global user presence/activity state: %S id: %I32u\n", v1, v2);
    PopDiagTraceSessionStateCounted(v4, v3, v0);
    PopSetPowerSettingValueAcDc((__int64)&GUID_GLOBAL_USER_PRESENCE, 4u, (__int64)&v6);
    if ( v0 )
    {
      v7 = 1;
      memset(Src, 0, 0x48uLL);
      Src[2] = 1;
    }
    else
    {
      v7 = 0;
      memset(Src, 0, 0x48uLL);
      Src[2] = 0;
    }
    Src[0] = 14;
    PopUmpoSendPowerMessage(Src, 0x48uLL, 0);
    v8 = PopGlobalUserPresenceStateTransitions;
    ZwUpdateWnfStateData((__int64)&WNF_PO_SLEEP_STUDY_USER_PRESENCE_CHANGED, (__int64)&v7, 8LL);
  }
}
