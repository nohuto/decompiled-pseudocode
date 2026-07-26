/*
 * XREFs of ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006AB08
 * Callers:
 *     ndisReturnNblWithPowerQueue @ 0x1C0001000 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C000F020 (ndisQueuedCheckForHang.c)
 *     ndisSetBusyAsync @ 0x1C0010E00 (ndisSetBusyAsync.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0044EF8 (ndisDoCancelDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C0053E20 (ndisMCancelSendNetBufferListsOnMiniport.c)
 * Callees:
 *     Template_qq @ 0x1C004E748 (Template_qq.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C006A6B4 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006A920 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C006B3EC (ndisCancelDequeuedDirectOidRequests.c)
 *     ndisIsPowerReferencedForSelectiveSuspend @ 0x1C006B904 (ndisIsPowerReferencedForSelectiveSuspend.c)
 */

char __fastcall ndisWdfSetBusyAsync(struct _NDIS_MINIPORT_BLOCK *a1, int a2, __int32 a3, void *a4)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  enum _NDIS_SS_BUSY_REASON v8; // ebp
  char v9; // r14
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // r12
  char v13; // al
  char v14; // bl
  PKSPIN_LOCK v15; // rcx
  PKSPIN_LOCK v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-38h]
  _QWORD v20[5]; // [rsp+30h] [rbp-28h] BYREF

  SelectiveSuspend = a1->SelectiveSuspend;
  v20[1] = v20;
  v20[0] = v20;
  v8 = 0;
  v9 = 0;
  v10 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  LOBYTE(v11) = 1;
  v12 = v10;
  if ( (unsigned __int8)ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v11) )
  {
    v13 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, a2, (enum _NDIS_SS_BUSY_REASON)a3);
    SelectiveSuspend->LastBusyContext = 0;
    v14 = v13;
    SelectiveSuspend->LastBusyEvent.Value = a3;
    KeReleaseSpinLock(v15, v12);
    return v14;
  }
  else
  {
    if ( !SelectiveSuspend->PendingControlOps.Value
      && !SelectiveSuspend->PendingPnPEventCount
      && !SelectiveSuspend->PendingDirectOidCount
      && !SelectiveSuspend->PendingCancelDirectOidCount
      && !SelectiveSuspend->PendingSendNblCount
      && !SelectiveSuspend->PendingCancelSendCount
      && !SelectiveSuspend->PendingReceiveReturnCount
      && !SelectiveSuspend->StopFlags.Value )
    {
      v9 = 1;
      KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
      v8 = a3;
    }
    ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, a2, (enum _NDIS_SS_BUSY_REASON)a3);
    KeReleaseSpinLock(v17, v12);
    if ( v9 )
      ndisWdfAcquirePowerReferenceHelper(a1);
    if ( (_QWORD *)v20[0] != v20 )
      ndisCancelDequeuedDirectOidRequests(a1, v20);
    if ( v8 )
    {
      if ( (Microsoft_Windows_NDISEnableBits & 0x800) != 0 )
      {
        LODWORD(v19) = v8;
        Template_qq(v18, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, v19);
      }
    }
    return 1;
  }
}
