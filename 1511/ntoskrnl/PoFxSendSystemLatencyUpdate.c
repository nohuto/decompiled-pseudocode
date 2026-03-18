/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x1400970CC
 * Callers:
 *     PoNotifyVSyncChange @ 0x140097068 (PoNotifyVSyncChange.c)
 *     PopEnforceResiliencyScenarios @ 0x140119F5C (PopEnforceResiliencyScenarios.c)
 *     PopCheckResiliencyScenarios @ 0x14045680C (PopCheckResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x140633E04 (PopWnfFullscreenVideoCallback.c)
 *     PopControlDeepSleep @ 0x14063DA90 (PopControlDeepSleep.c)
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x140095EE8 (KeFlushProcessWriteBuffers.c)
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x140097150 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x140097180 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400971C4 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x140097288 (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x140097338 (PpmGetExitSamplingCountdown.c)
 *     PopCheckForDeepSleep @ 0x1401F3C40 (PopCheckForDeepSleep.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_1402DDF74 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || (unsigned __int8)PopCheckForDeepSleep()) )
    LatencyLimitWithoutResiliency = dword_1403812FC;
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
