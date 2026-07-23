/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x140581AE8
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x140131ACC (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x1401323F8 (PpmBeginHighPerfRequest.c)
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
