/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1400ED21C
 * Callers:
 *     PoNotifyVSyncChange @ 0x1400ED1EC (PoNotifyVSyncChange.c)
 *     PopEnforceResiliencyScenarios @ 0x140147FD0 (PopEnforceResiliencyScenarios.c)
 *     PopCheckResiliencyScenarios @ 0x1404E4FEC (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406B34B0 (PopWnfFullscreenVideoCallback.c)
 *     PopControlDeepSleep @ 0x1406BE32C (PopControlDeepSleep.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14003FE30 (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x1400ED2A0 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x1400ED2D0 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400ED3F0 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x1400ED4D4 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x1400ED584 (PpmGetExitSamplingCountdown.c)
 *     PopCheckForDeepSleep @ 0x140241D1C (PopCheckForDeepSleep.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_14032E534 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || (unsigned __int8)PopCheckForDeepSleep()) )
    LatencyLimitWithoutResiliency = dword_1403D04D4;
  else
    LatencyLimitWithoutResiliency = PopFxGetLatencyLimitWithoutResiliency();
  result = (unsigned int)PopFxSystemLatencyLimit;
  if ( LatencyLimitWithoutResiliency != PopFxSystemLatencyLimit )
  {
    if ( (unsigned int)PpmGetExitSamplingCountdown() )
    {
      v2 = 1;
      if ( LatencyLimitWithoutResiliency > PopFxSystemLatencyLimit )
      {
        PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
        _InterlockedOr(v4, 0);
      }
    }
    else
    {
      v2 = 0;
    }
    PopDiagTraceSystemLatencyUpdate(0LL, LatencyLimitWithoutResiliency);
    PopFxSystemLatencyHint = LatencyLimitWithoutResiliency;
    v3 = PoFxSystemLatencyNotify(LatencyLimitWithoutResiliency);
    result = PpmIdleUsingStateSelection();
    if ( (_BYTE)result || v3 )
    {
      if ( v2 )
        result = KeFlushProcessWriteBuffers(1);
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
