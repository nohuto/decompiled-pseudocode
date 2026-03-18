/*
 * XREFs of PopFxEnablePlatformStates @ 0x140202BA4
 * Callers:
 *     PpmEnableCoordinatedIdleStates @ 0x14066AB28 (PpmEnableCoordinatedIdleStates.c)
 * Callees:
 *     PpmGetDeepSleepPlatformStateIndex @ 0x1401FF9E8 (PpmGetDeepSleepPlatformStateIndex.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140203BC0 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopPepPlatformStateRegistered @ 0x1402069C8 (PopPepPlatformStateRegistered.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 */

void __fastcall PopFxEnablePlatformStates(int a1)
{
  unsigned int DeepSleepPlatformStateIndex; // eax
  unsigned int v2; // ebx

  if ( a1 )
  {
    PopPepPlatformStateRegistered();
    DeepSleepPlatformStateIndex = PpmGetDeepSleepPlatformStateIndex();
    v2 = DeepSleepPlatformStateIndex;
    if ( DeepSleepPlatformStateIndex != -1 )
    {
      PopFxSetDeviceAccountingCsPlatformState(DeepSleepPlatformStateIndex);
      PopFxInitializeSocSubsystemStaticInfo(v2);
    }
  }
}
