/*
 * XREFs of PpmGetExitSamplingCountdown @ 0x14000A50C
 * Callers:
 *     PoFxSendSystemLatencyUpdate @ 0x14000A2A0 (PoFxSendSystemLatencyUpdate.c)
 *     PpmIdleExecuteTransition @ 0x1400DA540 (PpmIdleExecuteTransition.c)
 * Callees:
 *     <none>
 */

__int64 PpmGetExitSamplingCountdown()
{
  unsigned int v0; // ecx
  __int64 result; // rax

  v0 = PpmExitLatencySamplingPercentage;
  result = 0LL;
  if ( (unsigned int)PpmExitLatencySamplingPercentage > 0x64 )
    v0 = 100;
  if ( v0 )
    return 0x64 / v0;
  return result;
}
