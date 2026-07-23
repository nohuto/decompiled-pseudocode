/*
 * XREFs of RtlpWnfNotificationThread @ 0x180005410
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWnfProcessCurrentDescriptor @ 0x180007370 (RtlpWnfProcessCurrentDescriptor.c)
 *     TpSetWaitEx @ 0x18000A960 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A6D10 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800D15A8 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfNotificationThread(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WAIT a3)
{
  _WNF_STATE_NAME *p_StateName; // rsi
  ULONG EventMask; // ebp
  ULONG v5; // edi
  _WNF_DELIVERY_DESCRIPTOR *NewDeliveryDescriptor; // rbx
  NTSTATUS CompleteWnfStateSubscription; // eax
  ULONG64 OldSubscriptionId; // [rsp+30h] [rbp-28h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-20h] BYREF

  p_StateName = 0LL;
  Timeout.QuadPart = -50000000LL;
  OldSubscriptionId = 0LL;
  EventMask = 0;
  v5 = 0;
  NewDeliveryDescriptor = 0LL;
  if ( !qword_180145FA8 )
    return;
  TpSetWaitEx(a3, a2, 0LL, 0LL);
  while ( 1 )
  {
    if ( !NewDeliveryDescriptor )
    {
      NewDeliveryDescriptor = (_WNF_DELIVERY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1030uLL);
      if ( !NewDeliveryDescriptor )
        break;
    }
    CompleteWnfStateSubscription = NtGetCompleteWnfStateSubscription(
                                     p_StateName,
                                     &OldSubscriptionId,
                                     EventMask,
                                     v5,
                                     NewDeliveryDescriptor,
                                     0x1030u);
    if ( CompleteWnfStateSubscription < 0 )
      goto LABEL_12;
    v5 = RtlpWnfProcessCurrentDescriptor(&NewDeliveryDescriptor->SubscriptionId);
    if ( v5 == 259 )
    {
      p_StateName = 0LL;
      EventMask = 0;
      OldSubscriptionId = 0LL;
      v5 = 0;
      goto LABEL_10;
    }
    p_StateName = &NewDeliveryDescriptor->StateName;
    OldSubscriptionId = NewDeliveryDescriptor->SubscriptionId;
    EventMask = NewDeliveryDescriptor->EventMask;
    if ( v5 == -1073741267 )
    {
      RtlpWnfCalculateAndSetNextTimer();
LABEL_10:
      NewDeliveryDescriptor = 0LL;
    }
  }
  CompleteWnfStateSubscription = -1073741801;
LABEL_12:
  if ( CompleteWnfStateSubscription != -2147483622 )
    TpSetWaitEx(a3, a2, &Timeout, 0LL);
  if ( NewDeliveryDescriptor )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, NewDeliveryDescriptor);
}
