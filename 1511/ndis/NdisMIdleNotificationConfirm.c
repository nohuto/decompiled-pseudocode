/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C00661F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelWakeUpDpcTimer @ 0x1C001378C (ndisCancelWakeUpDpcTimer.c)
 *     ndisCancelWaitWake @ 0x1C0024E7C (ndisCancelWaitWake.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C0047594 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C00663C0 (NdisUnexpectedSsError.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006883C (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C0097E18 (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00AC8D0 (ndisRequestWaitWake.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *Context, enum _NDIS_DEVICE_POWER_STATE a2)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // al
  unsigned int Value; // ecx
  KIRQL v7; // bl
  int v8; // r8d
  int v9; // ebx
  int v10; // r14d
  KIRQL v11; // al
  KIRQL v12; // bl

  SelectiveSuspend = Context->SelectiveSuspend;
  if ( (unsigned __int8)byte_1C0083716 >= 4u )
    WPP_SF_qD(0xFu, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)Context, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  v7 = v5;
  if ( (Value & 0x100) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v5);
    ndisAoAcIdleRequestConfirm(Context);
    v8 = 0;
  }
  else
  {
    SelectiveSuspend->Flags.Value = Value | 8;
    KeClearEvent(&SelectiveSuspend->PowerSuspendCompleteEvent);
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v7);
    ndisCancelWakeUpDpcTimer((__int64)Context);
    ndisCancelWaitWake((__int64)Context);
    v9 = ndisRequestWaitWake(Context, ndisIdleWaitWakeCallback);
    if ( v9 != 259 )
    {
      NdisUnexpectedSsError(Context, 728LL);
      if ( (unsigned __int8)byte_1C0083716 >= 2u )
        WPP_SF_dq(0x10u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, v9, Context);
    }
    SelectiveSuspend->LastRequestedIdlePowerState = a2;
    v10 = ndisRequestDeviceLowPower(Context, (enum _DEVICE_POWER_STATE)a2, ndisPowerSuspendRequestComplete, Context, 3);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&SelectiveSuspend->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      NdisUnexpectedSsError(Context, 754LL);
      if ( (unsigned __int8)byte_1C0083716 >= 2u )
        WPP_SF_dq(0x11u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, v10, Context);
      v11 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v12 = v11;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
    }
    if ( (unsigned __int8)byte_1C0083716 >= 4u )
      WPP_SF_q(0x12u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, (__int64)Context);
    v8 = v10;
  }
  NdisTraceLoggingComfirmIdleNotification(Context, a2, v8);
}
