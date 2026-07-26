/*
 * XREFs of ndisSSIdleTimerWorkItem @ 0x1C00675B0
 * Callers:
 *     <none>
 * Callees:
 *     ndisSubmitIdleRequest @ 0x1C0068170 (ndisSubmitIdleRequest.c)
 */

void __fastcall ndisSSIdleTimerWorkItem(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rdi
  char v4; // bl
  KIRQL v5; // dl
  KIRQL v6; // al
  KIRQL v7; // bl

  SelectiveSuspend = a2->SelectiveSuspend;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( !SelectiveSuspend->StopFlags.Value
    && !SelectiveSuspend->PendingControlOps.Value
    && !SelectiveSuspend->PendingPnPEventCount
    && !SelectiveSuspend->PendingDirectOidCount
    && !SelectiveSuspend->PendingCancelDirectOidCount
    && !SelectiveSuspend->PendingSendNblCount
    && !SelectiveSuspend->PendingCancelSendCount
    && !SelectiveSuspend->PendingReceiveReturnCount
    && SelectiveSuspend->IdleTickCount >= 3
    && (SelectiveSuspend->Flags.Value & 0x14) == 0 )
  {
    SelectiveSuspend->IdleTickCount = 0;
    v4 = 1;
  }
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
  if ( v4 )
    ndisSubmitIdleRequest(a2);
  v6 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  SelectiveSuspend->Flags.Value &= ~2u;
  v7 = v6;
  KeSetEvent(&SelectiveSuspend->IdleWorkItemCompleteEvent, 0, 0);
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
  ndisDereferenceMiniport((__int64)a2, 0x12u);
}
