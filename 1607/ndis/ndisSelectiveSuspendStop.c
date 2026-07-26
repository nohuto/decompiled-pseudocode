/*
 * XREFs of ndisSelectiveSuspendStop @ 0x1C006C56C
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E444 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisPowerSaveStop @ 0x1C009E190 (ndisPowerSaveStop.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00D29F0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00E30F8 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ndisPmInitializeMiniport @ 0x1C00E621C (ndisPmInitializeMiniport.c)
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C006A920 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisCancelIdleRequestSync @ 0x1C006B53C (ndisCancelIdleRequestSync.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r15
  char v6; // r12
  char v7; // r14
  KIRQL v8; // bp
  bool v9; // zf
  KIRQL v10; // dl
  KIRQL v11; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = LOBYTE(a1->Flags) >> 7;
  v6 = 0;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  if ( v5
    && !SelectiveSuspend->PendingControlOps.Value
    && !SelectiveSuspend->PendingPnPEventCount
    && !SelectiveSuspend->PendingDirectOidCount
    && !SelectiveSuspend->PendingCancelDirectOidCount
    && !SelectiveSuspend->PendingSendNblCount
    && !SelectiveSuspend->PendingCancelSendCount
    && !SelectiveSuspend->PendingReceiveReturnCount
    && !SelectiveSuspend->StopFlags.Value )
  {
    v7 = 1;
    KeClearEvent(&SelectiveSuspend->WdfD0LockedForSSEvent);
  }
  if ( (unsigned __int8)byte_1C00895D6 >= 4u )
    WPP_SF_qD(0x21u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)a1, a2);
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        SelectiveSuspend->StopFlags.Value |= 0x40u;
        break;
      case 8:
        ++SelectiveSuspend->PendingPnPOpCount;
        SelectiveSuspend->StopFlags.Value |= 0x80u;
        break;
      case 11:
        SelectiveSuspend->StopFlags.Value |= 0x400u;
        break;
      case 13:
        SelectiveSuspend->StopFlags.Value |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        SelectiveSuspend->StopFlags.Value |= 0x20u;
        break;
      case 1:
        SelectiveSuspend->StopFlags.Value |= 1u;
        break;
      case 2:
        SelectiveSuspend->StopFlags.Value |= 2u;
        break;
      case 3:
        SelectiveSuspend->StopFlags.Value |= 4u;
        SelectiveSuspend->Flags.Value |= 0x400u;
        break;
      case 4:
        SelectiveSuspend->StopFlags.Value |= 8u;
        break;
      case 5:
        SelectiveSuspend->StopFlags.Value |= 0x10u;
        break;
    }
  }
  SelectiveSuspend->LastBusyContext = 0;
  SelectiveSuspend->LastBusyEvent.Value = a2;
  if ( v5 )
  {
    if ( v7 )
      goto LABEL_42;
    v9 = KeReadStateEvent(&SelectiveSuspend->WdfD0LockedForSSEvent) == 0;
  }
  else
  {
    if ( (SelectiveSuspend->Flags.Value & 1) != 0 )
    {
      KeCancelTimer(&SelectiveSuspend->IdleTimer.Timer);
      SelectiveSuspend->Flags.Value &= ~1u;
      v6 = 1;
    }
    v9 = (SelectiveSuspend->Flags.Value & 0x200) == 0;
  }
  if ( !v9 )
  {
    v10 = v8;
LABEL_49:
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v10);
    return;
  }
LABEL_42:
  KeReleaseSpinLock(&SelectiveSuspend->Lock, v8);
  if ( !v5 )
  {
    ndisCancelWaitWake((__int64)a1);
    if ( v6 )
    {
      KeFlushQueuedDpcs();
      KeWaitForSingleObject(&SelectiveSuspend->IdleWorkItemCompleteEvent, Executive, 0, 0, 0LL);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v11 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
    SelectiveSuspend->Flags.Value |= 0x200u;
    v10 = v11;
    goto LABEL_49;
  }
  if ( v7 )
    ndisWdfAcquirePowerReferenceHelper(a1);
  else
    KeWaitForSingleObject(&SelectiveSuspend->WdfD0LockedForSSEvent, Executive, 0, 0, 0LL);
}
