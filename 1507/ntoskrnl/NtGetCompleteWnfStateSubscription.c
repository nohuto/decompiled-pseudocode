/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x14050126C
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013FC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 */

NTSTATUS __cdecl NtGetCompleteWnfStateSubscription(
        PWNF_STATE_NAME OldDescriptorStateName,
        ULONG64 *OldSubscriptionId,
        ULONG OldDescriptorEventMask,
        ULONG OldDescriptorStatus,
        PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
        ULONG DescriptorSize)
{
  __int64 *v7; // rdx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // edi
  unsigned __int64 v10; // r14
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 v14; // [rsp+50h] [rbp-28h] BYREF

  v7 = (__int64 *)OldDescriptorStateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  v10 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[19];
  if ( v10 )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_11;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      if ( (unsigned __int64)OldDescriptorStateName >= MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v14 = *v7;
      if ( (unsigned __int64)OldSubscriptionId >= MmUserProbeAddress )
        OldSubscriptionId = (ULONG64 *)MmUserProbeAddress;
      v9 = ExpWnfCompleteThreadSubscriptions(
             v10,
             (unsigned int)&v14,
             *OldSubscriptionId,
             OldDescriptorEventMask,
             OldDescriptorStatus);
      if ( v9 >= 0 )
      {
LABEL_11:
        if ( DescriptorSize )
        {
          if ( DescriptorSize < 0x1030 )
          {
            v9 = -1073741789;
          }
          else
          {
            ProbeForWrite(NewDeliveryDescriptor, DescriptorSize, 8u);
            v9 = ExpWnfDeliverThreadNotifications(v10, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v9;
}
