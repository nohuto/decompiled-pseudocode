/*
 * XREFs of NtUnsubscribeWnfStateChange @ 0x140503CBC
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpCaptureWnfStateName @ 0x140502DAC (ExpCaptureWnfStateName.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140503D98 (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 */

NTSTATUS __cdecl NtUnsubscribeWnfStateChange(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rdx
  struct _KTHREAD *v3; // rcx
  __int16 v4; // ax
  NTSTATUS v6; // [rsp+24h] [rbp-14h]
  unsigned __int64 v7; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = ExpCaptureWnfStateName((__int64 *)StateName, &v7, KeGetCurrentThread()->PreviousMode);
  if ( v6 >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[19];
    if ( v2 )
    {
      v6 = ExpWnfAcquireSubscriptionByName(v7, v2, &P);
      if ( v6 >= 0 )
      {
        ExpWnfDeleteSubscription(P);
        v6 = 0;
      }
    }
    else
    {
      v6 = -1073741772;
    }
  }
  v3 = KeGetCurrentThread();
  v4 = v3->KernelApcDisable + 1;
  v3->KernelApcDisable = v4;
  if ( !v4
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v3->ApcState.ApcListHead[0].Flink != &v3->152
    && !v3->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
