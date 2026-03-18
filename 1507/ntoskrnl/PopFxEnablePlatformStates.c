/*
 * XREFs of PopFxEnablePlatformStates @ 0x140237ED4
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x1406B0D08 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x14023BFE0 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 */

__int64 __fastcall PopFxEnablePlatformStates(int a1)
{
  __int64 result; // rax
  unsigned int v2; // ebx

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    result = PpmPlatformStates;
    if ( PpmPlatformStates && *(_DWORD *)PpmPlatformStates )
      v2 = *(_DWORD *)PpmPlatformStates - 1;
    else
      v2 = -1;
    if ( v2 != -1 )
    {
      PopFxSetDeviceAccountingCsPlatformState(v2);
      return PopFxInitializeSocSubsystemStaticInfo(v2);
    }
  }
  return result;
}
