/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140530ABC
 * Callers:
 *     PoInitSystem @ 0x1407655F0 (PoInitSystem.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140126A00 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x140127004 (PpmBeginHighPerfRequest.c)
 */

__int64 PopSetupHighPerfPowerRequest()
{
  __int64 result; // rax
  __int64 v1; // rdx

  if ( !PpmHighPerfDuration[0] )
    return 0LL;
  result = PpmBeginHighPerfRequest();
  if ( (int)result >= 0 )
    return PpmEndHighPerfRequest(0, v1);
  return result;
}
