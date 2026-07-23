/*
 * XREFs of NtGetCompleteWnfStateSubscription @ 0x1403E3EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1403E3FEC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
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
  NTSTATUS v9; // ebx
  struct _LIST_ENTRY *Flink; // rsi
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  v7 = (__int64 *)OldDescriptorStateName;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = -1073741811;
  Flink = KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Flink;
  if ( Flink )
  {
    if ( !OldDescriptorStateName || !OldSubscriptionId )
      goto LABEL_11;
    if ( OldDescriptorEventMask && (!OldDescriptorStatus || OldDescriptorStatus == -1073741267) )
    {
      if ( (unsigned __int64)OldDescriptorStateName >= MmUserProbeAddress )
        v7 = (__int64 *)MmUserProbeAddress;
      v12 = *v7;
      if ( (unsigned __int64)OldSubscriptionId >= MmUserProbeAddress )
        OldSubscriptionId = (ULONG64 *)MmUserProbeAddress;
      v9 = ExpWnfCompleteThreadSubscriptions(
             (_DWORD)Flink,
             (unsigned int)&v12,
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
            v9 = ExpWnfDeliverThreadNotifications(Flink, NewDeliveryDescriptor, DescriptorSize);
          }
        }
      }
    }
  }
  KeLeaveCriticalRegion();
  return v9;
}
