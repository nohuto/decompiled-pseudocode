/*
 * XREFs of PpmEnableCoordinatedIdleStates @ 0x140632660
 * Callers:
 *     PpmInstallCoordinatedIdleStates @ 0x140632690 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1401E7040 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxEnablePlatformStates @ 0x1401EA1CC (PopFxEnablePlatformStates.c)
 */

__int64 __fastcall PpmEnableCoordinatedIdleStates(int *a1, char a2)
{
  __int64 result; // rax

  PpmIdleCoordinatedMode = a2;
  PpmPlatformStates = (__int64)a1;
  PopFxEnablePlatformStates(*a1);
  result = PpmGetDeepSleepPlatformStateIndex();
  if ( (_DWORD)result != -1 )
    return (unsigned int)_InterlockedExchange(&dword_140305B00, result);
  return result;
}
