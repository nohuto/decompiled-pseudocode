/*
 * XREFs of ExQueryWnfStateData @ 0x1404BB5FC
 * Callers:
 *     PopWnfAudioCallback @ 0x1404EACF8 (PopWnfAudioCallback.c)
 *     HvlpConnectedStandbyWnfCallback @ 0x1405F6EDC (HvlpConnectedStandbyWnfCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x140633E04 (PopWnfFullscreenVideoCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x140633EA0 (PopWnfUserAwayPredictionCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x14063C334 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExpWnfReadStateData @ 0x1403E5CF4 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404BB694 (ExpWnfAcquireSubscriptionNameInstance.c)
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
    ExReleaseRundownProtection_0(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)StateData;
}
