/*
 * XREFs of ndisRequestPowerResume @ 0x1C00682B4
 * Callers:
 *     NdisMIdleNotificationCompleteEx @ 0x1C0067030 (NdisMIdleNotificationCompleteEx.c)
 * Callees:
 *     ndisMSendCompleteNetBufferListsInternal @ 0x1C0001DF0 (ndisMSendCompleteNetBufferListsInternal.c)
 *     ndisRequestDevicePowerD0 @ 0x1C0010474 (ndisRequestDevicePowerD0.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006732C (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisMoveLinkedList @ 0x1C00677B4 (ndisMoveLinkedList.c)
 *     ndisReplayRecvNbls @ 0x1C0067A60 (ndisReplayRecvNbls.c)
 */

void __fastcall ndisRequestPowerResume(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  KIRQL v3; // al
  unsigned int Value; // ecx
  KIRQL v5; // si
  struct _NET_BUFFER_LIST *First; // rbp
  struct _NET_BUFFER_LIST *v7; // r14
  struct _NET_BUFFER_LIST *Alignment; // rax
  __int64 *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v3 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  v5 = v3;
  if ( (Value & 0x30) == 0x10 )
  {
    if ( (Value & 0x400) != 0 )
    {
      KeSetEvent(&SelectiveSuspend->DevicePowerReadyEvent, 0, 0);
      First = SelectiveSuspend->PendingSendNblQueue.First;
      SelectiveSuspend->PendingSendNblQueue.First = 0LL;
      SelectiveSuspend->PendingSendNblQueue.Last = &SelectiveSuspend->PendingSendNblQueue.First;
      v7 = SelectiveSuspend->PendingReceiveNblQueue.First;
      SelectiveSuspend->PendingReceiveNblQueue.First = 0LL;
      SelectiveSuspend->PendingReceiveNblQueue.Last = &SelectiveSuspend->PendingReceiveNblQueue.First;
      ndisMoveLinkedList(v9, (__int64)&SelectiveSuspend->PendingDirectOidQueue);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
      if ( First )
      {
        Alignment = First;
        do
        {
          Alignment->Status = -1073676271;
          Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
        }
        while ( Alignment );
        ndisMSendCompleteNetBufferListsInternal((__int64)a1, First, 0);
      }
      if ( v7 )
        ndisReplayRecvNbls((__int64)a1, v7);
      ndisCancelDequeuedDirectOidRequests((__int64)a1, v9);
    }
    else
    {
      SelectiveSuspend->Flags.Value = Value | 0x20;
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v3);
      ndisRequestDevicePowerD0(a1, NdisMEventD0_SSResume);
    }
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v3);
  }
}
