/*
 * XREFs of PopFxGetLatencyLimitWithoutResiliency @ 0x14000A324
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 PopFxGetLatencyLimitWithoutResiliency()
{
  __int64 result; // rax

  if ( byte_140303E4F )
    return (unsigned int)dword_1403A9300;
  if ( PpmDisableVsyncLatencyUpdate )
    return (unsigned int)PpmLatencyToleranceLimit;
  result = (unsigned int)dword_1403A92FC;
  if ( !PopFxVSyncEnabled )
    return (unsigned int)PpmLatencyToleranceLimit;
  return result;
}
