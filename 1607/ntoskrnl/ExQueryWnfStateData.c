/*
 * XREFs of ExQueryWnfStateData @ 0x1404E1320
 * Callers:
 *     PopErratumUpdateCallback @ 0x140205744 (PopErratumUpdateCallback.c)
 *     PopWnfAudioCallback @ 0x14052925C (PopWnfAudioCallback.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140620C78 (VslpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x14066C228 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14066C2C4 (PopWnfUserAwayPredictionCallback.c)
 *     PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x1406738AC (PopEsWnfSubscriptionBgActivityPolicyCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140673934 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     ExpWnfReadStateData @ 0x140462FA0 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404E13B8 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, unsigned int *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, *a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    ExReleaseRundownProtection(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)StateData;
}
