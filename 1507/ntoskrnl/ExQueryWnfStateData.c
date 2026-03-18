/*
 * XREFs of ExQueryWnfStateData @ 0x140563580
 * Callers:
 *     PopWnfAudioCallback @ 0x14055EEA4 (PopWnfAudioCallback.c)
 *     PopWnfFullscreenVideoCallback @ 0x1406B34B0 (PopWnfFullscreenVideoCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1406BBA88 (PopEsWnfSubscriptionOverrideCallback.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpWnfReadStateData @ 0x140502F10 (ExpWnfReadStateData.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140563650 (ExpWnfAcquireSubscriptionNameInstance.c)
 */

__int64 __fastcall ExQueryWnfStateData(__int64 a1, _DWORD *a2, void *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  struct _EX_RUNDOWN_REF *v9; // rdi
  int StateData; // ebx
  unsigned __int64 v11; // rtt
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = ExpWnfAcquireSubscriptionNameInstance(a1, a1);
  v9 = (struct _EX_RUNDOWN_REF *)v8;
  if ( v8 )
  {
    StateData = ExpWnfReadStateData(v8, a2, a3, (unsigned int)*a4, a4);
    if ( StateData >= 0 )
      StateData = 0;
    _m_prefetchw(&v9[1]);
    v11 = v9[1].Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)&v9[1], v11 - 2, v11) )
      ExfReleaseRundownProtection(v9 + 1);
  }
  else
  {
    StateData = -1073741772;
  }
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)StateData;
}
