/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x1406B0D08
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x1406B0D4C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406B1428 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PopFxEnablePlatformStates @ 0x140237ED4 (PopFxEnablePlatformStates.c)
 */

__int64 __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  __int64 result; // rax

  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopFxEnablePlatformStates(*a1);
  if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
    result = (unsigned int)(*(_DWORD *)PpmPlatformStates - 1);
  else
    result = 0xFFFFFFFFLL;
  if ( (_DWORD)result != -1 )
    return (unsigned int)_InterlockedExchange(&dword_140353880, result);
  return result;
}
