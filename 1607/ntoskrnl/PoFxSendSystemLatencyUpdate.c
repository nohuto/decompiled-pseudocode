/*
 * XREFs of PoFxSendSystemLatencyUpdate @ 0x14000A2A0
 * Callers:
 *     PoNotifyVSyncChange @ 0x14000A270 (PoNotifyVSyncChange.c)
 *     PopDeepSleepEvaluateCallback @ 0x14020B1B8 (PopDeepSleepEvaluateCallback.c)
 *     PopCheckResiliencyScenarios @ 0x1403F5C64 (PopCheckResiliencyScenarios.c)
 *     PopEnforceResiliencyScenarios @ 0x140534484 (PopEnforceResiliencyScenarios.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C228 (PopWnfFullscreenVideoCallback.c)
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PopFxGetLatencyLimitWithoutResiliency @ 0x14000A324 (PopFxGetLatencyLimitWithoutResiliency.c)
 *     PpmIdleUsingStateSelection @ 0x14000A354 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x14000A398 (PoFxSystemLatencyNotify.c)
 *     PopDiagTraceSystemLatencyUpdate @ 0x14000A45C (PopDiagTraceSystemLatencyUpdate.c)
 *     PpmGetExitSamplingCountdown @ 0x14000A50C (PpmGetExitSamplingCountdown.c)
 *     KeFlushProcessWriteBuffers @ 0x1400C892C (KeFlushProcessWriteBuffers.c)
 */

__int64 PoFxSendSystemLatencyUpdate()
{
  unsigned int LatencyLimitWithoutResiliency; // ebx
  __int64 result; // rax
  char v2; // di
  char v3; // si
  __int64 v4; // rcx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( byte_140303F74 && (!PopDeepSleepIsEnabled && PopPdcIdleResiliency || PopDeepSleepIsEngaged) )
    LatencyLimitWithoutResiliency = dword_1403A9304;
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
        _InterlockedOr(v5, 0);
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
      {
        LOBYTE(v4) = 1;
        result = KeFlushProcessWriteBuffers(v4);
      }
    }
    PopFxSystemLatencyLimit = LatencyLimitWithoutResiliency;
  }
  return result;
}
