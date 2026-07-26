/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C006B1E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisCancelWaitWake @ 0x1C0012DFC (ndisCancelWaitWake.c)
 *     ndisCancelWakeUpDpcTimer @ 0x1C001BF78 (ndisCancelWakeUpDpcTimer.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 *     NdisUnexpectedSsError @ 0x1C006B3B0 (NdisUnexpectedSsError.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006D278 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisRequestDeviceLowPower @ 0x1C009C64C (ndisRequestDeviceLowPower.c)
 *     ndisRequestWaitWake @ 0x1C00B2CB4 (ndisRequestWaitWake.c)
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
  if ( (unsigned __int8)byte_1C00895D6 >= 4u )
    WPP_SF_qD(0xFu, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)Context, a2);
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
      NdisUnexpectedSsError(Context, 753LL);
      if ( (unsigned __int8)byte_1C00895D6 >= 2u )
        WPP_SF_dq(0x10u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v9, Context);
    }
    SelectiveSuspend->LastRequestedIdlePowerState = a2;
    v10 = ndisRequestDeviceLowPower(Context, (enum _DEVICE_POWER_STATE)a2, ndisPowerSuspendRequestComplete, Context, 3);
    if ( v10 == 259 )
    {
      KeWaitForSingleObject(&SelectiveSuspend->PowerSuspendCompleteEvent, Executive, 0, 0, 0LL);
    }
    else
    {
      NdisUnexpectedSsError(Context, 779LL);
      if ( (unsigned __int8)byte_1C00895D6 >= 2u )
        WPP_SF_dq(0x11u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, v10, Context);
      v11 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
      SelectiveSuspend->Flags.Value &= ~8u;
      v12 = v11;
      KeSetEvent(&SelectiveSuspend->PowerSuspendCompleteEvent, 0, 0);
      KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
    }
    if ( (unsigned __int8)byte_1C00895D6 >= 4u )
      WPP_SF_q(0x12u, &WPP_fb3ee79da3763fe19127143656620238_Traceguids, (__int64)Context);
    v8 = v10;
  }
  NdisTraceLoggingComfirmIdleNotification(Context, a2, v8);
}
